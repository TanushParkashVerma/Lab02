#include <iostream>
using std::cerr;
using std::endl;
#include <fstream>
using std::ofstream;
#include "Lab02.hpp"
#include <iomanip>

using namespace std;

int main() {
    createFunctionList(); //Creates a txt file with integer double pairs

    double num, high, low, avg = 0.0, median = 0;
    double arr[10000];

    std::ifstream myfile("C:\\Users\\tanus\\CLionProjects\\Lab02\\cmake-build-debug\\Readings.txt");
    if (myfile.is_open()) {
        int x = 0;
        while (myfile >> num) {
            myfile >> num;
            if (x == 0) {
                high = num;
                low = num;
            }
            if (high < num) {
                high = num;
            }
            if (low > num) {
                low = num;
            }
            avg = avg + num;
            arr[x] = num;

            x++;
        }
        median = findMedian(arr, x);
        avg = avg / (double) x;
        std::cout << std::fixed;
        std::cout << "There are " << x << " readings in the file." << std::endl;
        std::cout << "The average reading is " << std::setprecision(3) << avg << endl;
        std::cout << "The highest reading is " << setprecision(3) << high << endl;
        std::cout << "The lowest reading is " << setprecision(3) << low << endl;
        std::cout << "The median reading is " << setprecision(3) << median << endl;

        myfile.close();
        return 0;
    }
}