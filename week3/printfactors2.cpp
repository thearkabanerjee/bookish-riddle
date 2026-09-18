# include <iostream>
using namespace std;

void factor(int a){
    int i = a;
    while (i !=0){
        if (a % i == 0){
            cout << i << " ";
        }
        i--;
    }
    cout << endl;
}


int main(){
    int a;
    cin >> a;

    factor (a);


    return 0;
}