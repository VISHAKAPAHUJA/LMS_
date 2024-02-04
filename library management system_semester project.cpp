#include<iostream>//for input output stream
#include<conio.h>//for getch
#include<cstdlib>//to convert strings to integer and float   
#include<string.h>
using namespace std;
struct book //structure of book  below are members of structure (field and member)
{
	char bookname[60];
	int bookid;
	char authorname[60];
};
void sbyname();
void sbyauthor();
void sbyid();
void dbyname();
void dbyauthor();
void dbyid();
void ubyname();
void ubyauthor();
void ubyid();

book books[100];   //array of structures
int n=0; //global variable for number of records
     
void display(void)
{
	system("cls");
	cout<<"\t \t [IN DISPLAY FUNCTION]"<<endl;
	cout<<"\t _______________________________________________________________________________________"<<endl;	
	cout<<"\t\t BOOK NAME"<<"\t\t BOOK CODE"<<"\t\t AUTHOR NAME"<<endl;
	cout<<"\t _______________________________________________________________________________________"<<endl;	
    for (int i=0; i<n; i++)
    { cout<<"\t \t "<<books[i].bookname<<"\t \t \t "<<books[i].bookid<<"\t \t \t "<<books[i].authorname<<endl;
    cout<<"\t _______________________________________________________________________________________"<<endl;	
	}
	cout<<"PRESS ENTER TO GO TO MAIN MENU.........";
	getch();
	
}

	void add(void)
	{
		char ch; char id[6];
		do {
			system ("cls");
			cout<<"\t \t [IN ADD FUCNTION]"<<endl;
			cout<<"\t \t ENTER BOOK NAME:";
			gets(books[n].bookname);
			cout<<"\t \t ENTER BOOK CODE:";
			gets(id) ; 
	       	books[n].bookid=atoi(id);  //cstdlib header file used to convert a string value to an integer value //atoi predefined funcyion
			cout<<"\t \t ENTER AUTHOR NAME:";
			gets(books[n].authorname);
			n++;
			cout<<"DO YOU WANT TO ADD MORE BOOKS?"<<endl;
			cout<<"PRESS [Y] FOR YES, AND [N] FOR NO"<<endl;
			ch=getch();
		}
	while (ch!='n');
	}
	void search(void)
	{
		system ("cls");
		cout<<"\t \t [IN SEARCH FUNCTION]"<<endl;
		cout<<"\t \t CHOOSE THE OPTION GIVEN BELOW"<<endl;
		cout<<"\t \t -----------------------------"<<endl;
		cout<<"\t \t (N) \t SEARCH BY BOOK NAME:"<<endl;
		cout<<"\t \t (A) \t SEARCH BY AUTHOR NAME:"<<endl;
		cout<<"\t \t (C) \t SEARCH BY BOOK CODE:"<<endl;

switch (getch())
{
    case 'n': sbyname();break;
	case 'a':sbyauthor();break;
	case 'c':sbyid();break;
	getch();
	}}

void sbyname(void)
{
	 char name[60];
	 int loc,found=0;
	 system ("cls");
	 cout<<endl;
	 cout<<"\t \t SEARCHING BY BOOK NAME.....\n"<<endl;
	 cout<<"\t \t KINDLY ENTER THE NAME OF BOOK, YOU WANNA SEARCH.."<<endl;
	 gets(name);
	 for (int i=0; i<n; i++)
	 {
	 	if(strcmp(books[i].bookname,name)==0)  //strcmp is used to compare the string arguments
			{
				loc=i;
				found = 1;
		cout<< "Record Found!"<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
		cout<<"\t Book ID"<<"\t Book Name"<<"\t Author Name "<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
		cout<<"\t"<<books[loc].bookid<<"\t"<<books[loc].bookname<<"\t"<<books[loc].authorname<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;	
		}}
		
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
	 	getch();
	 	   
	 }

