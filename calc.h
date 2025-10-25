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
    // Checking BMI
    void enjoy() {
        std::cout << "Enter height: " << "\033[32m"; std::cin >> height;
        std::cout << "\033[1m\033[34m" << "Enter weight: " << "\033[32m"; std::cin >> weight;
    };
    // Adding funny messages
    void check() {
        if (bmi < 18) {std::cout << "\033[36m" << "You underweight! Here is your ice cream!";}
        else if (bmi == 19) {std::cout << "\033[32m" << "You normal! Congratulations!";}
        else if (bmi == 24) {std::cout << "\033[33m" << "You bubby! Go to the GUM!";}
        else if (bmi == 40) {std::cout << "\033[31m" <<"You fucking overweight! You`re so fat, so... fuck you!!!";}
        else if (bmi > 19 && bmi < 23) {std::cout << "\033[32m" << "You normal! Congratulations!";}
        else if (bmi > 24 && bmi < 39) {std::cout << "\033[33m" << "You bubby! Go to the GUM!";}
        else if (bmi > 40) {std::cout << "\033[31m" << "You fucking overweight! You`re so fat, so... fuck you!!!";}
        std::cout << std::endl;
    };
    // Show BMI
    void showi() {
        if (bmi < 18) {std::cout << "\033[1m\033[36m" << "Your bmi is " << bmi;}
        else if (bmi == 19) {std::cout << "\033[1m\033[32m" << "Your bmi is " << bmi;}
        else if (bmi == 24) {std::cout << "\033[1m\033[33m" << "Your bmi is " << bmi;}
        else if (bmi == 40) {std::cout << "\033[1m\033[31m" << "Your bmi is " << bmi;}
        else if (bmi > 19 && bmi < 23) {std::cout << "\033[1m\033[32m" << "Your bmi is " << bmi;}
        else if (bmi > 24 && bmi < 39) {std::cout << "\033[1m\033[33m" << "Your bmi is " << bmi;}
        else if (bmi > 40) {std::cout << "\033[1m\033[31m" << "Your bmi is " << bmi;}
        std::cout << std::endl;
    };
    // Wellcome message
    void hello() {
        std::cout << "\033[1m\033[34m" << "  ╱╲  ╱╲___│ │ │ ___    ╱__   ╲ │__ (_)___  (_)___    ╱ __╲ ╱ ╱   ╲_   ╲      ╱ __╲  ╱╲╱╲    ╲_   ╲   ___ __ _│ │ ___ _   _│ │ __ _│ │_ ___  _ __ ╱ ╲" << std::endl;
        std::cout << "\033[1m\033[34m" << " ╱ ╱_╱ ╱ _ ╲ │ │╱ _ ╲     ╱ ╱╲╱ '_ ╲│ ╱ __│ │ ╱ __│  ╱ ╱   ╱ ╱     ╱ ╱╲╱____ ╱__╲╱╱ ╱    ╲    ╱ ╱╲╱  ╱ __╱ _` │ │╱ __│ │ │ │ │╱ _` │ __╱ _ ╲│ '__╱  ╱" << std::endl;
        std::cout << "\033[1m\033[34m" << "╱ __  ╱  __╱ │ │ (_) │   ╱ ╱  │ │ │ │ ╲__ ╲ │ ╲__ ╲ ╱ ╱___╱ ╱___╱╲╱ ╱_│_____╱ ╲╱  ╲╱ ╱╲╱╲ ╲╱╲╱ ╱_   │ (_│ (_│ │ │ (__│ │_│ │ │ (_│ │ ││ (_) │ │ ╱╲_╱ " << std::endl;
        std::cout << "\033[1m\033[34m" << "╲╱ ╱_╱ ╲___│_│_│╲___( )  ╲╱   │_│ │_│_│___╱ │_│___╱ ╲____╱╲____╱╲____╱      ╲_____╱╲╱    ╲╱╲____╱    ╲___╲__,_│_│╲___│╲__,_│_│╲__,_│╲__╲___╱│_│ ╲╱   " << std::endl;
    };
};
