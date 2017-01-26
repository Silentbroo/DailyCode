#include <stdio.h>
#include <allegro5/allegro.h>
#include <iostream>
#include <allegro5/allegro_primitives.h>                                                 

int main()
{
	ALLEGRO_DISPLAY *display = NULL;

	al_init();

	al_init_primitives_addon();

	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_rectangle(200, 300, 100, 50.5, al_map_rgb(150, 200, 250), 10);

	al_draw_circle(150, 175, 50, al_map_rgb(150, 200, 250), 10);

	al_flip_display();

	al_rest(10.0);

	al_destroy_display;

	return 0;
}