#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<limits.h>

int asd=0;
class Insurance

{

 char pancard[13];
 char Name[30];
 char Gender;
 char BankName[40];
 char AccountNo[12];
 char PhoneNo[10];
 char Address[10];
 int Policy;


 int f ;
public:

 void getData();
 void showData();
 char * getAdmno()
 {

 return pancard;

 }

void project();
void addData();
void displayData();
void deleteData();
void getTrash();

};



int main()
{
char c,pd[5];
do {
	cout<<"\n\n\n"<<"admin login"<<endl;
	cout<<"password";
	cin>>pd;
	if(strcmp(pd,"*****")==0)
	{
	cout<<"Admin verified";
	 break;
	 }
	 else
	 {
	 cout <<"admin not verified"<<endl;

	 cout<<"wish to login again"<<endl;
	 cout<<"y\n"<<endl;
	 cin>>c;
	 }
	 }
	 while(c=='y');

    Insurance s;
    s.project();

 return 0;
}



void Insurance::project()
{

 clrscr();
 int ch;

  do

 {

  system("cls");
  cout<<"---------------------------------------------------------------\n\n";

  cout << "*************National Insurance Corporation******************\n\n";

  cout << "1. Buy Insurance                                              |\n\n";

  cout << "2. Display Insurance                                          |\n\n";

  cout << "3. Delete Insurance                                           |\n\n";

  cout << "4. Get Deleted Records                                        |\n\n";

  cout << "0. Exit                                                       |\n\n";
  cout << "Enter your choice:                                            |\n\n";

  cout<<"---------------------------------------------------------------"<<endl<<endl;

  cin >> ch;

  system("cls");

  switch (ch)

  {
  case 1:clrscr(); addData();
       break;

  case 2:clrscr(); displayData();
       break;

  case 3:clrscr(); deleteData();
       break;

  case 4:clrscr(); getTrash();
       break;
	      default : cout<<"\a";
	      }
	      cin.ignore();
	      cin.get();


 } while (ch!='4');


}

void Insurance::getData()
{
    p:
    char ans;
    Insurance s;
    int InsuP;
    asd++;
 cout << "-------------------------------------------------------------------\n\n";


 cout << "Select an insurance policy:                                        |" << endl<< endl;

 cout << "1. Health Insurance Policy. Press 1 for more info:                 |"<< endl<< endl;

 cout << "2. Car Insursnce Policy. Press 2 for more info:                    |"<< endl<< endl;

 cout << "3. Life Insurance Policy. Press 3 for more info:                   |" << endl<< endl;

 cout << "4. Home Insurance Policy. Press 4 for more info:                   |" << endl<< endl;

 cout << "5. Travel Insurance Policy. Press 5 for more info:                 |" << endl<< endl;

 cout << "6. GO BACK TO MAIN MENU                                            |" <<endl<< endl;

 cout << "--------------------------------------------------------------------" <<endl<<endl;

 cin >> InsuP;
 cout<<endl<<"Policy is:"<<endl;

 switch (InsuP)

  {

  case 1: cout<<"Health Insurance Policy cover upto Rs 4 Lakhs with an yealy installment of 10,000 for 10 yearly."<<endl<<endl;
       break;

  case 2: cout<<"Car Insursnce Policy cover upto Rs 2 Lakhs with an yearly installment of 5% of   car's value "<<endl<<endl;
       break;

  case 3: cout<<"Life Insurance Policy cover upto Rs 10 Lakhs with an yearly installment of 10,000 for 10 year "<<endl<<endl;
       break;

  case 4: cout<<"Home Insurance Policy cover upto Rs 5 Lakhs with an yearly installment of 10,000 for 10 years"<<endl<<endl;
     break;

  case 5: cout<<"Travel Insurance Policy cover upto Rs 50 thousands with a single time investment of 15,000"<<endl<<endl;
     break;
  case 6:exit(0);project();//exit(0);
     break;

  default: cout<< "<--Invalid Key Typed-->"<<endl;
     break;
  }

  cout<<"PRESS y TO PROCEED FOR PURCHASING OUR INSURANCE POLICY"<<endl<<endl;
  cin>>ans;
  while(ans=='Y')

  cout << "\n\n***Enter Insurance Data*\n";

 do
   {
    cout<<"\nEnter The pancard :";
    cin>> pancard;
    if(strlen(pancard)==13)
    {
	cout<<"verified"<<endl;
	f=1;
    }
    else
    {cout<<"not verified"<<endl;
    f=0;
    }

    }while(f==0);

    do {
  cout<<"\n\nEnter the name:";
   cin.ignore();
   cin .getline(Name,30);
   f=0;
   for(int i=0;Name[i]!=NULL;i++)
   {
   if(!isalpha(Name[i]))
   {
   f=1;
   break;
   }
   else
   {
   f=0;
   }
   }
   }
   while(f==1);




   char g;
   int t;
   t=1;
   do
   {
   cout<<"enter your Gender";
   cin>>g;

   if(g=='m'||g=='f')
   {Gender=g;
   t=1;}
   else
   {cout<<"invalid input";
   t=0;}}while(t==0);

 do {
  cout<<"\n\nEnter the bank name:";
   cin.ignore();
   cin .getline(BankName,50);
   f=0;
   for(int i=0;BankName[i]!=NULL;i++)
   {
   if(!isalpha(BankName[i]))
   {
   f=1;
   break;
   }
   else
   {
   f=0;
   }
   }
   }
   while(f==1);

    do
   {
    cout<<"\nEnter Bank Account No. :";
    cin>>AccountNo;
    if(strlen(AccountNo)==12)
    {
	cout<<"verified"<<endl;
	f=1;
    }
    else
    {cout<<"not verified"<<endl;
    f=0;
    }
    }while(f==0);

   do
   {
    cout<<"\nEnter The mobile No. :";
    cin>>PhoneNo;
    if(strlen(PhoneNo)==10)
    {
	cout<<"verified"<<endl;
	f=1;
    }
    else
    {cout<<"not verified"<<endl;
    f=0;
    }
    }while(f==0);
    do
   {
    cout<<"\nEnter The Address :";
    cin>> Address;
    if(strlen(Address)==10)
    {
	cout<<"verified"<<endl;
	f=1;
    }
    else
    {cout<<"not verified"<<endl;
    f=0;
    }

    }while(f==0);
    cout<<"THANKS FOR PURCHASING HOPE YOU VISIT AGAIN :/n/n ";



  Policy=asd;
  cout<<Policy;
  cout << endl;


 project();

 Insurance INS;
  INS.project();

     goto p;

 }




