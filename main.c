#include "model/model.h"
#include "controller/controller.h"

int main() {
    GameModel model;
    init_model(&model);
    run_game(&model);
    return 0;
}