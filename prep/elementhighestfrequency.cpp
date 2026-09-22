# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int thenumber = arr[0];
    int bestfrequency = 0;

    for(int i = 0; i < a; i++){
        int count = 0;
        for (int j = 0; j < a; j++){
            if (arr[i] == arr[j]) {
                count ++;   
            }
        }
        if (count > bestfrequency){
            bestfrequency = count;
            thenumber = arr[i];
        }
        
    }
    cout << thenumber << endl;
    return 0;
}