TARGET ?= cavestory/cavestory.dge

DEBUG ?= 0

CC ?= $(CROSS_COMPILE)gcc
CXX ?= $(CROSS_COMPILE)g++
STRIP ?= $(CROSS_COMPILE)strip

SYSROOT     ?= $(shell $(CXX) --print-sysroot)
SDL_CFLAGS  ?= $(shell $(SYSROOT)/usr/bin/sdl-config --cflags)
SDL_LIBS    ?= $(shell $(SYSROOT)/usr/bin/sdl-config --libs)

all: nx

nx:  main.o game.o object.o ObjManager.o \
	 map.o TextBox/TextBox.o TextBox/YesNoPrompt.o TextBox/ItemImage.o TextBox/StageSelect.o \
	 TextBox/SaveSelect.o profile.o settings.o platform.o platform/Linux/vbesync.o \
	 caret.o slope.o player.o playerstats.o p_arms.o \
	 statusbar.o tsc.o screeneffect.o floattext.o input.o \
	 replay.o trig.o inventory.o map_system.o debug.o \
	 console.o niku.o ai/ai.o ai/first_cave/first_cave.o ai/village/village.o \
	 ai/village/balrog_boss_running.o ai/village/ma_pignon.o ai/egg/egg.o ai/egg/igor.o ai/egg/egg2.o \
	 ai/weed/weed.o ai/weed/balrog_boss_flying.o ai/weed/frenzied_mimiga.o ai/sand/sand.o ai/sand/puppy.o \
	 ai/sand/curly_boss.o ai/sand/toroko_frenzied.o ai/maze/maze.o ai/maze/critter_purple.o ai/maze/gaudi.o \
	 ai/maze/pooh_black.o ai/maze/balrog_boss_missiles.o ai/maze/labyrinth_m.o ai/almond/almond.o ai/oside/oside.o \
	 ai/plantation/plantation.o ai/last_cave/last_cave.o ai/final_battle/balcony.o ai/final_battle/misery.o ai/final_battle/final_misc.o \
	 ai/final_battle/doctor.o ai/final_battle/doctor_frenzied.o ai/final_battle/doctor_common.o ai/final_battle/sidekicks.o ai/hell/hell.o \
	 ai/hell/ballos_priest.o ai/hell/ballos_misc.o ai/npc/balrog.o ai/npc/curly.o ai/npc/curly_ai.o \
	 ai/npc/misery.o ai/npc/npcregu.o ai/npc/npcguest.o ai/npc/npcplayer.o ai/weapons/weapons.o \
	 ai/weapons/polar_mgun.o ai/weapons/missile.o ai/weapons/fireball.o ai/weapons/blade.o ai/weapons/snake.o \
	 ai/weapons/nemesis.o ai/weapons/bubbler.o ai/weapons/spur.o ai/weapons/whimstar.o ai/sym/sym.o \
	 ai/sym/smoke.o ai/balrog_common.o ai/IrregularBBox.o stageboss.o ai/boss/omega.o \
	 ai/boss/balfrog.o ai/boss/x.o ai/boss/core.o ai/boss/ironhead.o ai/boss/sisters.o \
	 ai/boss/undead_core.o ai/boss/heavypress.o ai/boss/ballos.o endgame/island.o endgame/misc.o \
	 endgame/credits.o endgame/CredReader.o intro/intro.o intro/title.o pause/pause.o \
	 pause/options.o pause/dialog.o pause/message.o pause/objects.o graphics/nxsurface.o \
	 graphics/graphics.o graphics/sprites.o graphics/tileset.o graphics/font.o graphics/safemode.o \
	 graphics/palette.o sound/sound.o sound/sslib.o sound/org.o sound/pxt.o \
	 siflib/sif.o siflib/sifloader.o siflib/sectSprites.o siflib/sectStringArray.o extract/extract.o \
	 extract/extractpxt.o extract/extractfiles.o extract/extractstages.o extract/crc.o autogen/AssignSprites.o \
	 autogen/objnames.o stagedata.o common/FileBuffer.o common/InitList.o common/BList.o \
	 common/StringList.o common/DBuffer.o common/DString.o common/bufio.o common/stat.o \
	 common/misc.o
	$(CXX) $(CFLAGS) -o ../$(TARGET) \
	 main.o game.o object.o ObjManager.o \
	 map.o TextBox/TextBox.o TextBox/YesNoPrompt.o TextBox/ItemImage.o TextBox/StageSelect.o \
	 TextBox/SaveSelect.o profile.o settings.o platform.o platform/Linux/vbesync.o \
	 caret.o slope.o player.o playerstats.o p_arms.o \
	 statusbar.o tsc.o screeneffect.o floattext.o input.o \
	 replay.o trig.o inventory.o map_system.o debug.o \
	 console.o niku.o ai/ai.o ai/first_cave/first_cave.o ai/village/village.o \
	 ai/village/balrog_boss_running.o ai/village/ma_pignon.o ai/egg/egg.o ai/egg/igor.o ai/egg/egg2.o \
	 ai/weed/weed.o ai/weed/balrog_boss_flying.o ai/weed/frenzied_mimiga.o ai/sand/sand.o ai/sand/puppy.o \
	 ai/sand/curly_boss.o ai/sand/toroko_frenzied.o ai/maze/maze.o ai/maze/critter_purple.o ai/maze/gaudi.o \
	 ai/maze/pooh_black.o ai/maze/balrog_boss_missiles.o ai/maze/labyrinth_m.o ai/almond/almond.o ai/oside/oside.o \
	 ai/plantation/plantation.o ai/last_cave/last_cave.o ai/final_battle/balcony.o ai/final_battle/misery.o ai/final_battle/final_misc.o \
	 ai/final_battle/doctor.o ai/final_battle/doctor_frenzied.o ai/final_battle/doctor_common.o ai/final_battle/sidekicks.o ai/hell/hell.o \
	 ai/hell/ballos_priest.o ai/hell/ballos_misc.o ai/npc/balrog.o ai/npc/curly.o ai/npc/curly_ai.o \
	 ai/npc/misery.o ai/npc/npcregu.o ai/npc/npcguest.o ai/npc/npcplayer.o ai/weapons/weapons.o \
	 ai/weapons/polar_mgun.o ai/weapons/missile.o ai/weapons/fireball.o ai/weapons/blade.o ai/weapons/snake.o \
	 ai/weapons/nemesis.o ai/weapons/bubbler.o ai/weapons/spur.o ai/weapons/whimstar.o ai/sym/sym.o \
	 ai/sym/smoke.o ai/balrog_common.o ai/IrregularBBox.o stageboss.o ai/boss/omega.o \
	 ai/boss/balfrog.o ai/boss/x.o ai/boss/core.o ai/boss/ironhead.o ai/boss/sisters.o \
	 ai/boss/undead_core.o ai/boss/heavypress.o ai/boss/ballos.o endgame/island.o endgame/misc.o \
	 endgame/credits.o endgame/CredReader.o intro/intro.o intro/title.o pause/pause.o \
	 pause/options.o pause/dialog.o pause/message.o pause/objects.o graphics/nxsurface.o \
	 graphics/graphics.o graphics/sprites.o graphics/tileset.o graphics/font.o graphics/safemode.o \
	 graphics/palette.o sound/sound.o sound/sslib.o sound/org.o sound/pxt.o \
	 siflib/sif.o siflib/sifloader.o siflib/sectSprites.o siflib/sectStringArray.o extract/extract.o \
	 extract/extractpxt.o extract/extractfiles.o extract/extractstages.o extract/crc.o autogen/AssignSprites.o \
	 autogen/objnames.o stagedata.o common/FileBuffer.o common/InitList.o common/BList.o \
	 common/StringList.o common/DBuffer.o common/DString.o common/bufio.o common/stat.o \
	 common/misc.o \
	 $(SDL_LIBS) -lSDL_ttf -lstdc++ -lm

