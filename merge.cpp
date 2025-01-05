#include<iostream>
using namespace std;
int arr[8]= {12,56,89,54,78,80,60,6};

int mergeArray(int left, int mid,int right)
{
    int leftArraysize=mid-left+1;
    int rightArraysize=right-mid;

    int leftArray[leftArraysize],rightArray[rightArraysize];

    for(int i=0; i<leftArraysize; i++)
        leftArray[i]=arr[i+left];
    for(int i=0; i<rightArraysize; i++)
        rightArray[i]=arr[i+mid+1];

    int leftMarker=0,rightMarker=0,arrMarker=left;
    while(leftMarker<leftArraysize && rightMarker<rightArraysize)
        if(leftArray[leftMarker]< rightArray [rightMarker])
        {
            arr[arrMarker]=leftArray[leftMarker];
            arrMarker++;
            leftMarker++;
        }
        else
        {
            arr[arrMarker]=rightArray[rightMarker];
            arrMarker++;
            rightMarker++;
        }

    while(leftMarker<leftArraysize )
    {
        arr[arrMarker]=leftArray[leftMarker];
        arrMarker++;
        leftMarker++;
    }
    while( rightMarker<rightArraysize)
    {
        arr[arrMarker]=rightArray[rightMarker];
        arrMarker++;
        rightMarker++;
    }
}
void mergesort(int left,int right)
{
    //cout << left << " " << right;
    if(left>=right)return;
    int mid = left+(right-left)/2;
    mergesort(left,mid);
    mergesort(mid+1,right);
    mergeArray(left,mid,right);
}
int main()
{
 for(int i=0; i<=7; i++)
        cout<<arr[i] << " ";
        cout << endl;

    mergesort(0,7);

    for(int i=0; i<=7; i++)
        cout<<arr[i] << " ";
        cout << endl;
}
