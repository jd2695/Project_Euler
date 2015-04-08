//
//  By Jim Dong
//  Solution to Project Euler Problem 2
//  It pushes the next calculated fibbonacci number into a vector and increments the current
//  variable to that [just calculated] number and increments the prev variable to the former
//  value of the current variable
//  Even fibbonacci numbers are found by testing each number in the vector mod 2.
//  Runtime to calculate fibs = O(n)
//  Runtime to calculate sum of even fibs = O (n)

#include <iostream>
#include <vector>
using namespace std;

void calculateFib(vector<int>& fibs, int maxFib = 100) {
    int prev = 1;
    int current = 2;
    
    fibs.push_back(prev);
    fibs.push_back(current);
    
    while (current+prev < maxFib) {
        fibs.push_back(prev+current);
        current = current + prev;
        prev = current - prev;
    }
}

int sumOfEvenFibs(vector<int>& fibs){
    int sum = 0;
    for(size_t i = 0; i < fibs.size(); ++i){
        if( fibs[i] % 2 == 0){
            sum += fibs[i];
        }
    }
    return sum;
}

int main() {
    vector<int> fibs;
    calculateFib(fibs);
    cout << sumOfEvenFibs(fibs);
    

}