void sbyid(void)
{
	char ids[6];
	int loc,id,found=0;
	system("cls");
	cout<<endl;
	cout<<"\t \t SEARCHING BY ID OF BOOK"<<endl;
	cout<<"\t \t KINDLY ENTER THE ID OF BOOK, YOU WANNA SEARCH.."<<endl;
	gets(ids); 
	for (int i=0; i<n; i++)
	{ if (books[i].bookid==id)
	{
		loc=i;
		found=1;
		cout<< "\t \t Record Found!"<<endl;
    	cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
		cout<<"\t Book ID\""<<"\t Book Name"<<"\t Author Name "<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
		cout<<"\t"<<books[loc].bookid<<"\t"<<books[loc].bookname<<"\t"<<books[loc].authorname<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;	
		}}
		
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
	 	getch();
	 }
	 void sbyauthor(void)
	 {
	 	char author[60];
	 	int loc,found=0;
	 	system ("cls");
	 	cout<<"\t \t SEARCHING BY AUTHOR OF BOOK"<<endl;
	 	cout<<"\t \t KINDLY ENTER THE NAME OF AUTHOR:"<<endl;
	 	gets(author);
	 for (int i=0; i<n; i++)
	 {
	 	if (strcmp(books[i].authorname,author)==0)
	 	{ loc=i;
	 	found=1;
	 	cout<<"\t \t RECORD FOUND"<<endl;
	 	cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
	 	cout<<"\t Book ID\""<<"\t Book Name"<<"\t Author Name "<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
        cout<<"\t"<<books[loc].bookid<<"\t"<<books[loc].bookname<<"\t"<<books[loc].authorname<<endl;
        cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;	
		 }}
	
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
	 	getch();
	 }
	
	void del(void)
	{
		system ("cls");
		cout<<"\t \t [IN DELETE FUNCTION]"<<endl;
		cout<<"\t \t CHOOSE THE OPTION GIVEN BELOW"<<endl;
		cout<<"\t \t -----------------------------"<<endl;
	    cout<<"\t \t (N) \t DELETE BY BOOK NAME:"<<endl;
		cout<<"\t \t (A) \t DELETE BY AUTHOR NAME:"<<endl;
		cout<<"\t \t (C) \t DELETE BY BOOK CODE:"<<endl;
		
switch (getch())
{
    case 'n': dbyname();break;
	case 'a':dbyauthor();break;
	case 'c':dbyid();break;
	getch();
}}

void dbyname(void)
{
	char name[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"\t \t DELETING BY NAME OF BOOK"<<endl;
		cout<<"\t \t ENTER THE NAME OF BOOK YOU WANT TO DELETE:"<<endl;
		gets(name);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookname,name)==0)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"RECORD NOT FOUND"<<endl;
		cout<<"PRESS ENTER TO GO TO MAIN MENU.....";
		getch();
	}
	
	void dbyauthor(void)
	{
		char author[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"\t \t DELETING BY AUTHOR OF BOOK"<<endl;
		cout<<"\t \t  ENTER THE AUTHOR OF BOOK YOU WANT TO DELETE:"<<endl;
		gets(author);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].authorname,author)==0)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"RECORD NOT FOUND"<<endl;
		cout<<"PRESS ENTER TO GO TO MAIN MENU.....";
		getch();
	}	


