#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int leftchild(int nodeindex) // returns the index of the left child
{
    return nodeindex *2 + 1 ;
}
int rightchild(int nodeindex) // returns the index of the right child
{
    return nodeindex * 2 + 2;
}
// changed i to a reference because left children must be able to increment it before node writes its own data
int inorder(int mas[], int nodeindex, int& i, int arr[]) // a recursive function to print the nodes values, put in array
{
    if (mas[nodeindex] == 0) return 0 ;
    inorder(mas, leftchild(nodeindex), i, arr) ;
    arr[i]=mas[nodeindex];             
    inorder(mas,  rightchild(nodeindex), ++i, arr); // pre-incrementing the array index i for the right child
}

int main () {
    int mas[93]={1,2,3,4,5,0,6,7,8,0,0,0,0,9,10};  // only 8 non-zero elements
    //int mas[93]={2,3,1,9,8,7,6,5};
    int arr[10]={0}; // initializing arr; otherwise last element will be garbage
    int i = 0; // added index variable to pass to recursive function
    inorder(mas, 0, i, arr);
    for (int k=0; k<10; k++)   // k<9: you were overrunning the end of the array
    	printf("inorder %d \n",arr[k]);
        //cout <<"inorder " << arr[k] << endl;
    system("pause");
    return 0;
}

