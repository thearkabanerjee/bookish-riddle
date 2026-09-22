# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i <a ; i++){
        cin  >> arr[i];
    }
    int smallest = arr[0];
    int index = 0;
    for (int i = 0; i < a; i++){
        if (smallest > arr[i]){
            smallest = arr[i];
            index = i;
        }
    }

    cout << smallest << " "<< index << endl;
    return 0;
}