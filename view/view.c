#include "view.h"
#include <stdio.h>
#include <string.h>

void display_card(Country *card) {
    if (card->is_super_trunfo && strcmp(card->name, "Brazil - Super Trunfo") == 0) {
        printf("ALERTA: Carta Trunfo (melhor país do mundo)!\n");
    } else if (card->is_super_trunfo) {
        printf("ALERTA: Carta Super Trunfo!\n");
    }
    printf("Carta: %s\n", card->name);
    printf("  População: %d milhões\n", card->attributes[0]);
    printf("  Força Militar: %d\n", card->attributes[1]);
    printf("---\n");
}

void display_game_state(GameModel *model) {
    printf("\n=== ESTADO DO JOGO ===\n");
    printf("Cartas restantes: Você %d | CPU %d\n", model->player_count, model->cpu_count);
    printf("======================\n\n");
}

void display_message(const char *msg) {
    printf("%s\n", msg);
}

int get_user_input() {
    int choice;
    printf("\nEscolha o atributo (0: População, 1: Força Militar): ");
    scanf("%d", &choice);
    return (choice >= 0 && choice < NUM_ATTRIBUTES) ? choice : 0;
}