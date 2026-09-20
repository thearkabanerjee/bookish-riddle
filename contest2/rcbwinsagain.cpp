# include <iostream>
using namespace std;


int main(){
    int a;
    cin>> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        long long m;
        cin >> m;
        arr[i] = m;
    }

    long long left = a/2 -1;
    long long right = a/2;
    while (left >= 0 && right <= a){
        cout << arr[left] << " ";
        cout << arr[right] << " ";

        left --;
        right ++;
    }
    cout << endl;
    return 0;
}