#include <iostream>
using namespace std;

bool second_largest( int arr[], const int s) {
    bool success;
    if (s < 2) {
        return false;

    }
  
    int max2, max1;
     max1 = max2 = arr[0];
     for (int i = 0; i < s; i++) {
         if (arr[i] > max1) {
             max1 = arr[i];
         }

     }
     for (int i = 0;i < s;i++) {
         if (arr[i] > max2 && max1 > arr[i]) {
             max2 = arr[i];
         }
     }
    int result = max2;
     cout << "The second place got marks: " << result<<endl;
     if (max1 == max2) {
         return false;
     }
     else { return true; 
     }

}
int main()
{
    int arr[7] = { 80,97,67,98,19,64,65 };
    
    int s = 7;
    cout <<  second_largest( arr,  s);
}
