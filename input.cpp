
#include "nx.h"
#include "input.fdh"

uint8_t mappings[SDLK_LAST];

bool inputs[INPUT_COUNT];
bool lastinputs[INPUT_COUNT];
int last_sdl_key;

#define BTN_X			SDLK_SPACE
#define BTN_A			SDLK_LCTRL
#define BTN_B			SDLK_LALT
#define BTN_Y			SDLK_LSHIFT
#define BTN_L			SDLK_TAB
#define BTN_R			SDLK_BACKSPACE
#define BTN_START		SDLK_RETURN
#define BTN_SELECT		SDLK_ESCAPE

bool input_init(void)
{
	memset(inputs, 0, sizeof(inputs));
	memset(lastinputs, 0, sizeof(lastinputs));
	memset(mappings, 0xff, sizeof(mappings));
	
	// default mappings
	#ifdef __SDLSHIM__
	{
		mappings[SDLK_LEFT] = LEFTKEY;
		mappings[SDLK_RIGHT] = RIGHTKEY;
		mappings[SDLK_UP] = UPKEY;
		mappings[SDLK_DOWN] = DOWNKEY;
		
		mappings[SDLK_BTN3] = JUMPKEY;
		mappings[SDLK_BTN4] = FIREKEY;
		
		mappings[SDLK_BTN1] = INVENTORYKEY;
		mappings[SDLK_BTN2] = MAPSYSTEMKEY;
		
		mappings[SDLK_JOGDIAL_UP] = PREVWPNKEY;
		mappings[SDLK_JOGDIAL_DOWN] = NEXTWPNKEY;
	}
	#else
	{
		mappings[SDLK_LEFT] = LEFTKEY;
		mappings[SDLK_RIGHT] = RIGHTKEY;
		mappings[SDLK_UP] = UPKEY;
		mappings[SDLK_DOWN] = DOWNKEY;

		mappings[BTN_B] = JUMPKEY;
		mappings[BTN_Y] = FIREKEY;
		mappings[BTN_A] = PREVWPNKEY;
		mappings[BTN_X] = NEXTWPNKEY;
		mappings[BTN_L] = INVENTORYKEY;
		mappings[BTN_R] = MAPSYSTEMKEY;
		
		mappings[SDLK_ESCAPE] = ESCKEY;
		
		mappings[SDLK_F1] = F1KEY;
		mappings[SDLK_F2] = F2KEY;
		mappings[SDLK_F3] = F3KEY;
		mappings[SDLK_F4] = F4KEY;
		mappings[SDLK_F5] = F5KEY;
		mappings[SDLK_F6] = F6KEY;
		mappings[SDLK_F7] = F7KEY;
		mappings[SDLK_F8] = F8KEY;
		mappings[SDLK_F9] = F9KEY;
		mappings[SDLK_F10] = F10KEY;
		mappings[SDLK_F11] = F11KEY;
		mappings[BTN_START] = F12KEY;
		
		mappings[SDLK_a] = FREEZE_FRAME_KEY;
		mappings[SDLK_b] = FRAME_ADVANCE_KEY;
		mappings[SDLK_c] = DEBUG_FLY_KEY;
	}
	#endif
	
	
	//added joystick init
	int joystick_count = SDL_NumJoysticks();
	printf("%d joysticks\n", joystick_count);
	
	if(joystick_count > 0)
	{
		for(int i = 0; i < joystick_count; i++)
		{
		SDL_JoystickOpen(i);
		}
		SDL_JoystickEventState(SDL_ENABLE);
	}

	
	return 0;
}


// set the SDL key that triggers an input
void input_remap(int keyindex, int sdl_key)
{
	stat("input_remap(%d => %d)", keyindex, sdl_key);
	int old_mapping = input_get_mapping(keyindex);
	if (old_mapping != -1)
		mappings[old_mapping] = 0xff;
	
	mappings[sdl_key] = keyindex;
}

// get which SDL key triggers a given input
int input_get_mapping(int keyindex)
{
int i;

	for(i=0;i<=SDLK_LAST;i++)
	{
		if (mappings[i] == keyindex)
			return i;
	}
	
	return -1;
}

const char *input_get_name(int index)
{
static const char *input_names[] =
{
	"left", "right", "up", "down",
	"jump", "fire", "prev wpn", "next wpn",
	"inventory", "map",
	"escape",
	"f1", "f2", "f3", "f4", "f5", "f6", "f7", "f8", "f9", "f10", "f11", "f12",
	"freeze frame", "frame advance", "debug fly"
};

	if (index < 0 || index >= INPUT_COUNT)
		return "invalid";
	
	return input_names[index];
}

void input_set_mappings(int *array)
{
#if 0
	memset(mappings, 0xff, sizeof(mappings));
	for(int i=0;i<INPUT_COUNT;i++)
		mappings[array[i]] = i;
#endif
}

