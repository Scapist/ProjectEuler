#include <iostream>

using namespace std;

int main()
{
    long long num = 600851475143;
    int divisor = 3;

    while(num != 1){
        if(num % divisor == 0){
            num = num / divisor;
        }
        else{
            divisor += 2;
        }
    }
    cout << divisor << endl;
}