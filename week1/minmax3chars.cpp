# include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a>> b >> c;
    if (a >= b && a >= c){
        if (b > c){
            cout << "Min = " << c << endl;
        }
        else {
            cout << "Min = "<< b << endl;
        }
        cout << "Max = "<< a << endl;
    }
    else if (b >= a && b >= c){
        if (a > c){
            cout << "Min = " << c << endl;
        }
        else{
            cout << "Min = "<< a<< endl;
        }
        cout << "Max = "<< b << endl;
    }

    else if (c >= b && c >= a){
        if (b > a){
            cout << "Min = " << a << endl;
        }else{
            cout << "Min = " << b << endl;
        }
        cout << "Max = "<< c << endl;
    }
    return 0;
}