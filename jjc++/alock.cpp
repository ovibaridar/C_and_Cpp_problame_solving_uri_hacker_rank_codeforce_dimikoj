#include<bits/stdc++.h>
using  namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int n)
    {
        data =n;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void insert(Node *node, int n)
{
    if(n<node->data)
    {
        if(node->left==NULL)
            node->left = new Node(n);
        else
            insert(node->left,n);
    }

    if(n>node->data)
    {
        if(node->right==NULL)
            node->right = new Node(n);
        else
            insert(node->right,n);
    }

    return;
}
//----------------------->end of binary

//started of heap sort algorithm
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;


    if (l < n && arr[l] > arr[largest])
        largest = l;


    if (r < n && arr[r] > arr[largest])
        largest = r;


    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}





void heapSort(int arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);


    for (int i = n - 1; i >= 0; i--)
    {

        swap(arr[0], arr[i]);


        heapify(arr, i, 0);
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int  main()
{
    string  strudent_name, father_name;

    cout<<"Enter your  name : ";
    std::getline(std::cin, strudent_name );
    cout<<"Enter your Father  name : ";
    std::getline(std::cin, father_name );
    cout<<endl<<endl;

    cout<<"Before remove  space and  Special characters"<<endl;
    cout<<"Student name = "<<strudent_name<<endl<<"Student  father name = "<<father_name<<endl<<endl;

    strudent_name.erase(remove(strudent_name.begin(), strudent_name.end(), '.' ), strudent_name.end());
    strudent_name.erase(remove(strudent_name.begin(), strudent_name.end(), ' ' ), strudent_name.end());


    father_name.erase(remove(father_name.begin(), father_name.end(), '.' ), father_name.end());
    father_name.erase(remove(father_name.begin(), father_name.end(), ' ' ), father_name.end());


    cout<<endl<<"After Remove  space and  Special characters"<<endl;
    cout<<"Student name = "<<strudent_name<<endl<<"Student  father name = "<<father_name<<endl<<endl;

    int student_name_lenght=strudent_name.size();
    int father_name_lenght=father_name.size();
    cout<<"Length  of  student  name = "<<student_name_lenght<<endl<<"Length  of  student Father name = "<<father_name_lenght<<endl<<endl<<endl;
    string student_name_again;
    if(student_name_lenght > 10)
    {
        int n;
        n =student_name_lenght-10;

        strudent_name.erase(0,n);

        cout<<"Our selection will be = "<<strudent_name<<endl<<endl<<endl;
    }
    else  if (student_name_lenght==10)
    {
        strudent_name=strudent_name;
    }

    else
    {
        int  n,i;
        string  abox="";
        n = 10-student_name_lenght;
        for(i=0; i<n; i++)
        {
            abox=abox+father_name[i];
        }
        strudent_name=abox+strudent_name;
        cout<<"Our selection will be = "<<strudent_name<<endl<<endl<<endl;
    }

    int  i,number, newmarical_valus_of_stdudent_name[10];
    for(i=0; i<10; i++)
    {
        int number = int(strudent_name[i]);
        newmarical_valus_of_stdudent_name[i] = number;
    }

    cout<<"All  Numerical values is = ";
    for(i=0; i<10; i++)
    {

        cout<<newmarical_valus_of_stdudent_name[i]<<"  ";
    }
    cout<<endl;



    int m,x;
    Node *root = NULL;
    m=10;
    for(int i=0; i<m; i++)
    {
        x=newmarical_valus_of_stdudent_name[i];
        if(root==NULL)
            root = new Node(x);
        else
            insert(root,x);
    }

    cout<<"After  Binary search tree implementation : = ";
    inorder(root);
    cout<<endl;



    int arr[10] ;
    for(i=0; i<10; i++)
    {
        arr[i]=newmarical_valus_of_stdudent_name[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);

    cout <<endl<<endl<< "After apply heap sort algorithm"<<endl;
    printArray(arr, n);

    return 0;
}
