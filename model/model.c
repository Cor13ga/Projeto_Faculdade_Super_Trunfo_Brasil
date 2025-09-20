#include "model.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

void init_country(Country *country, const char *name, int pop, int military, int super) {
    strcpy(country->name, name);
    country->attributes[0] = pop;
    country->attributes[1] = military;
    country->is_super_trunfo = super;
}

void init_model(GameModel *model) {
    srand(time(NULL));

    init_country(&model->deck[0], "India", 1464, 97, 0);
    init_country(&model->deck[1], "China", 1416, 98, 0);
    init_country(&model->deck[2], "United States", 347, 100, 0);
    init_country(&model->deck[3], "Indonesia", 286, 88, 0);
    init_country(&model->deck[4], "Pakistan", 255, 89, 0);
    init_country(&model->deck[5], "Nigeria", 238, 70, 0);
    init_country(&model->deck[6], "Brazil - Super Trunfo", 213, 90, 1);
    init_country(&model->deck[7], "Bangladesh", 176, 66, 0);
    init_country(&model->deck[8], "Russia", 144, 99, 0);
    init_country(&model->deck[9], "Ethiopia", 136, 49, 0);
    init_country(&model->deck[10], "Mexico", 132, 69, 0);
    init_country(&model->deck[11], "Japan", 123, 93, 0);
    init_country(&model->deck[12], "Egypt", 118, 82, 0);
    init_country(&model->deck[13], "Philippines", 117, 60, 0);
    init_country(&model->deck[14], "DR Congo", 113, 35, 0);
    init_country(&model->deck[15], "Vietnam", 102, 78, 0);
    init_country(&model->deck[16], "Iran", 92, 85, 0);
    init_country(&model->deck[17], "Turkey", 88, 92, 0);
    init_country(&model->deck[18], "Germany", 84, 87, 0);
    init_country(&model->deck[19], "Thailand", 72, 76, 0);
    init_country(&model->deck[20], "Tanzania", 71, 9, 0);
    init_country(&model->deck[21], "United Kingdom", 70, 95, 0);
    init_country(&model->deck[22], "France", 67, 94, 0);
    init_country(&model->deck[23], "South Africa", 65, 61, 0);
    init_country(&model->deck[24], "Italy", 59, 91, 0);
    init_country(&model->deck[25], "Kenya", 58, 18, 0);
    init_country(&model->deck[26], "Myanmar", 55, 64, 0);
    init_country(&model->deck[27], "Colombia", 53, 55, 0);
    init_country(&model->deck[28], "South Korea", 52, 96, 0);
    init_country(&model->deck[29], "Sudan", 52, 28, 0);
    init_country(&model->deck[30], "Uganda", 51, 0, 0);
    init_country(&model->deck[31], "Spain", 48, 84, 0);
    init_country(&model->deck[32], "Algeria", 47, 75, 0);
    init_country(&model->deck[33], "Iraq", 47, 58, 0);
    init_country(&model->deck[34], "Argentina", 46, 68, 0);
    init_country(&model->deck[35], "Afghanistan", 44, 0, 0);
    init_country(&model->deck[36], "Yemen", 42, 16, 0);
    init_country(&model->deck[37], "Canada", 40, 73, 0);
    init_country(&model->deck[38], "Angola", 39, 45, 0);
    init_country(&model->deck[39], "Ukraine", 39, 81, 0);
    init_country(&model->deck[40], "Morocco", 38, 42, 0);
    init_country(&model->deck[41], "Poland", 38, 80, 0);
    init_country(&model->deck[42], "Uzbekistan", 37, 43, 0);
    init_country(&model->deck[43], "Malaysia", 36, 59, 0);
    init_country(&model->deck[44], "Mozambique", 36, 12, 0);
    init_country(&model->deck[45], "Ghana", 35, 0, 0);
    init_country(&model->deck[46], "Peru", 35, 52, 0);
    init_country(&model->deck[47], "Saudi Arabia", 35, 77, 0);
    init_country(&model->deck[48], "Madagascar", 33, 0, 0);
    init_country(&model->deck[49], "Côte d'Ivoire", 33, 0, 0);
    init_country(&model->deck[50], "Cameroon", 30, 8, 0);
    init_country(&model->deck[51], "Nepal", 30, 0, 0);
    init_country(&model->deck[52], "Venezuela", 29, 51, 0);
    init_country(&model->deck[53], "Niger", 28, 0, 0);
    init_country(&model->deck[54], "Australia", 27, 83, 0);
    init_country(&model->deck[55], "North Korea", 27, 67, 0);
    init_country(&model->deck[56], "Syria", 26, 37, 0);
    init_country(&model->deck[57], "Mali", 25, 0, 0);
    init_country(&model->deck[58], "Burkina Faso", 24, 0, 0);
    init_country(&model->deck[59], "Sri Lanka", 23, 32, 0);
    init_country(&model->deck[60], "Taiwan", 23, 79, 0);
    init_country(&model->deck[61], "Malawi", 22, 0, 0);
    init_country(&model->deck[62], "Zambia", 22, 0, 0);
    init_country(&model->deck[63], "Chad", 21, 17, 0);
    init_country(&model->deck[64], "Kazakhstan", 21, 44, 0);
    init_country(&model->deck[65], "Chile", 20, 54, 0);
    init_country(&model->deck[66], "Somalia", 20, 0, 0);
    init_country(&model->deck[67], "Senegal", 19, 0, 0);
    init_country(&model->deck[68], "Romania", 19, 50, 0);
    init_country(&model->deck[69], "Guatemala", 19, 0, 0);
    init_country(&model->deck[70], "Netherlands", 18, 65, 0);
    init_country(&model->deck[71], "Ecuador", 18, 36, 0);
    init_country(&model->deck[72], "Cambodia", 18, 6, 0);
    init_country(&model->deck[73], "Zimbabwe", 17, 0, 0);
    init_country(&model->deck[74], "Guinea", 15, 0, 0);
    init_country(&model->deck[75], "Benin", 15, 0, 0);
    init_country(&model->deck[76], "Rwanda", 15, 0, 0);
    init_country(&model->deck[77], "Burundi", 14, 0, 0);
    init_country(&model->deck[78], "Bolivia", 13, 21, 0);
    init_country(&model->deck[79], "Tunisia", 12, 11, 0);
    init_country(&model->deck[80], "South Sudan", 12, 0, 0);
    init_country(&model->deck[81], "Haiti", 12, 0, 0);
    init_country(&model->deck[82], "Belgium", 12, 40, 0);
    init_country(&model->deck[83], "Jordan", 12, 26, 0);
    init_country(&model->deck[84], "Dominican Republic", 12, 0, 0);
    init_country(&model->deck[85], "United Arab Emirates", 11, 47, 0);
    init_country(&model->deck[86], "Honduras", 11, 0, 0);
    init_country(&model->deck[87], "Cuba", 11, 34, 0);
    init_country(&model->deck[88], "Tajikistan", 11, 0, 0);
    init_country(&model->deck[89], "Papua New Guinea", 11, 0, 0);
    init_country(&model->deck[90], "Sweden", 11, 74, 0);
    init_country(&model->deck[91], "Czech Republic", 11, 48, 0);
    init_country(&model->deck[92], "Portugal", 10, 62, 0);
    init_country(&model->deck[93], "Azerbaijan", 10, 41, 0);
    init_country(&model->deck[94], "Greece", 10, 71, 0);
    init_country(&model->deck[95], "Togo", 10, 0, 0);
    init_country(&model->deck[96], "Hungary", 10, 46, 0);
    init_country(&model->deck[97], "Israel", 10, 86, 0);
    init_country(&model->deck[98], "Austria", 9, 33, 0);
    init_country(&model->deck[99], "Belarus", 9, 31, 0);

    int shuffled[NUM_CARDS];
    for (int i = 0; i < NUM_CARDS; i++) shuffled[i] = i;
    for (int i = NUM_CARDS - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = shuffled[i];
        shuffled[i] = shuffled[j];
        shuffled[j] = temp;
    }
    model->player_count = PLAYER_CARDS;
    model->cpu_count = PLAYER_CARDS;
    for (int i = 0; i < PLAYER_CARDS; i++) {
        model->player_hand[i] = shuffled[i];
        model->cpu_hand[i] = shuffled[i + PLAYER_CARDS];
    }
}

