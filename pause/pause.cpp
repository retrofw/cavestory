
#include "../nx.h"
#include "pause.fdh"

bool pause_init(int param)
{
	memset(lastinputs, 1, sizeof(lastinputs));
	return 0;
}

void pause_tick()
{
	ClearScreen(BLACK);

	int cx = 30, cy = 30, f3wd = 0;

	f3wd = font_draw(cx, cy, "B", 0);
	font_draw(cx + f3wd, cy, ": Resume", 0, &bluefont);
	cy += 20;

	f3wd = font_draw(cx, cy, "Y", 0);
	font_draw(cx + f3wd, cy, ": Reset", 0, &bluefont);
	cy += 20;

	f3wd = font_draw(cx, cy, "Start", 0);
	font_draw(cx + f3wd, cy, ": Options", 0, &bluefont);
	cy += 20;

	f3wd = font_draw(cx, cy, "Select", 0);
	font_draw(cx + f3wd, cy, ": Quit", 0, &bluefont);

	// resume
	if (justpushed(JUMPKEY))
	{
		lastinputs[JUMPKEY] = true;
		game.pause(false);
		return;
	}
	
	// reset
	if (justpushed(FIREKEY))
	{
		lastinputs[FIREKEY] = true;
		game.reset();
		return;
	}
	
	// exit
	if (justpushed(ESCKEY))
	{
		lastinputs[ESCKEY] = true;
		game.running = false;
		return;
	}
}






