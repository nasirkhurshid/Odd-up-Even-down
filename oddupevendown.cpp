#include <iostream>
#include <vector>
using namespace std;

vector<int> evenOddTransform(vector<int> arr, int n) {
	for(int j=0;j<n;j++){
		for(int i=0;i<arr.size();i++){
		    if(arr[i]%2==0){
			    arr[i]-=2;
		    }
		    else{
			    arr[i]+=2;
		    }
	    }
	}
    return arr;
}

int main()
{
    vector<int> vec={3,4,9};
    vec=evenOddTransform(vec,3);
    for(int i:vec){
        cout<<i<<"\t";
    }
}