# include <iostream>
using namespace std;

int main(){
    int times;
    cin >> times;
    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;


    for (int i = 1; i <= times; i++){
        int a ;
        cin >> a;

        if (a > 0){
            positive ++;
        }else if (a <0) {
            negative ++;
        }

        if (a % 2 == 0){
            even ++;
        }else {
            odd++;
        }
    }


    cout << positive<< endl<< negative << endl<< even<< endl<< odd << endl;
    return 0;
}