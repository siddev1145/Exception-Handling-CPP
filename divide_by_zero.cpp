/*
//Name: Siddhant Bedre
//PRN: 23070123037
Aim: Exception to check for 0 division error
  */
#include <iostream>
using namespace std;
int main() {
float n1, n2, ans;

    cout << "Enter the values of numbers 1 and 2: ";
    cin >>n1>>n2;
    try{
        if(n2==0){
            throw n2;}
        else{
            ans = n1/n2;
            cout << "The answer is "<< ans;
        }
    }
catch(float num){
    cout<<"\n ERROR: Division by "<<num<<endl;
}
    return 0;
}

/*Output
Enter the values of numbers 1 and 2: 4
0

ERROR: Division by 0
  */