main.o:	main.cpp main.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h graphics/safemode.h
	$(CXX) $(CFLAGS) -g -O2 -c main.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o main.o

game.o:	game.cpp game.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h endgame/island.h endgame/credits.h \
		endgame/CredReader.h intro/intro.h intro/title.h \
		pause/pause.h pause/options.h inventory.h \
		map_system.h profile.h
	$(CXX) $(CFLAGS) -g -O2 -c game.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o game.o

object.o:	object.cpp object.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h common/llist.h
	$(CXX) $(CFLAGS) -g -O2 -c object.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o object.o

ObjManager.o:	ObjManager.cpp ObjManager.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h common/llist.h
	$(CXX) $(CFLAGS) -g -O2 -c ObjManager.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ObjManager.o

map.o:	map.cpp map.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c map.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o map.o

TextBox/TextBox.o:	TextBox/TextBox.cpp TextBox/TextBox.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c TextBox/TextBox.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o TextBox/TextBox.o

TextBox/YesNoPrompt.o:	TextBox/YesNoPrompt.cpp TextBox/YesNoPrompt.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c TextBox/YesNoPrompt.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o TextBox/YesNoPrompt.o

TextBox/ItemImage.o:	TextBox/ItemImage.cpp TextBox/ItemImage.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c TextBox/ItemImage.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o TextBox/ItemImage.o

TextBox/StageSelect.o:	TextBox/StageSelect.cpp TextBox/StageSelect.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c TextBox/StageSelect.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o TextBox/StageSelect.o

TextBox/SaveSelect.o:	TextBox/SaveSelect.cpp TextBox/SaveSelect.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h profile.h inventory.h
	$(CXX) $(CFLAGS) -g -O2 -c TextBox/SaveSelect.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o TextBox/SaveSelect.o

profile.o:	profile.cpp profile.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h profile.h
	$(CXX) $(CFLAGS) -g -O2 -c profile.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o profile.o

settings.o:	settings.cpp settings.fdh settings.h input.h \
		replay.h common/FileBuffer.h common/DBuffer.h \
		common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c settings.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o settings.o

platform.o:	platform.cpp platform.fdh config.h
	$(CXX) $(CFLAGS) -g -O2 -c platform.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o platform.o

platform/Linux/vbesync.o:	platform/Linux/vbesync.c platform/Linux/vbesync.fdh
	$(CXX) $(CFLAGS) -g -O2 -c platform/Linux/vbesync.c -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o platform/Linux/vbesync.o

caret.o:	caret.cpp caret.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h common/llist.h
	$(CXX) $(CFLAGS) -g -O2 -c caret.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o caret.o

slope.o:	slope.cpp slope.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c slope.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o slope.o

player.o:	player.cpp player.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c player.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o player.o

