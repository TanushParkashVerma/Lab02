//
// Created by tanus on 2019-09-20.
//Functions

#ifndef LAB02_LAB02_HPP
#define LAB02_LAB02_HPP

#include <iomanip>

//Creates a txt file with integer double pairs
void createFunctionList() {
    srand(time(0));
    std::ofstream read("Readings.txt");
    int integerPair;
    float doublePair;
    int nums = 512 + (std::rand() % (1024 - 512 + 1));
    for (integerPair = 0; integerPair < nums; integerPair++) {
        doublePair = 90.000 + rand() / ((RAND_MAX / (50.000 - 90.000)));
        read << integerPair << "\t" << std::fixed << std::setprecision(3) << doublePair << endl;
    }
    read.close();
}

// Find Median function
double findMedian(double a[], int n) {
    // check for even case
    if (n % 2 != 0) {
        return (double)a[n / 2];
    }
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}












#endif //LAB02_LAB02_HPP
