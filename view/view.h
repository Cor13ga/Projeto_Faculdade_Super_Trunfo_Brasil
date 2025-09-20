#ifndef VIEW_H
#define VIEW_H

#include "../model/model.h"

void display_card(Country *card);
void display_game_state(GameModel *model);
void display_message(const char *msg);
int get_user_input();

#endif