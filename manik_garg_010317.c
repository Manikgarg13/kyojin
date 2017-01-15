#include<iostream>
using namespace std;
int main(){
int i,m,q,b=1;
int a[]={12,14,17,37,26,17,12,7,5,4};
for(i=0;i<10;i++){
if(a[i]>a[i+1])
{
m=i;
break;
}}
cout<<"Enter a number";
cin>>q;
if(q==m)
{cout<<"No. found is at index"<<m;
return 0;
}

	for(i=0;i<10;i++)
	{
	if(a[i]==q){
		cout<<"No. found at index"<<i<<endl;
		b++;
	}
}
if(b==1)
cout<<"No.not found";

return 0;
}



----------------------------------------------------------------------


#include<iostream>
using namespace std;
int main(){
int i,m,q,mid,start,end,b=0;
int a[]={55,62,77,81,11,17,36,47,54};

start=0,end=8;

while(start<end)
{

mid=(start+end)/2;
if(a[mid]>a[mid+1]){
m=mid;
break;
}

if(a[mid]>a[end])
start=mid;
else
end=mid;

}

cout<<m;

cout<<"Enter a number";
cin>>q;

start=0,end=m;

while(start<end){
mid=(start+end)/2;

if(a[mid]==q){
cout<<"No. is at index  "<<mid;
b++;
break;
}

if(q<a[mid])
end=mid;
else
start=mid+1;

}

start=m,end=9;

while(start<end){
mid=(start+end)/2;

if(a[mid]==q){
cout<<"No. is at index  "<<mid;
b++;
break;
}

if(q<a[mid])
end=mid;
else
start=mid+1;

}

if(b==0)
cout<<"No.not found";

return 0;
}



------------------------------------------------------------------


#include<iostream>
using namespace std;
int main(){
int i,m,q,mid,start,end,b=0;
int a[]={12,14,17,37,26,17,12,7,5,4};

start=0,end=10;
while(start<end)
{
mid=(start+end)/2;


if(a[mid]>a[mid+1])
end=mid;
else
start=mid+1;

if(start==end)
{m=mid;
break;
}
}
//cout<<m;

cout<<"Enter a number";
cin>>q;

start=0,end=m;

while(start<end){
mid=(start+end)/2;

if(a[mid]==q){
cout<<"No. is at index  "<<mid;
b++;
break;
}

if(q<a[mid])
end=mid;
else
start=mid+1;

}

start=m,end=10;

while(start<end){
mid=(start+end)/2;

if(a[mid]==q){
cout<<"No. is at index  "<<mid;
b++;
break;
}

if(q<a[mid])
start=mid+1;
else
end=mid;

}

if(b==0)
cout<<"No.not found";

return 0;
}



---------------------------------------------------------------



#include<stdio.h>
int main(){
int a[]={-2,-1,0,1,2,4,6,7,8,9,10};
int start=0,end=12,mid,i=1,j;
   //printf("Your no. not found");

while(start<end){
    mid=(start+end)/2;
    j=a[mid]-mid;
  // printf("Your no. not found");
    if( j==0){
        printf("found your a[i]=i  >_< at i= %d",mid);
        i=0;
        break;
    }
    if( j <0){
        start=mid+1;

    }
    if(j>0)
        end=mid;

}
if(i)
        printf("Your no. not found");
return 0;
}
