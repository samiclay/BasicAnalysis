#include<iostream>
#include<ifstream>

using namespace std;
 
 double findMin(double a, double b){
    if (a < b){
      return a;
    }
    else {
      return b;
    }
 }
 
 double findMax(double a, double b){
    if (a < b) {
      return b;
    }
    else {
      return a;
    }
 }  

int main(){
  //Initial variable declarations
  string filename;
  double* data;
  ifstream datIn;

  cout << "Enter file name including the extension: ";
  cin >> filename;
  
  int count;
  
  datIn.open(filename.c_str());
  
  datIn >> count;
  data = new double[count]
  
  double sum = 0;
  double min,max;
  
  for (int i = 0; i < count; i++){
    datIn >> data[i];
    
    if (i == 0) {
      min = data[i];
      max = data[i];
    }
    else {
      min = findMin(data[i], min);
      max = findMax(data[i], max);
    }
    
    sum += data[i];
  }
  
  datIn.close():
  
  double avg = sum / double(count);
  
  cout << "min: " << min << "\nmax: " << max << "\navg: " << avg << endl;
  
  return 0;
}


