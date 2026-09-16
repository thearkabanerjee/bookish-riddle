# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int reversea=0;

    while (a != 0){
        reversea *= 10;
        reversea += a%10;
        a/= 10;
    }
    
    cout << reversea<< endl;
    return 0;
}