void dbyid(void)
	{
		char ids[6];
		int id, loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"\t \t DELETING BY ID OF BOOK"<<endl;
		cout<<"\t \t ENTER THE ID OF BOOK YOU WANT TO DELETE"<<endl;
		gets(ids);
		id=atoi(ids);
		for(int i = 0;i<n;i++)
		{
			if(books[i].bookid==id)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
		cout<<"RECORD NOT FOUND"<<endl;
		cout<<"PRESS ENTER TO GO TO MAIN MENU.....";
			getch();
	}

void update(void)
{
	system ("cls");
		cout<<"\t \t [IN UPDATE FUNCTION]"<<endl;
		cout<<"\t \t CHOOSE THE OPTION GIVEN BELOW"<<endl;
		cout<<"\t \t -----------------------------"<<endl;
		cout<<"\t \t (N) \t UPDATE BOOK NAME:"<<endl;
		cout<<"\t \t (A) \t UPDATE AUTHOR NAME:"<<endl;
		cout<<"\t \t (C) \t UPDATE BOOK CODE:"<<endl;

switch (getch())
{
    case 'n': ubyname();break;
	case 'a':ubyauthor();break;
	case 'c':ubyid();break;
	getch();
	}
	}
	void ubyname(void)
	{
		char name[60];
		int loc,found=0;
		system ("cls");
		cout<<endl;
		cout<<"\t \t UPDATING THE NAME OF BOOK"<<endl;
		cout<<"\t \t ENTER THE NAME OF BOOK YOU WANT TO UPDATE"<<endl;
		gets(name);
		for (int i=0; i<n; i++)
		{
		if (strcmp(books[i].bookname,name)==0)
		{
			loc=i;
			found=1;
			char ch; char id1[6];
			system ("cls");
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
	 	cout<<"\"Book ID\""<<"\"Book Name\""<<"\"Author Name\""<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
        cout<<books[loc].bookid<<books[loc].bookname<<books[loc].authorname<<endl;
        cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;	
		cout<<endl;
		cout<<"\t \t UPDATING THE NAME OF BOOK....."<<endl;
		cout<<"\t \t ENTER THE NAME OF NEW BOOK"<<endl;
		gets(books[loc].bookname);
		cout<<"\t \t MODIFIED!!!"<<endl;
		}
	if(found == 0)
		cout<<"RECORD NOT FOUND"<<endl;
		cout<<"PRESS ENTER TO GO TO MAIN MENU.....";
			getch();	
		
		}
	}

void ubyauthor(void){
	char authorname[60];
	int loc,found=0;
	system ("cls");
	cout<<endl;
	cout<<"\t \t UPDATING THE AUTHORNAME OF BOOK....."<<endl;
	cout<<"\t \t ENTER THE AUTHOR NAME OF BOOK YOU WANT TO UPDATE"<<endl;
	gets(authorname);
	for (int i=0; i<n; i++)
	{if (strcmp(books[i].authorname,authorname)==0)
		{
			loc=i;
			found=1;
			char ch; char id1[6];
			system ("cls");
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
	 	cout<<"\"Book ID\""<<"\"Book Name\""<<"\"Author Name\""<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
        cout<<books[loc].bookid<<books[loc].bookname<<books[loc].authorname<<endl;
        cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;	
		cout<<endl;
		cout<<"\t \t UPDATING THE NAME OF BOOK"<<endl;
		cout<<"\t \t ENTER THE NAME OF NEW BOOK"<<endl;
		gets(books[loc].bookname);
		cout<<"\t \t MODIFIED!!!"<<endl;
		}}
	if(found == 0)
		cout<<"RECORD NOT FOUND"<<endl;
		cout<<"PRESS ENTER TO GO TO MAIN MENU.....";
			getch();	
			}

void ubyid(void)
{
	char ids[6];
	int id,loc,found=0;
	system("cls");
	cout<<endl;
	cout<<"\t \t UPDATING THE ID OF BOOK"<<endl;
	cout<<"\t \t ENTER THE ID OF NEW BOOK"<<endl;
	gets(ids);
	id=atoi(ids);
	for (int i=0; i<n; i++)
	{
        if (books[i].bookid==id)
		{
			loc=i;
			found=1;
			char ch; char id1[6];
			system ("cls");
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
	 	cout<<"\"Book ID\""<<"\"Book Name\""<<"\"Author Name\""<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;
        cout<<books[loc].bookid<<books[loc].bookname<<books[loc].authorname<<endl;
        cout<<"__________"<<"__________________________________________________"<<"______________________________"<<endl;	
		cout<<endl;
		cout<<"\t \t UPDATING THE ID OF BOOK"<<endl;
		cout<<"\t \t ENTER THE ID OF NEW BOOK"<<endl;
		gets(id1);
		books[loc].bookid=atoi(id1);
		cout<<"\t \t MODIFIED!!!"<<endl;
		}}
	  if(found == 0)
		cout<<"RECORD NOT FOUND"<<endl;
		cout<<"PRESS ENTER TO GO TO MAIN MENU.....";
			getch();	
			}

int main()
{
	while(1)
	{
		system("cls");
	cout<<"\t \t \t   ........... "<<endl;
	cout<<"\t \t \t || MAIN MENU ||"<<endl;
	cout<<"\t \t \t   ........... "<<endl;
	cout<<"\t \t CHOOSE ANY OPTION GIVEN BELOW:"<<endl;
	cout<<"\t \t -----------------------------"<<endl;
	cout<<"\t \t (A)\t ADD BOOK"<<endl;
	cout<<"\t \t (B)\t SEARCH BOOK"<<endl;
	cout<<"\t \t (C)\t DISPLAY BOOK"<<endl;
	cout<<"\t \t (D)\t DELETE BOOK"<<endl;
	cout<<"\t \t (E)\t UPDATE BOOK INFORMATION"<<endl;
	cout<<"\t \t (F)\t EXIT"<<endl;

	switch(getch())
{ 
	case 'A':
	case 'a':add();break;
	case 'b':
	case 'B':search();break;
	case 'c':
	case 'C':display();break;
	case 'd':
	case 'D':del();break;
	case 'e':
	case 'E':update();break;
	case 'f':
	case 'F':exit(0);break;
	
    getch();
	}	
	
}
getch();
}

