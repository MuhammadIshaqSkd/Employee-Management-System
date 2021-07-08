#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
using namespace std;
struct Employee
	{
		Employee *nna;
		char name[23],fname[23],designation[23];
		int id,bps,salary,age;
		void set_rec()
		{
			cout<<"Enter Name"<<endl;
			cin>>name;
			cout<<"Enter Father Name"<<endl;
			cin>>fname;
			char p[6]={'a','d','m','i','n'},p1[5]={'t','e','c','h'},p2[12]={'m','a','n','a','g','e','r','i','a','l'},p3[7]={'o','t','h','e','r','s'};
			char p4[6]={'A','d','m','i','n'},p5[5]={'T','e','c','h'},p6[12]={'M','a','n','a','g','e','r','i','a','l'},p7[7]={'O','t','h','e','r','s'};
			cout<<"Enter Designation \n\tAdmin \n\t Tech\n\t Managerial\n\t Others"<<endl;
			do
			{
				cin>>designation;
				if(strcmp(designation,p)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p1)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p2)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
					else if(strcmp(designation,p3)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p4)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p5)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p6)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p7)==0)
				{
					cout<<"designation is Added"<<endl;
					break;
				}
				else
				cout<<"You Entered wrong Designation"<<endl;   		
			}
			while(true);
			cout<<"\n\t\tEnter ID from 7777 to 9999"<<endl;
			cin>>id;
			while(id<=7777 || id>=9999)
			{
				cout<<"\n\t\tYou Entered wrong id\n\t\t Id Must be from 7777 to 9999 Enter Again"<<endl;
			    cin>>id;
			}
			cout<<"\n\t\tEnter BPS from 1 to 22"<<endl;
			cin>>bps;
			while(bps<=1 || bps>=22)
			{
				cout<<"\n\t\tYou Entered wrong Bps \n\t\tBPS Must be between 1 to 22 Enter Agian"<<endl;
			    cin>>bps;
			}
			int s1,s2;
			s1=bps*10000;    
			s2=s1*0.45;    //45%
			salary=s1+s2; //bps*10000+45%
			cout<<"Enter Age from 18 to 60"<<endl;
			cin>>age;
			while(age<=18 && age>=60)
			{
				cout<<"\n\t\tYou Entered wrong Age \n\t\tBPS Must be between 18 to 60 Enter Agian"<<endl;
			    cin>>age;
			}		
		}
		void show_rec()        
		{
			cout<<"......................................................"<<endl;
			cout<<"\tname\t\t\t"<<name<<endl;			
			cout<<"\tFather name\t\t"<<fname<<endl;
			cout<<"\tDesignation\t\t"<<designation<<endl;
			cout<<"\tID\t\t\t"<<id<<endl;
			cout<<"\tBPS\t\t\t"<<bps<<endl;
			cout<<"\tSalary\t\t\t"<<salary<<endl;
			cout<<"\tAge\t\t\t"<<age<<endl;	
		}
		void stor_object_data()	// Write data into File
		{
			fstream write_data;
		    write_data.open("d:\\Records.txt",ios::app|ios::binary);
			set_rec();
			write_data.write((char *)this, sizeof(*this));
			write_data.close();
		} 
		void read_object_data()		// Read Data from File
		{
			system("cls");
			fstream read_data;		
			read_data.open("d:\\Records.txt",ios::app|ios::in|ios::out|ios::binary);
			if(!read_data)  // If file is Not Found
			cout<<"\nFile Not Found."<<endl;
			else
			{
		   	    read_data.read((char *)this, sizeof(*this));
		    	while(!read_data.eof())
				{
					show_rec();	
					read_data.read((char *)this, sizeof(*this));
				}
				read_data.close();
			}
		}
		void search_records()
		{
		   system("cls");
		   fstream search_data;
		   search_data.open("d:\\Records.txt",ios::in |ios::binary);
		   int x;
	   	   cout<<"\n\t\tPress \n\t\t1 for Search by emp_id \n\t\t2 for Search by Name \n\t\t3 for Search by age \n\t\t4 for Search Eldest Employee ";
	   	   cout<<"\n\t\t5 for Search Youngest Employee \n\t\t6 for Search by BPS \n\t\t7 for Search by designation"<<endl;
	   	   cin>>x;
	   	   switch (x)
	   	{
	   		 case 1:
		   	 {
			   		system("cls");
			   		int Search_id;
			   		cout<<"\t\t\tEnter Id To Be Search:"<<endl;
			     	cin>>Search_id;
		    	  while(search_data.read((char*)this,sizeof(*this)))
		    	   {
		    	 	 if(id==Search_id)
		    	 	   {
		    	 		  show_rec();
		    	 		  break;
					  }
				  }
				 if(id!=Search_id)
				  {
				 	 cout<<"\n\t\tNot Found"<<endl;
			    	}
		     		search_data.close();
				}break;
				case 2:	
				{
				 system("cls");	   	   			   
		   	 	 char sname[23];
		   	 	 cout<<"\n\t\tEnter Name To Be Search:"<<endl;
			 	 cin>>sname;
			 	 while(search_data.read((char*)this,sizeof(*this)))
					{			
						if(strcmp(name,sname)==0)
						{
							show_rec();
							break;
						}
					}
					if(strcmp(name,sname)!=0)
					{
						cout<<"\n\t\t\tNOT FOUND"<<endl;
					}			 
					search_data.close();	
				}break;
				case 3:
				{
				 system("cls");
				 int Search_age;
			   	 cout<<"\n\t\t\tEnter Age To Be Search:"<<endl;
				 cin>>Search_age;
				 while(search_data.read((char*)this,sizeof(*this)))
				    {
				     	if(age==Search_age)
				     	{
				     	 show_rec();
				     	 break;
						}   	
					}
					 if(age!=Search_age)
				   {
					  cout<<"\n\t\t\tNot Found Age"<<endl;
					}		
			    	search_data.close();	
			    }break;
				case 4:
				{
					system("cls");
					int y;
					y=18;
					while(search_data.read((char*)this,sizeof(*this)))
					{						
						if(age>y)
						{
					    	y=age;
						}	
					}
				 search_data.close();
				 while(search_data.read((char*)this,sizeof(*this)))
				  {					
					 if(age==y)
					 	{	
							system("cls");
						    cout<<"\n\t\tEldest Employee"<<endl;
							show_rec();
							break;	
						}
					}
				search_data.close();
				}break;
				case 5:
				{
				 system("cls");
				 int y;
			     y=60;
			     while(search_data.read((char*)this,sizeof(*this)))
				  {					
						if(age<y)
						{
							y=age;			
						}
			    	}
			    	search_data.close();
			    	while(search_data.read((char*)this,sizeof(*this)))
			    	{					
						if(age==y)
						{		
						    system("cls");
							cout<<"\n\t\tYoungest Employee"<<endl;
							show_rec();
							break;	
						}
					}
				}break;
				case 6:
				{
				 system("cls");
		   	 	 int b;
		   	 	 cout<<"\n\t\tEnter BPS To Be Search:"<<endl;
			 	 cin>>b;
			 	 while(search_data.read((char*)this,sizeof(*this)))
		  		   {
				  		if(bps==b)
				  		{
				  	     cout<<"\n\t\tBPS is found"<<endl;
				  		 show_rec();
				  		 break;
					   }
				   }
				  if(bps!=b)
				   {
				  	  cout<<"\n\t\t\tNot Found"<<endl;
				   }			    
				  search_data.close();
				}break;
				case 7:
				{
				   system("cls");
				   char m[23];
			 	   cout<<"Enter Designation That you Want To search"<<endl;
			 	   cin>>m;
				 	while(search_data.read((char*)this,sizeof(*this)))
					{
						if(strcmp(designation,m)==0)
						{
							show_rec();
						}
					}
					if(strcmp(designation,m)!=0)
					{
						cout<<"Designation is NOT FOUND"<<endl;
					}
			     search_data.close();
				}break;	 		   				
			}
		}
		void update_data()
		{
			system("cls");
			fstream f,d;
			int sd,n=0;
			cout<<"Enter Id that you want to update"<<endl;
			cin>>sd;
			f.open("d:\\Records.txt ",ios::in|ios::binary |ios::in);
			while(f.read((char*)this,sizeof(*this)))
			{	if(sd==id)
				{
					show_rec();
					d.open("Check.txt",ios::binary|ios::in|ios::out|ios::app); // New File Created
					update_designation();
					d.write((char*)this,sizeof(*this));
					cout<<"Designation is updated"<<endl;
					d.close();
				}				
			   else if(sd!=id)
			   {  	
			     n=1;
			     d.open("d:\\Check.txt",ios::binary|ios::in|ios::out|ios::app);
			     d.write((char*)this,sizeof(*this));
				 d.close();
			   }
			}
			f.close();	 	
			if(n==1)
			{
		    	remove("d:\\Records.txt");
		    	rename("d:\\Check.txt","d:\\Records.txt");
	        }
		}
		void update_designation()
		{
			char p[6]={'a','d','m','i','n'},p1[5]={'t','e','c','h'},p2[12]={'m','a','n','a','g','e','r','i','a','l'},p3[7]={'o','t','h','e','r','s'};
			char p4[6]={'A','d','m','i','n'},p5[5]={'T','e','c','h'},p6[12]={'M','a','n','a','g','e','r','i','a','l'},p7[7]={'O','t','h','e','r','s'};
			cout<<"\n\n\tEnter Designation \n\t\tAdmin \n\t Tech\n\t Managerial\n\t Others"<<endl;
			do
			{
				cin>>designation;
				if(strcmp(designation,p)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p1)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p2)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
					else if(strcmp(designation,p3)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p4)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p5)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p6)==0)
				{
					cout<<"Designation is Added"<<endl;
					break;
				}
				else if(strcmp(designation,p7)==0)
				{
					cout<<"designation is Added"<<endl;
					break;
				}
				else
				cout<<"You Entered wrong Designation"<<endl;   		
			}
			while(true);
		}
		void delete_rec()
		{
			fstream f,d;
			int r;
			cout<<"Enter Empoly ID"<<endl;
				cin>>r;
	        	f.open("d:\\Records.txt",ios::in|ios::binary|ios::out);
			
				while(f.read((char*)this,sizeof(*this)))
				{
					if(r==id)
					{
					  show_rec();
					  cout<<"\n \t This record will delected"<<endl;
				    }	
	     	      if(r!=id)
					{  	d.open("d:\\check.txt",ios::binary|ios::in|ios::out|ios::app);
						d.write((char*)this,sizeof(*this));
						d.close();
					}
			 	}
		f.close();	 	
    	remove("d:\\Records.txt");
    	rename("d:\\check.txt","d:\\Records.txt");
			}		
	};
	int main()
	{
		Employee e;
		int x;
		char c,t;
		do
		{ 
		  system("cls");
		  cout<<"\n\t\t\tWelcome To My Employee Software:"<<endl;  //Main Menu Of Pragram
		  cout<<"\n\t\t\tPress \n\t\t\t1 for Insert New Employee Record \n\t\t\t2 for Show all Records  "<<endl;
		  cout<<"\t\t\t3 for Update Employee Record \n\t\t\t4 for Search Existing Record \n\t\t\t5 for Delete A Record"<<endl;
	     cin>>x;
	     switch(x)
		    {
		     case 1:
			  {
			 	 Employee *nna;
				 Employee *current,*first,*last;
				 current=new Employee;
	    		 current->stor_object_data();
				 current->nna=NULL;
				 first=last=current;
				 int choice;
			 
			 do
			 {
				cout<<"ENTER 1 to add more record OR press any other numrice key to exit "<<endl;
			    cin>>choice;
			    if(choice!=1)
			    break;
			 	current=new Employee;
			 	current->stor_object_data();
			 	last->nna=current;
			 	last=current;
			 }
			 while(true);
				}break;
				case 2:
				{
					e.read_object_data();
				}break;
				case 3:
				{
				  do
					{
				  	  system("cls");
					  e.update_data();
					  cout<<"\n\t\tWould You Like To Updata Any Record \nPress Y/N And Then Enter."<<endl;	
					  cin>>c;				
					}
					while(c=='y'||c=='Y');						
				}break;
				case 4:
				{
				 system("cls");
	             e.search_records();	
				}break;
				case 5:
				{
				e.delete_rec();	
					}break;	
			}
			cout<<"\n\tEnter Y for Stay In Application And N For Exit"<<endl;
			cin>>t;
		}while(t=='y'|| t=='Y');
		system("cls");
		cout<<"\n\n\t\tThanks For Using My Application"<<endl;
		system ("pause");
		return 0;		 
	}
