#include <iostream>
using namespace std;

int countzeros(long long a){
    int count = 0;
    if (a == 0){
        return 1;
    }else {
        while(a != 0){
            if (a % 10 == 0){
                count++;
            }
            a/= 10;
        }
    }

    return count;
}


int main(){
    long long a;
    cin >> a;

    cout << countzeros(a) << endl;

    return 0;
}