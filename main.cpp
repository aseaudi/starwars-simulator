#include <iostream>
#include <string>

#include "model.h"
#include "controller.h"
#include "view.h"

using namespace std;

Model* Model::instance = nullptr;

int main(int argc, char *argv[]) {
    std::cout.precision(2); 
    std::cout << std::fixed;
    Controller controller;
    controller.run(argc, argv);
    return 0;
}
