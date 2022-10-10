#include "Vtop.h"
#include "verilated.h"

#include <iostream>

int main(int argc, char **argv, char **env) {

  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(false);

  std::cout << "Hello world!" << std::endl;
}
