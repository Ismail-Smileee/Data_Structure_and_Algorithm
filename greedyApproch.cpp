#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the product amount: ";
cin>>n;
int weight[n],price[n];
cout<<"Enter weight: ";
for(int i=0;i<n;i++){
    cin>>weight[i];

}
cout<<"Enter price: ";
for(int i=0;i<n;i++){
   cin>>price[i];
}
int bag_capasity;
cout<<"Bag Capasity: ";
cin>>bag_capasity;

for(int i=0;i<n;i++){
        int min_index=i;
    for(int j=min_index+1;j<=n;j++){
        if(price[min_index]<price[j]){
            min_index=j;
        }
            {
            swap(price[i],price[min_index]);
            swap(weight[i],weight[min_index]);
        }
    }
}
for(int i=0;i<n;i++){
cout<<weight[i]<<endl;
cout<<price[i]<<endl;
}
int total_price=0;
for(int i=0;i<n;i++){
   if(bag_capasity==0){
    break;
   }
   if(weight[i]<=bag_capasity){
    bag_capasity-=weight[i];
    total_price+=price[i]*weight[i];
   }
else{

    total_price+=price[i]*bag_capasity;
    bag_capasity=0;
}
}
 cout<<endl;
    cout<<"total_price: "<<total_price;
}