void Insurance::showData()

{ cout<<"\n\n***Insurance Details*\n";

 cout<<"pancard "<<pancard<<endl;

 cout<<"Full Name: "<<Name << endl;

 cout << "Gender: " << Gender << endl;

 cout << "Bank Name: " << BankName << endl;

 cout << "Bank Account Number: " << AccountNo << endl;

 cout << "Phone Number: " << PhoneNo << endl;

 cout << "Address: " << Address << endl;

 cout << "Insurance Policy Bought: " << Policy << endl;

 cout << endl;

}

void Insurance :: addData()
{
     Insurance s;
      fstream outFile;
    outFile.open("Ins.txt",ios::binary|ios::app|ios::in);

    outFile.write((char *)&s, sizeof(Insurance));
   s.getData();
    outFile.close();


 cout << "\n\n** Thank you for Buying Insurance **\n"<<endl<<endl;
 s.project();
}

void Insurance::displayData()
{
    Insurance INS;
 ifstream fin;

 fin.open("Ins.txt", ios::in | ios::binary);

 while (fin.read((char*)&INS, sizeof(INS)))
 {

  INS.showData();

 }

 fin.close();

 cout << "\n\n**All Records of Insurance*\n";

}

void Insurance:: deleteData()
{
    Insurance s;
 char n[13];int flag = 0;

 ifstream fin;

 ofstream fout, tout;

 fin.open("Ins.txt", ios::in | ios::binary);

 fout.open("Temp.txt", ios::out | ios::app | ios::binary);

 tout.open("Trash.txt", ios::out | ios::app | ios::binary);

 cout << "Enter pancard no : ";

 cin >> n;



 while (fin.read((char*)&s, sizeof(s)))
 {
  if (n == s.getAdmno())
  {

   cout << "This Record " << n << " has been sent to Trash:\n";

   s.showData();

   tout.write((char*)&s, sizeof(s));

   flag++;

  }

  else
  {

   fout.write((char*)&s, sizeof(s));

  }

 }

 fout.close();

 tout.close();

 fin.close();

 if (flag == 0)
  cout << "   " << n << "No Record found***\n\n";

 remove("Ins.txt");

 rename("Temp.txt", "Ins.txt");

}

void Insurance:: getTrash()

{
    Insurance s;
 ifstream fin;

 fin.open("Trash.txt", ios::in | ios::binary);

 while (fin.read((char*)&s, sizeof(s)))
 {

  s.showData();

 }

 fin.close();

 cout << "\n\n***Data Reading from Trash File Successfully Done*\n";

}
