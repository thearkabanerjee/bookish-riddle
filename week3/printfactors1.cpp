# include <iostream>
using namespace std;

void factor(int a){
    for (int i = 1; i <= a; i++){
        if (a% i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}


int main(){
    int a;
    cin >> a;

    factor(a);


    return 0;
}