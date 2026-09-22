# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < a; i ++){
        for (int j = 0; j < i; j++){
            if (arr[i] == arr[j]) {
                cout << arr[j]  <<endl;
                found = true;
                break;
            }
        }
        if (found){
            break;
        }
    }
    if (!found) {
        cout << -1 << endl;
    }
    return 0;
}