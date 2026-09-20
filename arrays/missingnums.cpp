# include <iostream>
using namespace std;

int main(){
    int z;
    cin >>z;
    
    for (int i = 0; i < z; i++){
        int a;
        cin >> a;
        int arr[a];

        for (int j = 0; j < a; j++){
            int m;
            cin >> m;
            arr[j] = m;
        }

        // int result = arr[0];
        for (int i = 0; i < a; i++){
            int count = 0;
            for (int z = 0; z < a; z ++){
                if (arr[i] == arr[z]){
                    count ++;
                }
            }

            if (count == 1){
                cout << arr[i] << endl;
                break;
            }
        }

    }


    return 0;
}