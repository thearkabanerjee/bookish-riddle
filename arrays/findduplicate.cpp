# include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k ;

    for (int z = 0; z < k; z++){
        int a;
        cin>> a;
        int arr[a];

        // reading the array part
        for (int j = 0; j < a; j++){
            int m;
            cin >> m;
            arr[j] = m;
        }

        // logic to solve the problem
        for (int i = 0; i < a; i++){
            int count =0;
            for (int j = 0; j < a; j++){
                if (arr[i] == arr[j]){
                    count ++;
                }
            }

            if (count == 2){
                cout << arr[i] << endl;
                break;
            }
        }



    }

    return 0;
}