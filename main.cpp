#include "behavioral/strategy/Strategy.h"

int main() {
  auto a = StrategyA();
  auto b = StrategyB();
  auto c = StrategyC();
  auto ctx = Context(a);

  ctx.execute_strategy();  // execute StrategyA

  ctx.set_strategy(b);
  ctx.execute_strategy();  // execute StrategyB

  ctx.set_strategy(c);
  ctx.execute_strategy();  // execute StrategyC
}