/*
void c------------------------------() {}
*/

void input_poll(void)
{
  SDL_Event evt;
  int ino, key;
		
	while(SDL_PollEvent(&evt))
	{
		switch(evt.type)
		{
			
			//added for joystick support for retrofw
			case SDL_JOYBUTTONDOWN:
			case SDL_JOYBUTTONUP:
			
				switch(evt.jbutton.button)
				{
					case 2:
						ino = JUMPKEY;
					break;
					case 1:
						ino = FIREKEY;
					break;
					case 4:
						ino = MAPSYSTEMKEY;
					break;
					case 0:
						ino = PREVWPNKEY;
					break;
					case 3:
						ino = NEXTWPNKEY;
					break;
					case 5:
						ino = INVENTORYKEY;
					break;
					case 8:
						ino = ESCKEY;
					break;
					case 9:
						ino = F12KEY;
					break;
					
				}
				
				inputs[ino] = (evt.type == SDL_JOYBUTTONDOWN);
					
				last_sdl_key = evt.jbutton.which;
				
			break;

			case SDL_JOYAXISMOTION:
				if(	evt.jaxis.axis & 1)
				{
					inputs[UPKEY] = 0;
					if(evt.jaxis.value < -300) inputs[UPKEY] = 1;
					
					inputs[DOWNKEY] = 0;
					if(evt.jaxis.value > 300) inputs[DOWNKEY] = 1;
					
				}	
				else
				{
					inputs[LEFTKEY] = 0;
					if(evt.jaxis.value < -300) inputs[LEFTKEY] = 1;
					
					inputs[RIGHTKEY] = 0;
					if(evt.jaxis.value > 300) inputs[RIGHTKEY] = 1;
				}	
				
			break;
		//end of joystick code
			
			
			case SDL_KEYDOWN:
			case SDL_KEYUP:
			{
					
				
				key = evt.key.keysym.sym;
				
				#ifndef __SDLSHIM__
				static uint8_t shiftstates = 0;
				extern bool freezeframe;

				if (console.IsVisible() && !IsNonConsoleKey(key))
				{
					if (key == SDLK_LSHIFT)
					{
						if (evt.type == SDL_KEYDOWN)
							shiftstates |= LEFTMASK;
						else
							shiftstates &= ~LEFTMASK;
					}
					else if (key == SDLK_RSHIFT)
					{
						if (evt.type == SDL_KEYDOWN)
							shiftstates |= RIGHTMASK;
						else
							shiftstates &= ~RIGHTMASK;
					}
					else
					{
						int ch = key;
						if (shiftstates != 0)
						{
							ch = toupper(ch);
							if (ch == '.') ch = '>';
							if (ch == '-') ch = '_';
							if (ch == '/') ch = '?';
							if (ch == '1') ch = '!';
						}
						
						if (evt.type == SDL_KEYDOWN)
							console.HandleKey(ch);
						else
							console.HandleKeyRelease(ch);
					}
				}
				else
				#endif	// __SDLSHIM__
				{
					ino = mappings[key];
					if (ino != 0xff)
						inputs[ino] = (evt.type == SDL_KEYDOWN);
					
					if (evt.type == SDL_KEYDOWN)
					{
						if (Replay::IsPlaying() && ino <= LASTCONTROLKEY)
						{
							stat("user interrupt - stopping playback of replay");
							Replay::end_playback();
							memset(inputs, 0, sizeof(inputs));
							inputs[ino] = true;
						}
						
						#ifndef __SDLSHIM__
						if (key == '`')		// bring up console
						{
							if (!freezeframe)
							{
								sound(SND_SWITCH_WEAPON);
								console.SetVisible(true);
							}
						}
						else
						#endif
						{
							last_sdl_key = key;
						}
					}
				}
			}
			break;
			
			
			case SDL_QUIT:
			{
				inputs[ESCKEY] = true;
				game.running = false;
			}
			break;
		}
	}
}

// keys that we don't want to send to the console
// even if the console is up.
static int IsNonConsoleKey(int key)
{
static const int nosend[] = { SDLK_LEFT, SDLK_RIGHT, 0 };

	for(int i=0;nosend[i];i++)
		if (key == nosend[i])
			return true;
	return false;
}


void input_close(void)
{

}

/*
void c------------------------------() {}
*/

static const int buttons[] = { JUMPKEY, FIREKEY, 0 };

bool buttondown(void)
{
	for(int i=0;buttons[i];i++)
	{
		if (inputs[buttons[i]])
			return 1;
	}
	
	return 0;
}

bool buttonjustpushed(void)
{
	for(int i=0;buttons[i];i++)
	{
		if (inputs[buttons[i]] && !lastinputs[buttons[i]])
			return 1;
	}
	
	return 0;
}

bool justpushed(int k)
{
	return (inputs[k] && !lastinputs[k]);
}





