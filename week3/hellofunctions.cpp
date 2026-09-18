# include <iostream>
using namespace std;

void hellofunction(int a){
    for (int i = 0; i < a; i++){
        cout << "I am learning functions" << endl;
    }
}

int main(){
    int a ;
    cin >> a;

    hellofunction(a);

    return 0;
}

