# include <iostream>
using namespace std;

string findfactorial(long long a, long long b){
    if ((a == 0 || a == 1) && (b == 0 || b == 1)){
        return ("Yes");
    }else{
        if (a == b){
            return ("Yes");
        }else{
            return ("No");
        }
    }
}

int main(){ 
    long long a, b;
    cin >> a >> b;

    cout << findfactorial(a, b)<< endl;

    return 0;
}