playerstats.o:	playerstats.cpp playerstats.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c playerstats.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o playerstats.o

p_arms.o:	p_arms.cpp p_arms.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c p_arms.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o p_arms.o

statusbar.o:	statusbar.cpp statusbar.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c statusbar.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o statusbar.o

tsc.o:	tsc.cpp tsc.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h vararray.h tsc_cmdtbl.cpp
	$(CXX) $(CFLAGS) -g -O2 -c tsc.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o tsc.o

screeneffect.o:	screeneffect.cpp screeneffect.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c screeneffect.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o screeneffect.o

floattext.o:	floattext.cpp floattext.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c floattext.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o floattext.o

input.o:	input.cpp input.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c input.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o input.o

replay.o:	replay.cpp replay.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h profile.h
	$(CXX) $(CFLAGS) -g -O2 -c replay.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o replay.o

trig.o:	trig.cpp trig.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c trig.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o trig.o

inventory.o:	inventory.cpp inventory.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h inventory.h
	$(CXX) $(CFLAGS) -g -O2 -c inventory.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o inventory.o

map_system.o:	map_system.cpp map_system.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h map_system.h
	$(CXX) $(CFLAGS) -g -O2 -c map_system.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o map_system.o

debug.o:	debug.cpp debug.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c debug.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o debug.o

console.o:	console.cpp console.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c console.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o console.o

niku.o:	niku.cpp niku.fdh
	$(CXX) $(CFLAGS) -g -O2 -c niku.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o niku.o

ai/ai.o:	ai/ai.cpp ai/ai.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/ai.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/ai.o

ai/first_cave/first_cave.o:	ai/first_cave/first_cave.cpp ai/first_cave/first_cave.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/first_cave/first_cave.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/first_cave/first_cave.o

ai/village/village.o:	ai/village/village.cpp ai/village/village.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/village/village.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/village/village.o

ai/village/balrog_boss_running.o:	ai/village/balrog_boss_running.cpp ai/village/balrog_boss_running.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/balrog_common.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/village/balrog_boss_running.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/village/balrog_boss_running.o

ai/village/ma_pignon.o:	ai/village/ma_pignon.cpp ai/village/ma_pignon.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/village/ma_pignon.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/village/ma_pignon.o

ai/egg/egg.o:	ai/egg/egg.cpp ai/egg/egg.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/egg/egg.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/egg/egg.o

ai/egg/igor.o:	ai/egg/igor.cpp ai/egg/igor.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/egg/igor.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/egg/igor.o

ai/egg/egg2.o:	ai/egg/egg2.cpp ai/egg/egg2.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/egg/egg2.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/egg/egg2.o

ai/weed/weed.o:	ai/weed/weed.cpp ai/weed/weed.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weed/weed.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weed/weed.o

ai/weed/balrog_boss_flying.o:	ai/weed/balrog_boss_flying.cpp ai/weed/balrog_boss_flying.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weed/balrog_boss_flying.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weed/balrog_boss_flying.o

ai/weed/frenzied_mimiga.o:	ai/weed/frenzied_mimiga.cpp ai/weed/frenzied_mimiga.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weed/frenzied_mimiga.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weed/frenzied_mimiga.o

ai/sand/sand.o:	ai/sand/sand.cpp ai/sand/sand.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/sand/sand.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/sand/sand.o

ai/sand/puppy.o:	ai/sand/puppy.cpp ai/sand/puppy.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/sand/puppy.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/sand/puppy.o

ai/sand/curly_boss.o:	ai/sand/curly_boss.cpp ai/sand/curly_boss.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/sand/curly_boss.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/sand/curly_boss.o

ai/sand/toroko_frenzied.o:	ai/sand/toroko_frenzied.cpp ai/sand/toroko_frenzied.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/sand/toroko_frenzied.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/sand/toroko_frenzied.o

ai/maze/maze.o:	ai/maze/maze.cpp ai/maze/maze.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/maze/maze.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/maze/maze.o

ai/maze/critter_purple.o:	ai/maze/critter_purple.cpp ai/maze/critter_purple.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/maze/critter_purple.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/maze/critter_purple.o

ai/maze/gaudi.o:	ai/maze/gaudi.cpp ai/maze/gaudi.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/maze/gaudi.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/maze/gaudi.o

ai/maze/pooh_black.o:	ai/maze/pooh_black.cpp ai/maze/pooh_black.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/maze/pooh_black.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/maze/pooh_black.o

ai/maze/balrog_boss_missiles.o:	ai/maze/balrog_boss_missiles.cpp ai/maze/balrog_boss_missiles.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/balrog_common.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/maze/balrog_boss_missiles.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/maze/balrog_boss_missiles.o

ai/maze/labyrinth_m.o:	ai/maze/labyrinth_m.cpp ai/maze/labyrinth_m.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/maze/labyrinth_m.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/maze/labyrinth_m.o

ai/almond/almond.o:	ai/almond/almond.cpp ai/almond/almond.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/almond/almond.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/almond/almond.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/almond/almond.o

ai/oside/oside.o:	ai/oside/oside.cpp ai/oside/oside.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/oside/oside.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/oside/oside.o

ai/plantation/plantation.o:	ai/plantation/plantation.cpp ai/plantation/plantation.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/plantation/plantation.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/plantation/plantation.o

