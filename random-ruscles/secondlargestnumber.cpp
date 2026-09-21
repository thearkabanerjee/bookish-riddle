# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    // reading the inputs and placing them in arrays
    for (int i = 0; i < a; i++){
        int m ;
        cin >> m;
        arr[i] = m;
    }

    // somehow find the second largest number
    int largest = arr[0];
    int secondlargest;
    bool foundsecond = false;

    for (int i = 0; i < a; i++){
        if (arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
            foundsecond = true;
        }
        else if (arr[i] < largest){
            if (foundsecond != true){
                secondlargest = arr[i];
                foundsecond = true;
            }
            else if (arr[i] > secondlargest){
                secondlargest = arr[i];
            }
        }
        
        
    }




    cout << secondlargest << endl;
    return 0;
}