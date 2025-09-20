#ifndef MODEL_H
#define MODEL_H

#define NUM_CARDS 100
#define NUM_ATTRIBUTES 2
#define PLAYER_CARDS 50

typedef struct {
    char name[50];
    int attributes[NUM_ATTRIBUTES];
    int is_super_trunfo;
} Country;

typedef struct {
    Country deck[NUM_CARDS];
    int player_hand[PLAYER_CARDS];
    int player_count;
    int cpu_hand[PLAYER_CARDS];
    int cpu_count;
} GameModel;

void init_model(GameModel *model);
void init_country(Country *country, const char *name, int pop, int military, int super);
int compare_attributes(GameModel *model, int player_card_idx, int cpu_card_idx, int attr);
void transfer_card(GameModel *model, int winner_is_player);
int is_game_over(GameModel *model);

#endif