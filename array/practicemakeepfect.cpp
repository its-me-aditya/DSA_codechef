
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int arr[4];
    int index=0;
 for(int i=0;i<4;i++)
 {
    cin>>arr[i];
    }
    for(int j=0;j<4;j++){
        if(arr[j]>=10){
        index++;
    }
    }
    cout<<index<<endl;
	// your code goes here
	return 0;
}
