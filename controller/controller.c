#include "controller.h"
#include "../view/view.h"
#include <stdio.h>
#include <stdlib.h>

void run_game(GameModel *model) {
    display_message("Bem-vindo ao Super Trunfo de Países!");

    while (model->player_count > 0 && model->cpu_count > 0) {
        display_game_state(model);

        // Mostrar carta ao player
        int player_card_idx = model->player_hand[0];
        display_message("Sua carta atual:");
        display_card(&model->deck[player_card_idx]);

        int attr = get_user_input();
        if (attr < 0 || attr >= NUM_ATTRIBUTES) {
            display_message("Atributo inválido! Usando População.");
            attr = 0;
        }

        // Carta da CPU
        int cpu_card_idx = model->cpu_hand[0];
        display_message("Carta da CPU:");
        display_card(&model->deck[cpu_card_idx]);

        int result = compare_attributes(model, player_card_idx, cpu_card_idx, attr);

        if (result > 0) {
            display_message("Você venceu a rodada!");
            transfer_card(model, 1);
        } else if (result < 0) {
            display_message("CPU venceu a rodada!");
            transfer_card(model, 0);
        } else {
            display_message("Empate! Nenhuma carta transferida.");
        }

        printf("\n--- Próxima rodada ---\n");
    }

    if (model->player_count > 0) {
        display_message("Parabéns! Você venceu o jogo!");
    } else {
        display_message("CPU venceu o jogo! Tente novamente.");
    }
}