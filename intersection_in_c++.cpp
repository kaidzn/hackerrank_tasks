#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the size of arrays: ";
  cin >> n;
  int arr1[n],arr2[n];
  cout << "Enter the first array: ";
  for(int i = 0;i < n; i++){
    cin >> arr1[i];
  }
  cout <<"Enter the second array: ";
  for(int j = 0;j < n; j++){
    cin >> arr2[j];
  }
  int count = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      
        if(arr1[i] == arr2[j]){
           count++;
        }
      
    }
  }
  cout << count<<" elements are same in two arrays"<<endl;
}
