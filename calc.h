#include <iostream>
#include <cmath>

class bmi {
    private:
      // basic variables
      double weight;
      double height;
      double superweight;
      double bmi;
    public:
    // Calculate BMI
    void count() {
        superweight = pow(weight, 2);
        bmi = superweight / height;
    };
    // Welcome message
    void hello() {
        std::cout << "Hello, This is CLI-BMI calculator!" << std::endl;
        std::cout << "Enter height: "; std::cin >> height;
        std::cout << "Enter weight: "; std::cin >> weight;
    };
    // Adding funny messages
    void check() {
        if (bmi < 18) {std::cout << "You underweight! Here is your ice cream!";}
        else if (bmi == 19) {std::cout << "You normal! Congratulations!";}
        else if (bmi == 24) {std::cout << "You bubby! Go to the GUM!";}
        else if (bmi == 40) {std::cout << "You fucking overweight! You`re so fat, so... fuck you!!!";}
        else if (bmi > 19 && bmi < 23) {std::cout << "You normal! Congratulations!";}
        else if (bmi > 24 && bmi < 39) {std::cout << "You bubby! Go to the GUM!";}
        else if (bmi > 40) {std::cout << "You fucking overweight! You`re so fat, so... fuck you!!!";}
        std::cout << std::endl;
    };
    // Show BMI
    void showi() {
        std::cout << "Your BMI is " << bmi << std::endl;
    };
};
