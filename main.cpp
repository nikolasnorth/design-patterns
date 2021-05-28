#include "behavioral/strategy/Strategy.h"

int main() {
  auto a = StrategyA();
  auto b = StrategyB();
  auto c = StrategyC();
  auto ctx = Context(a);

  ctx.do_something();  // execute StrategyA

  ctx.set_strategy(b);
  ctx.do_something();  // execute StrategyB

  ctx.set_strategy(c);
  ctx.do_something();  // execute StrategyC
}
