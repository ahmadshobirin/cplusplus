#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <stdlib.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}


struct node
{
	int data;
	node* left;
	node* right;
};

struct node* getNode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void inorder(struct node* root)
{
    if (root != NULL)
     {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

struct node* Insert(struct node* root, int data)
{
	if (root == NULL)
		return getNode(data);

	if (data < root->data)
		root->left  = Insert(root->left, data);
	else if (data > root->data)
		root->right = Insert(root->right, data);

	return root;
}

main()
{
int pil, k, bil, nilai[100], angka, n, temp, label;
char kem;
string mulai, tidak;
mulai:
	cout<<"=========================\n";
	cout<<"1. Program Searching	=\n2. Program Sorting	=\n3. Program Linked List	=\n4. Program Tree		=\n";
	cout<<"=========================\n";
	cout<<"\nMasukkan Pilihan Anda : ";cin>>pil;

switch(pil){
	case 1:
		{

		system("cls");
		cout<<"-----------Mencari Nilai Bilangan------------\n";
		cout<<"\nMasukkan Banyak Bilangan : ";cin>>k;
		int nilai[k];
		for(int l=0; l<k; l++){
			cout<<"Masukkan Bilangan Ke "<<l<<" : ";cin>>nilai[l];
		}
		cout<<"\nMasukkan Bilangan Yang Dicari : ";cin>>bil;
		//melakukan pencarian
		int a=0;
		do{
			if(nilai[a]==bil)
			angka=nilai[a];
			a++;
		}while (a<k);
		if(angka==bil){
			cout<<"Bilangan "<<bil<<" Ditemukan\n";
		}else{
			cout<<"Bilangan "<<bil<<" Tidak Ditemukan\n";
		}
		cout<<"\n\nKembali ke menu utama [Y/T] ? "; cin>>kem;
		if (kem == 'y' || kem == 'Y')
		{

		system("cls");
		goto mulai;}
		else if (kem == 't' || kem == 'T')
		{

		system("cls");
		goto tidak;}
	}
		break;

		case 2:
			{
			int simpan;
					system("cls");
		cout<<"Bubble short\n\n ";
cout<<"Masukkan Banyak Data = ";
    cin>>n;
    int data[n];
    cout<<""<<endl;

    for (int i=1; i<=n; i++)
    {
        cout<<"Data "<<i<<" = ";
        cin>>data[i];
    }
    cout<<""<<endl;

    cout<<"Awalnya  = ";
    for (int i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<""<<endl;

    for (int i=1; i<n; i++)
    {
        for (int j=1; j<n; j++)
        {
            if (data[j]<data[j+1])
            {
                simpan=data[j];
                data[j]=data[j+1];
                data[j+1]=simpan;
            }
        }
    }

    cout<<"Descending = ";
    for (int i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<""<<endl;

//Pengurutan secara Ascending (Bubble Sort)
for(int i=1; i<=n; i++)
{
       for(int j=i; j<=n; j++)
       {
              if(data[i] > data[j])
              {
                     simpan = data[j];
                     data[j] = data[i];
                     data[i] = simpan;
              }
       }
}
cout<<"Ascending = ";
for(int i=1;i<=n;i++)
{
       cout <<data[i]<<" ";
}

}

		cout<<"\n\nKembali ke menu utama [Y/T] ? "; cin>>kem;
		if (kem == 'y' || kem == 'Y')
		{

		system("cls");
		goto mulai;}
		else if (kem == 't' || kem == 'T')
		{

		system("cls");
		goto tidak;}

	break;

	case 3:
		   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   		cout<<"\n\nKembali ke menu utama [Y/T] ? "; cin>>kem;
		if (kem == 'y' || kem == 'Y')
		{

		system("cls");
		goto mulai;}
		else if (kem == 't' || kem == 'T')
		{

		system("cls");
		goto tidak;}
		break;

		break;

	case 4:
	system("cls");
	node* root=NULL;
	root=Insert(root,20);
	Insert(root,15);
	Insert(root,25);
	Insert(root,18);
	Insert(root,10);
	Insert(root,16);
	Insert(root,19);
	cout<<"Before Insertion: ";
	cout<<"\nInorder: ";
	inorder(root);
	cout<<endl;

	root=Insert(root,17);
	cout<<"\nNode Inserted"<<endl;

	cout<<"\nAfter Insertion: ";
	cout<<"\nInorder: ";
	inorder(root);
	cout<<endl;
		cout<<"\n\nKembali ke menu utama [Y/T] ? "; cin>>kem;
		if (kem == 'y' || kem == 'Y')
		{

		system("cls");
		goto mulai;}
		else if (kem == 't' || kem == 'T')
		{

		system("cls");
		goto tidak;}


		break;
}
tidak:
	return 0;
}
