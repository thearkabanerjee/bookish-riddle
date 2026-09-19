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

    for (int i = a-1; i >=0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}