#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    unordered_map<int,int>mpp;
    int arr[n];
     int max_element=0;
     int max_freq=0;
    int most_freq_element;
    cout<<"Enter all array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    // cout<<"Ente the number of elements whose frequency you want to check : "<<endl;
    // int q;
    // cin>>q;
    // while(q--){
    //      cout<<"Ente the number  whose frequency you want to check : "<<endl;
    //     int number;
    //     cin>>number;
    //     cout<<"Number of frequency of Element you given :"<<endl;
    //     cout<<mpp[number];
    // }

   
   for(auto &pair:mpp){
    //  if (pair.second > max_freq) {
    //         max_freq = pair.second;
    //         most_freq_element = pair.first;
    //     }
     if(pair.second>max_freq){
                    most_freq_element=pair.first;
                    max_freq=pair.second;
                }
                if(pair.first<most_freq_element){
                    most_freq_element=pair.first;
                    max_freq=pair.second;
                }
   }
   cout << "Element with maximum frequency: " << most_freq_element << endl;
    cout << "Maximum frequency: " << max_freq << endl;
}