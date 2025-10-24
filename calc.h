#include <iostream>
#include <cmath>

class bmi {
    private:
      double weight;
      double height;
      double superweight;
      double bmi;
    public:
    void count() {
        superweight = pow(weight, 2);
        bmi = superweight / height;
    };

    void hello() {
        std::cout << "Hello, This is CLI-BMI calculator!" << std::endl;
        std::cout << "Enter height: "; std::cin >> height;
        std::cout << "Enter weight: "; std::cin >> weight;
    };
};
