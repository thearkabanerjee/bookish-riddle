# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    long long factorial = 1;

    while (a >= 1){
        factorial *= a;
        a--;
    }

    cout << factorial<< endl;
    return 0;
}