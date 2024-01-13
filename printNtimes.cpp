#include <iostream>
#include <vector>
using namespace std;

void printNTimesHelper(int n, int m) {
    if (m==n) {
        return;
    }
    cout << "Coding Ninjas ";
    printNTimesHelper(n, m + 1);
}

vector<string> printNTimes(int n) {
    printNTimesHelper(n, 0);
    return {};
}
