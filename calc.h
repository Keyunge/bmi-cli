#include <cstdio>
#include <iostream>
#include <cmath>

class bmi {

    public:
    // basic variables
    double weight;
    double height;
    double superweight;
    double bmi;

    // Calculate BMI
    void count() {
        superweight = pow(weight, 2);
        bmi = superweight / height;
    };
    // Welcome message
    void enjoy() {
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
    // Wellcome message
    void hello() {
        std::cout << "  ╱╲  ╱╲___│ │ │ ___    ╱__   ╲ │__ (_)___  (_)___    ╱ __╲ ╱ ╱   ╲_   ╲      ╱ __╲  ╱╲╱╲    ╲_   ╲   ___ __ _│ │ ___ _   _│ │ __ _│ │_ ___  _ __ ╱ ╲" << std::endl;
        std::cout << " ╱ ╱_╱ ╱ _ ╲ │ │╱ _ ╲     ╱ ╱╲╱ '_ ╲│ ╱ __│ │ ╱ __│  ╱ ╱   ╱ ╱     ╱ ╱╲╱____ ╱__╲╱╱ ╱    ╲    ╱ ╱╲╱  ╱ __╱ _` │ │╱ __│ │ │ │ │╱ _` │ __╱ _ ╲│ '__╱  ╱" << std::endl;
        std::cout << "╱ __  ╱  __╱ │ │ (_) │   ╱ ╱  │ │ │ │ ╲__ ╲ │ ╲__ ╲ ╱ ╱___╱ ╱___╱╲╱ ╱_│_____╱ ╲╱  ╲╱ ╱╲╱╲ ╲╱╲╱ ╱_   │ (_│ (_│ │ │ (__│ │_│ │ │ (_│ │ ││ (_) │ │ ╱╲_╱ " << std::endl;
        std::cout << "╲╱ ╱_╱ ╲___│_│_│╲___( )  ╲╱   │_│ │_│_│___╱ │_│___╱ ╲____╱╲____╱╲____╱      ╲_____╱╲╱    ╲╱╲____╱    ╲___╲__,_│_│╲___│╲__,_│_│╲__,_│╲__╲___╱│_│ ╲╱   " << std::endl;
    };
};
