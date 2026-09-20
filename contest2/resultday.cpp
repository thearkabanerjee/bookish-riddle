# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        int m;
        cin >> m;
        
        arr[i] = m;
    }

    int passmarks;
    cin >> passmarks;

    int pass = 0;
    int fail = 0;

    for (int j = 0 ; j < a; j++){
        if (arr[j] >= 0 && arr[j] <= 100 && arr[j] >= passmarks){
            pass ++;
        }else if (arr[j] < passmarks){
            fail ++;
        }
    }
    cout << "Pass: "<< pass << endl;
    cout << "Fail: "<< fail << endl;
    return 0;
}