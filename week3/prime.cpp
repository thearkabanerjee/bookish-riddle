# include <iostream>
using namespace std;

string prime(int a){
    int counter = 0;

    for(int i = 1; i <= a; i++){
        if (a % i == 0){
            counter ++;
        }
    }
    if (counter == 2){
        return ("Prime");
    }else{
        return ("Not Prime");
    }
}

int main(){
    int a;
    cin >> a;

    cout << prime(a)<< endl;

    return 0;
}