#include<iostream>
using namespace std;

int main()
{
    int arr [6] = {3,2,10,11,7,15}, x,y, target=9,sum=0,count=0;
    int arr_1[7];

    x = arr[0];

    for(int i=0; i<6; i++)
    {
        if(arr[i]<target)
        {
            arr_1[count] = arr[i];
            //cout<<arr_1[count]<<endl;
            count++;
        }
    }

    for (int j = 0; j<3; j++)
    {
        sum=arr_1[j]+arr_1[j+1];
        if(sum == target)
        {
            cout<<arr_1[j]<<","<<arr_1[j+1]<<endl;
        }
    }

}