ai/last_cave/last_cave.o:	ai/last_cave/last_cave.cpp ai/last_cave/last_cave.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/last_cave/last_cave.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/last_cave/last_cave.o

ai/final_battle/balcony.o:	ai/final_battle/balcony.cpp ai/final_battle/balcony.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/final_battle/balcony.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/final_battle/balcony.o

ai/final_battle/misery.o:	ai/final_battle/misery.cpp ai/final_battle/misery.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/final_battle/misery.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/final_battle/misery.o

ai/final_battle/final_misc.o:	ai/final_battle/final_misc.cpp ai/final_battle/final_misc.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/final_battle/final_misc.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/final_battle/final_misc.o

ai/final_battle/doctor.o:	ai/final_battle/doctor.cpp ai/final_battle/doctor.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/final_battle/doctor.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/final_battle/doctor.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/final_battle/doctor.o

ai/final_battle/doctor_frenzied.o:	ai/final_battle/doctor_frenzied.cpp ai/final_battle/doctor_frenzied.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/final_battle/doctor.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/final_battle/doctor_frenzied.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/final_battle/doctor_frenzied.o

ai/final_battle/doctor_common.o:	ai/final_battle/doctor_common.cpp ai/final_battle/doctor_common.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/final_battle/doctor_common.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/final_battle/doctor_common.o

ai/final_battle/sidekicks.o:	ai/final_battle/sidekicks.cpp ai/final_battle/sidekicks.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/final_battle/sidekicks.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/final_battle/sidekicks.o

ai/hell/hell.o:	ai/hell/hell.cpp ai/hell/hell.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/hell/hell.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/hell/hell.o

ai/hell/ballos_priest.o:	ai/hell/ballos_priest.cpp ai/hell/ballos_priest.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/hell/ballos_priest.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/hell/ballos_priest.o

ai/hell/ballos_misc.o:	ai/hell/ballos_misc.cpp ai/hell/ballos_misc.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/hell/ballos_misc.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/hell/ballos_misc.o

ai/npc/balrog.o:	ai/npc/balrog.cpp ai/npc/balrog.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/npc/balrog.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/npc/balrog.o

ai/npc/curly.o:	ai/npc/curly.cpp ai/npc/curly.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/npc/curly.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/npc/curly.o

ai/npc/curly_ai.o:	ai/npc/curly_ai.cpp ai/npc/curly_ai.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/npc/curly_ai.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/npc/curly_ai.o

ai/npc/misery.o:	ai/npc/misery.cpp ai/npc/misery.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/npc/misery.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/npc/misery.o

ai/npc/npcregu.o:	ai/npc/npcregu.cpp ai/npc/npcregu.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/final_battle/doctor.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/npc/npcregu.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/npc/npcregu.o

ai/npc/npcguest.o:	ai/npc/npcguest.cpp ai/npc/npcguest.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/npc/npcguest.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/npc/npcguest.o

ai/npc/npcplayer.o:	ai/npc/npcplayer.cpp ai/npc/npcplayer.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/npc/npcplayer.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/npc/npcplayer.o

ai/weapons/weapons.o:	ai/weapons/weapons.cpp ai/weapons/weapons.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/weapons.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/weapons.o

ai/weapons/polar_mgun.o:	ai/weapons/polar_mgun.cpp ai/weapons/polar_mgun.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/polar_mgun.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/polar_mgun.o

ai/weapons/missile.o:	ai/weapons/missile.cpp ai/weapons/missile.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/missile.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/missile.o

ai/weapons/fireball.o:	ai/weapons/fireball.cpp ai/weapons/fireball.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/fireball.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/fireball.o

ai/weapons/blade.o:	ai/weapons/blade.cpp ai/weapons/blade.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/blade.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/blade.o

ai/weapons/snake.o:	ai/weapons/snake.cpp ai/weapons/snake.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/snake.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/snake.o

ai/weapons/nemesis.o:	ai/weapons/nemesis.cpp ai/weapons/nemesis.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/nemesis.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/nemesis.o

ai/weapons/bubbler.o:	ai/weapons/bubbler.cpp ai/weapons/bubbler.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/bubbler.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/bubbler.o

ai/weapons/spur.o:	ai/weapons/spur.cpp ai/weapons/spur.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/spur.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/spur.o

ai/weapons/whimstar.o:	ai/weapons/whimstar.cpp ai/weapons/whimstar.fdh ai/weapons/weapons.h ai/stdai.h \
		nx.h config.h common/basics.h \
		common/BList.h common/SupportDefs.h common/StringList.h \
		common/DBuffer.h common/DString.h common/InitList.h \
		graphics/graphics.h graphics/nxsurface.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h trig.h \
		autogen/sprites.h dirnames.h TextBox/TextBox.h \
		TextBox/YesNoPrompt.h TextBox/ItemImage.h TextBox/StageSelect.h \
		TextBox/SaveSelect.h graphics/font.h input.h \
		tsc.h stageboss.h ai/ai.h \
		map.h maprecord.h stagedata.h \
		statusbar.h floattext.h object.h \
		ObjManager.h console.h debug.h \
		game.h caret.h screeneffect.h \
		settings.h slope.h player.h \
		p_arms.h ai/weapons/whimstar.h replay.h \
		common/FileBuffer.h platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/weapons/whimstar.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/weapons/whimstar.o

