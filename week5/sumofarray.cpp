# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a;i++){
        int m;
        cin >>m;

        arr[i] = m;
    }

    int sum = 0;
    for (int i = 0; i < a; i++){
        sum += arr[i];
    }


    cout << sum << endl;
    return 0;
}