# include <iostream>
using namespace std;

long long factorial(int a ){
    long long ans = 1;
    while (a >0){
        ans *= a;
        a--;
    }
    return ans;
}

int main(){
    int a;
    cin >> a;

    cout << factorial(a)<< endl;


    return 0;
}