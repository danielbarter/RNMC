#include "dispatcher.h"

int main(int argc, char **argv) {

    Dispatcher *dp = new_dispatcher(
        "/home/danielbarter/HiPRGen/scratch/rn.sqlite",
        1000,
        1000,
        4,
        200,
        true);

    free_dispatcher(dp);
}
