# include <iostream>
using namespace std;

int main(){
    int a;
    cin>> a;
    int arr[a];

    for (int i = 0 ; i < a; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++){
        bool duplicate = false;

        for (int j = 0; j < i; j++){
            if (arr[i] == arr[j]){
                duplicate = true;
                break;
            }
        }

        if (!duplicate){
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}