ai/sym/sym.o:	ai/sym/sym.cpp ai/sym/sym.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/sym/sym.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/sym/sym.o

ai/sym/smoke.o:	ai/sym/smoke.cpp ai/sym/smoke.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/sym/smoke.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/sym/smoke.o

ai/balrog_common.o:	ai/balrog_common.cpp ai/balrog_common.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/balrog_common.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/balrog_common.o

ai/IrregularBBox.o:	ai/IrregularBBox.cpp ai/IrregularBBox.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h ai/IrregularBBox.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/IrregularBBox.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/IrregularBBox.o

stageboss.o:	stageboss.cpp stageboss.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h ai/boss/omega.h ai/boss/balfrog.h \
		ai/IrregularBBox.h ai/boss/x.h ai/boss/core.h \
		ai/boss/ironhead.h ai/boss/sisters.h ai/boss/undead_core.h \
		ai/boss/heavypress.h ai/boss/ballos.h
	$(CXX) $(CFLAGS) -g -O2 -c stageboss.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o stageboss.o

ai/boss/omega.o:	ai/boss/omega.cpp ai/boss/omega.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/omega.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/omega.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/omega.o

ai/boss/balfrog.o:	ai/boss/balfrog.cpp ai/boss/balfrog.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/balfrog.h \
		ai/IrregularBBox.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/balfrog.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/balfrog.o

ai/boss/x.o:	ai/boss/x.cpp ai/boss/x.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/x.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/x.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/x.o

ai/boss/core.o:	ai/boss/core.cpp ai/boss/core.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/almond/almond.h \
		ai/boss/core.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/core.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/core.o

ai/boss/ironhead.o:	ai/boss/ironhead.cpp ai/boss/ironhead.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/ironhead.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/ironhead.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/ironhead.o

ai/boss/sisters.o:	ai/boss/sisters.cpp ai/boss/sisters.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/sisters.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/sisters.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/sisters.o

ai/boss/undead_core.o:	ai/boss/undead_core.cpp ai/boss/undead_core.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/undead_core.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/undead_core.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/undead_core.o

ai/boss/heavypress.o:	ai/boss/heavypress.cpp ai/boss/heavypress.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/heavypress.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/heavypress.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/heavypress.o

ai/boss/ballos.o:	ai/boss/ballos.cpp ai/boss/ballos.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h ai/boss/ballos.h
	$(CXX) $(CFLAGS) -g -O2 -c ai/boss/ballos.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o ai/boss/ballos.o

endgame/island.o:	endgame/island.cpp endgame/island.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c endgame/island.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o endgame/island.o

endgame/misc.o:	endgame/misc.cpp endgame/misc.fdh ai/stdai.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c endgame/misc.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o endgame/misc.o

endgame/credits.o:	endgame/credits.cpp endgame/credits.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h endgame/credits.h endgame/CredReader.h
	$(CXX) $(CFLAGS) -g -O2 -c endgame/credits.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o endgame/credits.o

endgame/CredReader.o:	endgame/CredReader.cpp endgame/CredReader.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h endgame/CredReader.h
	$(CXX) $(CFLAGS) -g -O2 -c endgame/CredReader.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o endgame/CredReader.o

intro/intro.o:	intro/intro.cpp intro/intro.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h ai/stdai.h
	$(CXX) $(CFLAGS) -g -O2 -c intro/intro.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o intro/intro.o

intro/title.o:	intro/title.cpp intro/title.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c intro/title.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o intro/title.o

pause/pause.o:	pause/pause.cpp pause/pause.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c pause/pause.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o pause/pause.o

pause/options.o:	pause/options.cpp pause/options.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h pause/options.h pause/dialog.h \
		pause/message.h
	$(CXX) $(CFLAGS) -g -O2 -c pause/options.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o pause/options.o

pause/dialog.o:	pause/dialog.cpp pause/dialog.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h pause/dialog.h pause/options.h
	$(CXX) $(CFLAGS) -g -O2 -c pause/dialog.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o pause/dialog.o

pause/message.o:	pause/message.cpp pause/message.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h pause/message.h pause/options.h
	$(CXX) $(CFLAGS) -g -O2 -c pause/message.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o pause/message.o

pause/objects.o:	pause/objects.cpp pause/objects.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h common/llist.h pause/options.h
	$(CXX) $(CFLAGS) -g -O2 -c pause/objects.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o pause/objects.o

graphics/nxsurface.o:	graphics/nxsurface.cpp graphics/nxsurface.fdh settings.h input.h \
		config.h graphics/graphics.h graphics/nxsurface.h \
		common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c graphics/nxsurface.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o graphics/nxsurface.o

graphics/graphics.o:	graphics/graphics.cpp graphics/graphics.fdh config.h graphics/graphics.h \
		graphics/nxsurface.h common/basics.h graphics/tileset.h \
		graphics/sprites.h siflib/sif.h dirnames.h
	$(CXX) $(CFLAGS) -g -O2 -c graphics/graphics.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o graphics/graphics.o

graphics/sprites.o:	graphics/sprites.cpp graphics/sprites.fdh graphics/graphics.h graphics/nxsurface.h \
		common/basics.h siflib/sif.h siflib/sifloader.h \
		common/BList.h common/SupportDefs.h siflib/sectSprites.h \
		siflib/sectStringArray.h autogen/sprites.h common/StringList.h \
		dirnames.h settings.h input.h \
		graphics/sprites.h
	$(CXX) $(CFLAGS) -g -O2 -c graphics/sprites.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o graphics/sprites.o

