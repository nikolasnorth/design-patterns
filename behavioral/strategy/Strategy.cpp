#include <iostream>

#include "Strategy.h"

void StrategyA::execute() const {
  std::cout << "Executing StrategyA()" << std::endl;
}

void StrategyB::execute() const {
  std::cout << "Executing StrategyB()" << std::endl;
}

void StrategyC::execute() const {
  std::cout << "Executing StrategyC()" << std::endl;
}

Context::Context(const Strategy &s) : _s(&s) {}

void Context::set_strategy(const Strategy &s) {
  _s = &s;
}

// Execute algorithm for this Strategy.
void Context::do_something() const {
  _s->execute();
}
