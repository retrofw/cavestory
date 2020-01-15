TARGET = cavestory/cavestory.dge

DEBUG = 0

CHAINPREFIX := /opt/mipsel-linux-uclibc
CROSS_COMPILE := $(CHAINPREFIX)/usr/bin/mipsel-linux-

CC = $(CROSS_COMPILE)gcc
CXX = $(CROSS_COMPILE)g++
STRIP = $(CROSS_COMPILE)strip

SYSROOT     := $(shell $(CXX) --print-sysroot)
SDL_CFLAGS  := $(shell $(SYSROOT)/usr/bin/sdl-config --cflags)
SDL_LIBS    := $(shell $(SYSROOT)/usr/bin/sdl-config --libs)

export TARGET DEBUG CHAINPREFIX CROSS_COMPILE CC CXX STRIP SYSROOT SDL_CFLAGS SDL_LIBS

all:
	make -C src

clean:
	make -C src clean

ipk: all
	@rm -rf /tmp/.cavestory-ipk/ && mkdir -p /tmp/.cavestory-ipk/root/home/retrofw/games/cavestory /tmp/.cavestory-ipk/root/home/retrofw/apps/gmenu2x/sections/games
	@cp -r cavestory/data cavestory/endpic cavestory/org cavestory/pxt cavestory/cavestory.elf cavestory/cavestory.man.txt cavestory/cavestory.png cavestory/chfont.ttf cavestory/Config.dat cavestory/drum.pcm cavestory/font.ttf cavestory/settings.dat cavestory/smalfont.bmp cavestory/sndcache.pcm cavestory/sprites.sif cavestory/stage.dat cavestory/tilekey.dat cavestory/wavetable.dat /tmp/.cavestory-ipk/root/home/retrofw/games/cavestory
	@cp cavestory/cavestory.lnk /tmp/.cavestory-ipk/root/home/retrofw/apps/gmenu2x/sections/games
	@sed "s/^Version:.*/Version: $$(date +%Y%m%d)/" cavestory/control > /tmp/.cavestory-ipk/control
	@cp cavestory/conffiles /tmp/.cavestory-ipk/
	@tar --owner=0 --group=0 -czvf /tmp/.cavestory-ipk/control.tar.gz -C /tmp/.cavestory-ipk/ control conffiles
	@tar --owner=0 --group=0 -czvf /tmp/.cavestory-ipk/data.tar.gz -C /tmp/.cavestory-ipk/root/ .
	@echo 2.0 > /tmp/.cavestory-ipk/debian-binary
	@ar r cavestory/cavestory.ipk /tmp/.cavestory-ipk/control.tar.gz /tmp/.cavestory-ipk/data.tar.gz /tmp/.cavestory-ipk/debian-binary

opk: all
	@mksquashfs \
	cavestory/default.retrofw.desktop \
	cavestory/cavestory.dge \
	cavestory/data \
	cavestory/endpic \
	cavestory/org \
	cavestory/pxt \
	cavestory/cavestory.man.txt \
	cavestory/cavestory.png \
	cavestory/chfont.ttf \
	cavestory/Config.dat \
	cavestory/drum.pcm \
	cavestory/font.ttf \
	cavestory/settings.dat \
	cavestory/smalfont.bmp \
	cavestory/sndcache.pcm \
	cavestory/sprites.sif \
	cavestory/stage.dat \
	cavestory/tilekey.dat \
	cavestory/wavetable.dat \
	cavestory/cavestory.opk \
	-all-root -noappend -no-exports -no-xattrs