graphics/tileset.o:	graphics/tileset.cpp graphics/tileset.fdh graphics/graphics.h graphics/nxsurface.h \
		common/basics.h graphics/tileset.h
	$(CXX) $(CFLAGS) -g -O2 -c graphics/tileset.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o graphics/tileset.o

graphics/font.o:	graphics/font.cpp graphics/font.fdh config.h nx.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c graphics/font.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o graphics/font.o

graphics/safemode.o:	graphics/safemode.cpp graphics/safemode.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h graphics/safemode.h
	$(CXX) $(CFLAGS) -g -O2 -c graphics/safemode.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o graphics/safemode.o

graphics/palette.o:	graphics/palette.cpp graphics/palette.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h graphics/palette.h
	$(CXX) $(CFLAGS) -g -O2 -c graphics/palette.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o graphics/palette.o

sound/sound.o:	sound/sound.cpp sound/sound.fdh nx.h config.h \
		common/basics.h common/BList.h common/SupportDefs.h \
		common/StringList.h common/DBuffer.h common/DString.h \
		common/InitList.h graphics/graphics.h graphics/nxsurface.h \
		graphics/tileset.h graphics/sprites.h siflib/sif.h \
		trig.h autogen/sprites.h dirnames.h \
		TextBox/TextBox.h TextBox/YesNoPrompt.h TextBox/ItemImage.h \
		TextBox/StageSelect.h TextBox/SaveSelect.h graphics/font.h \
		input.h tsc.h stageboss.h \
		ai/ai.h map.h maprecord.h \
		stagedata.h statusbar.h floattext.h \
		object.h ObjManager.h console.h \
		debug.h game.h caret.h \
		screeneffect.h settings.h slope.h \
		player.h p_arms.h ai/weapons/whimstar.h \
		replay.h common/FileBuffer.h platform.h \
		sound/sound.h sound/pxt.h
	$(CXX) $(CFLAGS) -g -O2 -c sound/sound.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o sound/sound.o

sound/sslib.o:	sound/sslib.cpp sound/sslib.fdh common/basics.h sound/sslib.h
	$(CXX) $(CFLAGS) -g -O2 -c sound/sslib.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o sound/sslib.o

sound/org.o:	sound/org.cpp sound/org.fdh common/basics.h sound/org.h \
		sound/pxt.h sound/sslib.h
	$(CXX) $(CFLAGS) -g -O2 -c sound/org.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o sound/org.o

sound/pxt.o:	sound/pxt.cpp sound/pxt.fdh config.h sound/pxt.h \
		common/basics.h sound/sslib.h
	$(CXX) $(CFLAGS) -g -O2 -c sound/pxt.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o sound/pxt.o

siflib/sif.o:	siflib/sif.cpp siflib/sif.fdh siflib/sif.h siflib/sifloader.h \
		common/BList.h common/SupportDefs.h siflib/sectSprites.h \
		siflib/sectStringArray.h
	$(CXX) $(CFLAGS) -g -O2 -c siflib/sif.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o siflib/sif.o

siflib/sifloader.o:	siflib/sifloader.cpp siflib/sifloader.fdh siflib/sifloader.h common/BList.h \
		common/SupportDefs.h
	$(CXX) $(CFLAGS) -g -O2 -c siflib/sifloader.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o siflib/sifloader.o

siflib/sectSprites.o:	siflib/sectSprites.cpp siflib/sectSprites.fdh common/DBuffer.h common/basics.h \
		common/bufio.h siflib/sectSprites.h siflib/sif.h
	$(CXX) $(CFLAGS) -g -O2 -c siflib/sectSprites.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o siflib/sectSprites.o

siflib/sectStringArray.o:	siflib/sectStringArray.cpp siflib/sectStringArray.fdh common/DBuffer.h common/basics.h \
		common/DString.h common/bufio.h common/StringList.h \
		common/BList.h common/SupportDefs.h siflib/sectStringArray.h
	$(CXX) $(CFLAGS) -g -O2 -c siflib/sectStringArray.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o siflib/sectStringArray.o

extract/extract.o:	extract/extract.cpp extract/extract.fdh graphics/safemode.h
	$(CXX) $(CFLAGS) -g -O2 -c extract/extract.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o extract/extract.o

extract/extractpxt.o:	extract/extractpxt.cpp extract/extractpxt.fdh graphics/safemode.h common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c extract/extractpxt.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o extract/extractpxt.o

extract/extractfiles.o:	extract/extractfiles.cpp extract/extractfiles.fdh common/basics.h graphics/safemode.h
	$(CXX) $(CFLAGS) -g -O2 -c extract/extractfiles.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o extract/extractfiles.o

extract/extractstages.o:	extract/extractstages.cpp extract/extractstages.fdh graphics/safemode.h common/StringList.h \
		common/BList.h common/SupportDefs.h common/basics.h \
		stagedata.h maprecord.h
	$(CXX) $(CFLAGS) -g -O2 -c extract/extractstages.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o extract/extractstages.o

extract/crc.o:	extract/crc.cpp extract/crc.fdh
	$(CXX) $(CFLAGS) -g -O2 -c extract/crc.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o extract/crc.o

