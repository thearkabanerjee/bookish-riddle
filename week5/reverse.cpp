# include <iostream>
# include <algorithm>

using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a;i++){
        int m;
        cin >> m;
        arr[i] = m;
    }
    
    reverse(arr, arr+a);

    for (int i = 0; i < a; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
    return 0;
}