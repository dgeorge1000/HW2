// DataStruct1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

//GCD
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

//GCD iteratively version
int gcdbruteForce(int a, int b) {
    int gcd = 1;
    for(int i = 2; i <= min(a, b); ++i) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

//LCM using GCD
int lcm(int a, int b)
{
    int x = gcd(a,b);
    if(x>0) {
        return a*b/x;
    }
    return 0;
}

int powermod(int a, int b, int c) {     // a^b mod c: 2^16 % 17

}

/*
 *./exec a b r
 */
int main(int argc, char** argv)
{
    assert(argc == 4);
    int a=0, b=0, r=0;
    sscanf(argv[1],"%d",&a);
    sscanf(argv[2],"%d",&b);
    sscanf(argv[3],"%d",&r);
    std::cout << "a = " << a << ", b = " << b << ", r = " << r << endl;
    std::cout << "GCD: \t\t\t" << gcd(a, b) << std::endl;
    std::cout << "GCD brute force: \t" << gcdbruteForce(a, b) << std::endl;
    std::cout << "LCM: \t\t\t" << lcm(a, b) << std::endl;
    std::cout << "Power Mod: \t\t"<< powermod(a,b,r) << std::endl;

    return 0;
}
