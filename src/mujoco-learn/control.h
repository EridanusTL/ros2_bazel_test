#include <iostream>

#include <mujoco/mujoco.h>

class Control {
 private:
  /* data */
  const mjModel* m_;
  mjData* d_;

 public:
  Control(const mjModel* m, mjData* d) {
    m_ = m;
    d_ = d;
  };

  void MyController();

  void PrintData();
};
