# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    } // this part reads the input

    bool found = false;
    int secondlargest ;
    int largest = arr[0];

    for (int i = 1; i < a; i++){
        if (arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
            found = true;
        }
        else if (arr[i] < largest && !found){
            secondlargest = arr[i];
            found = true;
        }
        else if (arr[i] > secondlargest && arr[i] < largest && found){
            secondlargest = arr[i];
        }
    }

    cout << secondlargest<< endl;
    return 0;
}

// need to practice a lot of second largest element