# include <iostream>
using namespace std;

bool prime (int a){
    int counter = 0;
    
    for (int i = 1; i <= a; i++){
        if (a% i == 0){
            counter++;
        }
    }
    if (counter == 2){
        return true;
    }else{
        return false;
    }
}

int main(){
    int a;
    cin >> a;

    
    for (int i = 2; i <= a; i++){
        if (prime(i) == true) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}