# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 0; i < a; i++){
        if (arr[i] >largest ){
            largest = arr[i];
        }
        if (smallest > arr[i]){
            smallest = arr[i];
        }
    }
    cout << largest - smallest << endl;
    return 0;

}