# include <iostream>
using namespace std;

int main(){
    int a, b;
    long long ans = 1;
    cin >> a>> b;
    
    while (b >0){
        ans *= a;
        b--;
    }

    cout << ans<< endl;

    return 0;
}