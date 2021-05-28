#pragma once

class Strategy {
public:
  virtual void execute() const = 0;
};

class StrategyA : public Strategy {
public:
  void execute() const override;
};

class StrategyB : public Strategy {
public:
  void execute() const override;
};

class StrategyC : public Strategy {
public:
  void execute() const override;
};

class Context {
private:
  const Strategy *_s;

public:
  explicit Context(const Strategy &s);

  void set_strategy(const Strategy &s);

  void execute_strategy() const;
};