autogen/AssignSprites.o:	autogen/AssignSprites.cpp autogen/AssignSprites.fdh autogen/asdefs.h nx.h \
		config.h common/basics.h common/BList.h \
		common/SupportDefs.h common/StringList.h common/DBuffer.h \
		common/DString.h common/InitList.h graphics/graphics.h \
		graphics/nxsurface.h graphics/tileset.h graphics/sprites.h \
		siflib/sif.h trig.h autogen/sprites.h \
		dirnames.h TextBox/TextBox.h TextBox/YesNoPrompt.h \
		TextBox/ItemImage.h TextBox/StageSelect.h TextBox/SaveSelect.h \
		graphics/font.h input.h tsc.h \
		stageboss.h ai/ai.h map.h \
		maprecord.h stagedata.h statusbar.h \
		floattext.h object.h ObjManager.h \
		console.h debug.h game.h \
		caret.h screeneffect.h settings.h \
		slope.h player.h p_arms.h \
		ai/weapons/whimstar.h replay.h common/FileBuffer.h \
		platform.h sound/sound.h
	$(CXX) $(CFLAGS) -g -O2 -c autogen/AssignSprites.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o autogen/AssignSprites.o

autogen/objnames.o:	autogen/objnames.cpp autogen/objnames.fdh
	$(CXX) $(CFLAGS) -g -O2 -c autogen/objnames.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o autogen/objnames.o

stagedata.o:	stagedata.cpp stagedata.fdh stagedata.h
	$(CXX) $(CFLAGS) -g -O2 -c stagedata.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o stagedata.o

common/FileBuffer.o:	common/FileBuffer.cpp common/FileBuffer.fdh common/FileBuffer.h common/DBuffer.h \
		common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c common/FileBuffer.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/FileBuffer.o

common/InitList.o:	common/InitList.cpp common/InitList.fdh common/InitList.h
	$(CXX) $(CFLAGS) -g -O2 -c common/InitList.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/InitList.o

common/BList.o:	common/BList.cpp common/BList.fdh common/BList.h common/SupportDefs.h
	$(CXX) $(CFLAGS) -g -O2 -c common/BList.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/BList.o

common/StringList.o:	common/StringList.cpp common/StringList.fdh common/StringList.h common/BList.h \
		common/SupportDefs.h
	$(CXX) $(CFLAGS) -g -O2 -c common/StringList.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/StringList.o

common/DBuffer.o:	common/DBuffer.cpp common/DBuffer.fdh common/DBuffer.h common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c common/DBuffer.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/DBuffer.o

common/DString.o:	common/DString.cpp common/DString.fdh common/DString.h common/basics.h \
		common/DBuffer.h
	$(CXX) $(CFLAGS) -g -O2 -c common/DString.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/DString.o

common/bufio.o:	common/bufio.cpp common/bufio.fdh common/DBuffer.h common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c common/bufio.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/bufio.o

common/stat.o:	common/stat.cpp common/stat.fdh common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c common/stat.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/stat.o

common/misc.o:	common/misc.cpp common/misc.fdh common/basics.h
	$(CXX) $(CFLAGS) -g -O2 -c common/misc.cpp -D DEBUG $(SDL_CFLAGS) -Wreturn-type -Wformat -Wno-multichar -o common/misc.o

clean:
	rm -f main.o game.o object.o ObjManager.o map.o TextBox/TextBox.o TextBox/YesNoPrompt.o TextBox/ItemImage.o TextBox/StageSelect.o TextBox/SaveSelect.o profile.o settings.o platform.o platform/Linux/vbesync.o caret.o slope.o player.o playerstats.o p_arms.o statusbar.o tsc.o screeneffect.o floattext.o input.o replay.o trig.o inventory.o map_system.o debug.o console.o niku.o ai/ai.o ai/first_cave/first_cave.o ai/village/village.o ai/village/balrog_boss_running.o ai/village/ma_pignon.o ai/egg/egg.o ai/egg/igor.o ai/egg/egg2.o ai/weed/weed.o ai/weed/balrog_boss_flying.o ai/weed/frenzied_mimiga.o ai/sand/sand.o ai/sand/puppy.o ai/sand/curly_boss.o ai/sand/toroko_frenzied.o ai/maze/maze.o ai/maze/critter_purple.o ai/maze/gaudi.o ai/maze/pooh_black.o ai/maze/balrog_boss_missiles.o ai/maze/labyrinth_m.o ai/almond/almond.o ai/oside/oside.o ai/plantation/plantation.o ai/last_cave/last_cave.o ai/final_battle/balcony.o ai/final_battle/misery.o ai/final_battle/final_misc.o ai/final_battle/doctor.o ai/final_battle/doctor_frenzied.o ai/final_battle/doctor_common.o ai/final_battle/sidekicks.o ai/hell/hell.o ai/hell/ballos_priest.o ai/hell/ballos_misc.o ai/npc/balrog.o ai/npc/curly.o ai/npc/curly_ai.o ai/npc/misery.o ai/npc/npcregu.o ai/npc/npcguest.o ai/npc/npcplayer.o ai/weapons/weapons.o ai/weapons/polar_mgun.o ai/weapons/missile.o ai/weapons/fireball.o ai/weapons/blade.o ai/weapons/snake.o ai/weapons/nemesis.o ai/weapons/bubbler.o ai/weapons/spur.o ai/weapons/whimstar.o ai/sym/sym.o ai/sym/smoke.o ai/balrog_common.o ai/IrregularBBox.o stageboss.o ai/boss/omega.o ai/boss/balfrog.o ai/boss/x.o ai/boss/core.o ai/boss/ironhead.o ai/boss/sisters.o ai/boss/undead_core.o ai/boss/heavypress.o ai/boss/ballos.o endgame/island.o endgame/misc.o endgame/credits.o endgame/CredReader.o intro/intro.o intro/title.o pause/pause.o pause/options.o pause/dialog.o pause/message.o pause/objects.o graphics/nxsurface.o graphics/graphics.o graphics/sprites.o graphics/tileset.o graphics/font.o graphics/safemode.o graphics/palette.o sound/sound.o sound/sslib.o sound/org.o sound/pxt.o siflib/sif.o siflib/sifloader.o siflib/sectSprites.o siflib/sectStringArray.o extract/extract.o extract/extractpxt.o extract/extractfiles.o extract/extractstages.o extract/crc.o autogen/AssignSprites.o autogen/objnames.o stagedata.o common/FileBuffer.o common/InitList.o common/BList.o common/StringList.o common/DBuffer.o common/DString.o common/bufio.o common/stat.o common/misc.o

