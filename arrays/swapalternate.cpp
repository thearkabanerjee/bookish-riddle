# include <iostream>
using namespace std;

int main(){
    int z;
    cin >> z;

    for (int i = 0;  i < z; i++){
        int m;
        cin >> m;

        int arr[m];

        for (int c = 0; c < m ; c++){
            long long a;
            cin >> a;

            arr[c] = a;
        }

        for (int i = 1; i <m; i+=2){
            long long z = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = z;
        }

        for (int i = 0; i < m ; i++){
            cout << arr[i]<< " ";
        }
        cout << endl;
    }

    return 0;
}