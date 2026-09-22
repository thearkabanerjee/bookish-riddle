# include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long reverse_a = 0;

    while (n != 0){
        reverse_a *= 10;
        reverse_a += (n% 10);
        n /= 10;
    }

    cout << reverse_a << endl;
    return 0;
}