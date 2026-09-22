# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int sumtotal = 0;
    int sum = 0;
    for (int i = 1; i <= a+1; i++){
        sumtotal += i;
    }

    for (int i = 0; i < a; i++){
        sum += arr[i];
    }



    cout << sumtotal - sum << endl;
    return 0;
}