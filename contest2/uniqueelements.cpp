# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int arr[a];

    for (int i = 0; i < a;i++){
        long long m;
        cin >> m;
        arr[i] = m;
    }

    for (int i = 0 ; i < a;i++){
        int count = 0;
        for (int j = 0; j < a; j++){
            if (arr[j] == arr[i]) {
                count ++;
            }
        }

        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}