//Regras de avaliação das cartas da mão
int compare_attributes(GameModel *model, int player_card_idx, int cpu_card_idx, int attr) {
    Country *p = &model->deck[player_card_idx];
    Country *c = &model->deck[cpu_card_idx];
    if (p->is_super_trunfo && c->is_super_trunfo) return 0;
    if (p->is_super_trunfo) return 1;
    if (c->is_super_trunfo) return -1;
    int p_val = p->attributes[attr];
    int c_val = c->attributes[attr];
    if (p_val > c_val) return 1;
    if (p_val < c_val) return -1;
    return 0;
}

void transfer_card(GameModel *model, int winner_is_player) {
    if (winner_is_player) {
        model->player_hand[model->player_count++] = model->cpu_hand[0];
        for (int i = 0; i < model->cpu_count - 1; i++) {
            model->cpu_hand[i] = model->cpu_hand[i + 1];
        }
        model->cpu_count--;
    } else {
        model->cpu_hand[model->cpu_count++] = model->player_hand[0];
        for (int i = 0; i < model->player_count - 1; i++) {
            model->player_hand[i] = model->player_hand[i + 1];
        }
        model->player_count--;
    }
}

int is_game_over(GameModel *model) {
    return model->player_count == 0 || model->cpu_count == 0;
}