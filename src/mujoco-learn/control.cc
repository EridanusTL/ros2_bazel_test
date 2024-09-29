#include "control.h"

void Control::MyController() {}

void Control::PrintData() {
  std::cout << "d.energy = " << d_->energy[0] << " " << d_->energy[1] << " " << d_->energy[0] + d_->energy[1]
            << std::endl;
}