cleanfdh:
	rm -f main.fdh game.fdh object.fdh ObjManager.fdh map.fdh TextBox/TextBox.fdh TextBox/YesNoPrompt.fdh TextBox/ItemImage.fdh TextBox/StageSelect.fdh TextBox/SaveSelect.fdh profile.fdh settings.fdh platform.fdh platform/Linux/vbesync.fdh caret.fdh slope.fdh player.fdh playerstats.fdh p_arms.fdh statusbar.fdh tsc.fdh screeneffect.fdh floattext.fdh input.fdh replay.fdh trig.fdh inventory.fdh map_system.fdh debug.fdh console.fdh niku.fdh ai/ai.fdh ai/first_cave/first_cave.fdh ai/village/village.fdh ai/village/balrog_boss_running.fdh ai/village/ma_pignon.fdh ai/egg/egg.fdh ai/egg/igor.fdh ai/egg/egg2.fdh ai/weed/weed.fdh ai/weed/balrog_boss_flying.fdh ai/weed/frenzied_mimiga.fdh ai/sand/sand.fdh ai/sand/puppy.fdh ai/sand/curly_boss.fdh ai/sand/toroko_frenzied.fdh ai/maze/maze.fdh ai/maze/critter_purple.fdh ai/maze/gaudi.fdh ai/maze/pooh_black.fdh ai/maze/balrog_boss_missiles.fdh ai/maze/labyrinth_m.fdh ai/almond/almond.fdh ai/oside/oside.fdh ai/plantation/plantation.fdh ai/last_cave/last_cave.fdh ai/final_battle/balcony.fdh ai/final_battle/misery.fdh ai/final_battle/final_misc.fdh ai/final_battle/doctor.fdh ai/final_battle/doctor_frenzied.fdh ai/final_battle/doctor_common.fdh ai/final_battle/sidekicks.fdh ai/hell/hell.fdh ai/hell/ballos_priest.fdh ai/hell/ballos_misc.fdh ai/npc/balrog.fdh ai/npc/curly.fdh ai/npc/curly_ai.fdh ai/npc/misery.fdh ai/npc/npcregu.fdh ai/npc/npcguest.fdh ai/npc/npcplayer.fdh ai/weapons/weapons.fdh ai/weapons/polar_mgun.fdh ai/weapons/missile.fdh ai/weapons/fireball.fdh ai/weapons/blade.fdh ai/weapons/snake.fdh ai/weapons/nemesis.fdh ai/weapons/bubbler.fdh ai/weapons/spur.fdh ai/weapons/whimstar.fdh ai/sym/sym.fdh ai/sym/smoke.fdh ai/balrog_common.fdh ai/IrregularBBox.fdh stageboss.fdh ai/boss/omega.fdh ai/boss/balfrog.fdh ai/boss/x.fdh ai/boss/core.fdh ai/boss/ironhead.fdh ai/boss/sisters.fdh ai/boss/undead_core.fdh ai/boss/heavypress.fdh ai/boss/ballos.fdh endgame/island.fdh endgame/misc.fdh endgame/credits.fdh endgame/CredReader.fdh intro/intro.fdh intro/title.fdh pause/pause.fdh pause/options.fdh pause/dialog.fdh pause/message.fdh pause/objects.fdh graphics/nxsurface.fdh graphics/graphics.fdh graphics/sprites.fdh graphics/tileset.fdh graphics/font.fdh graphics/safemode.fdh graphics/palette.fdh sound/sound.fdh sound/sslib.fdh sound/org.fdh sound/pxt.fdh siflib/sif.fdh siflib/sifloader.fdh siflib/sectSprites.fdh siflib/sectStringArray.fdh extract/extract.fdh extract/extractpxt.fdh extract/extractfiles.fdh extract/extractstages.fdh extract/crc.fdh autogen/AssignSprites.fdh autogen/objnames.fdh stagedata.fdh common/FileBuffer.fdh common/InitList.fdh common/BList.fdh common/StringList.fdh common/DBuffer.fdh common/DString.fdh common/bufio.fdh common/stat.fdh common/misc.fdh

cleanall: clean cleanfdh
