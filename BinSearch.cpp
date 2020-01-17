#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
	int mid=(startIndex+lastIndex)/2;
	
	if(array[mid]==element)
		return true;
	if(element>array[mid])
	{
		return search_recursion(array,mid,lastIndex,element);
	}
	else if(element<array[mid])
	{
		return binarySearchReacursive(array,startIndex,mid,element);
	}
  return false;
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
        while(true)
        {
         
        int mid=(startIndex+lastIndex)/2;
          if(element<array[mid])
          {
              lastIndex=mid;
          }
          else if(element>array[mid])
          {
              startIndex=mid;
          }
         
          }
            else if(element==array[mid])
            {
                return true;
                break;
            }
        
        }
    
  return false;
}

int main()
{
	int n,choice,x;
	cout<<"Enter th size of the array ";
	cin>>n;
	int ar[n];
	cout<<"enter the element of the array "
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}

	sort(ar,arr+size);
	
	cout<<"enter 1 for binarysearch by recursion ";
	cout<<"\n enter 2 for binarysearch by iteration";
	cout<<"\n enter your choice ";
	cin<<choice;
	cout<<"\nenter the no. to be search";
	cin<<x;
	switch(choice)
	{
		case 1:
			cout<<binarySearchReacursive(&ar,0,size,x);
			break;
		
		case 2:
		cout<<binarySearchIterative(&ar,0,size,x);
		break;
			
		default :
			cout<<"invalid choice";
			
	}

