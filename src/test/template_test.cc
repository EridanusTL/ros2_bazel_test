#include <iostream>

#include <Eigen/Dense>

template <typename T>
class TemplateTest {
 private:
  T C_;

 public:
  TemplateTest(/* args */);
  ~TemplateTest();

  void Test(T A, T B) {
    C_ = A * B;
    std::cout << "" << C_ << std::endl;
  };
};

template <typename T>
TemplateTest<T>::TemplateTest() {}

template <typename T>
TemplateTest<T>::~TemplateTest() {}

int main(int argc, char** argv) {
  TemplateTest<int> my_int_test;
  my_int_test.Test(3, 4);

  std::cout << std::endl;

  TemplateTest<double> my_double_test;
  my_double_test.Test(2.5, 3.5);

  std::cout << std::endl;

  TemplateTest<Eigen::MatrixXd> my_vector_test;
  Eigen::Vector2d A = {2, 4};
  Eigen::Vector2d B = {2, 2};

  // std::cout << A.transpose() * B << std::endl;
  my_vector_test.Test(A.transpose(), B);

  return 0;
}
