#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cout << "Enter the year ";
  cin >> n;
  if(1900<=n<=pow(10, 5)){
    if(n%4 == 0 & n%100 != 0 || n%100 == 0 & n % 400 == 0){
      cout <<"It is a LEAP YEAR ";
    }
    else{
      cout << "It is NOT a LEAP YEAR :("<<endl;
    }
  }
  else{
    cout << "Error!!!";
  }
}
