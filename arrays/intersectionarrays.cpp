# include <iostream>
using namespace std;

int main(){
    
    int q;
    cin >> q;

    for (int w = 0; w < q; w++){
        int a;
        cin >> a;
        int arr1[a];
        for (int i = 0; i < a; i++){
            int m;
            cin >> m;
            arr1[i] = m;
        }

        int b;
        cin >> b;
        int arr2[b];

        for (int i = 0; i < b; i++){
            int m;
            cin >> m;
            arr2[i] = m;
        }
       

        //checking for the numbers
        for (int j = 0; j < a; j++){
            bool found = false;

            for (int k = 0; k < b; k++){
                if (arr1[j] == arr2[k]){
                    found = true;
                    break;
                }
            }
            if (found){
                cout << arr1[j] << " ";
            }
        }


        cout << endl;
    }


    return 0;
}