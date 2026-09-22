# include <iostream>
using namespace std;


int main(){
    long long n;
    cin >> n;
    int nums = 0;

    while (n != 0){
        nums += 1;
        n /= 10;
    }

    cout << nums << endl;
    return 0;
}