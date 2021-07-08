#include<iostream>
#include<cstring>

using namespace std;
class Employee
	{
		public:
		string name,fname,job_type;
		int id,d,m,y,bps,age;
		Employee():id(0),bps(0)
		{
			//zero argument constructor
		}
		Employee(int t1,int t2):id(t1),bps(t2)
		{
			// overload constructor 
		}
		void setRecord()
		{
			cout<<"\tEnter Name"<<endl;
			cin>>name;
			cout<<"\tEnter Father Name"<<endl;
			cin>>fname;
			int x;
			cout<<"\tChoice Job Type \n\t1)Private \n\t2)Public \n\t3)Autonomous"<<endl;			
 			do
 			{
 				cin>>x;
 				if(x==1)
 			   {
 				 job_type="Private";
 				 break;
				}
				if(x==2)
				{
				 job_type="Public";	
				 break;	
				}
				if(x==3)
				{
					job_type="Autonomous";
					break;
				}
				else
				cout<<"\n\t\aYou Select Wrong Option try Again"<<endl;
			}
			while(true);
			
			cout<<"\tEnter ID"<<endl;
			cin>>id;
			cout<<"\tEnter Date Of Birth"<<endl;
			cout<<"Enter Day 1-30"<<endl;
			cin>>d;
			
			while(d<1 || d>30)
			{
				cout<<"\n\t\t\aYou Entered Invalid Day \n\t Day Must be between 1 to 30 Enter Agian"<<endl;
			    cin>>d;
			}
			cout<<"Enter month 1-12"<<endl;
			cin>>m;
			while(m<1 || m>12)
			{
				cout<<"\n\t\t\aYou Entered Invalid Month \n\t Month Must be between 1 to 12 Enter Agian"<<endl;
			    cin>>m;
			}
			cout<<"Enter year 1970-2010"<<endl;
			cin>>y;
			while(y<1969 || y>2010)
			{
				cout<<"\n\t\t\aYou Entered Invalid Year \n\t Day Must be between 1970 to 2010 Enter Agian"<<endl;
			    cin>>y;
			}
			age=2019-y;
			cout<<"\tEnter  BPS from 1 to 22"<<endl;
			cin>>bps;
			while(bps<1 || bps>22)
			{
				cout<<"\n\t\t\aYou Entered wrong Bps \n\t\tBPS Must be between 1 to 22 Enter Agian"<<endl;
			    cin>>bps;
			}
		}
		void showRecord()
		{
			cout<<"\n*****************Employee Records***********************************"<<endl;
			cout<<" Name  is\t\t"<<name<<endl;
			cout<<" Father Name is\t\t"<<fname<<endl;
			cout<<" Job Type is\t\t"<<job_type<<endl;
			cout<<" ID is\t\t\t"<<id<<endl;
			cout<<"Date Of Birth =\t\t"<<d<<"/"<<m<<"/"<<y<<endl;
			cout<<" BPS is\t\t\t"<<bps<<endl;
		}
	};
	class Teacher: virtual public Employee
	{
		public :
		string Education,Teaching_level,Subject;
		Teacher()
		{
			//Default Constructor		
		}
	 	void setRecord()
	    {
			int v;
			cout<<"\tChoice The Education \n\t1)Bachelor \n\t2)Masters \n\t3)PhD"<<endl;
			do
			{
				cin>>v;
				if(v==1)
				{
					Education="Bacherlor";
					break;
				}
				if(v==2)
				{
				Education="Masters";
				break;	
				}
				if(v==3)
				{
					Education="PhD";
					break;
				}
				else
				cout<<"\n\t\aYou Select Wrong option Try Again"<<endl;
			}
			while(true);
			int c;
			cout<<"\tChoice Teaching level \n\t1) school \n\t2) College \n\t3) University"<<endl;
			do
			{
				cin>>c;
				if(c==1)
				{
					Teaching_level="School";
					break;
				}
				if(c==2)
				{
				Teaching_level="College";
				break;	
				}
				if(c==3)
				{
					Teaching_level="University";
					break;
				}
				else
				cout<<"\n\t\aYou Select Wrong option Try Again"<<endl;
			}while(true);
			int c2;
			cout<<"\tChoice Y the subject of teacher \n\t1) Math \n\t2) Chemistry \n\t3) Physics \n\t 4) Cs"<<endl;
			do
			{
				cin>>c2;
				if(c2==1)
				{
					Subject="Math";
					break;
				}
				if(c2==2)
				{
				Subject="Chemistry";
				break;	
				}
				if(c2=3)
				{
					Subject="Physics";
					break;
				}
				if(c2==4)
				{
				Subject="Cs";
				break;	
				}
				else
				cout<<"\n\t\aYou Select Wrong option Try Again"<<endl;
			}
			while(true);
	   }
	  void  showRecord()
	   {
			cout<<" Education is\t\t"<<Education<<endl;
			cout<<" Teaching Level is\t"<<Teaching_level<<endl;
			cout<<" Subject is\t\t"<<Subject<<endl;
	   }
	   void update()
	   {
	   	    int h;
			cout<<"What you Want to update \n\t1) Job Level \n\t2) Bps \n\t3) Education \n\t 4) Teaching Level"<<endl;
			cin>>h;
			switch(h)
			{
				case 1:
				{
				
					int h2;
					cout<<"\tChoice  Job Type \n\t1)Private \n\t2)Public \n\t3)Autonomous"<<endl;			
				 	do
				 	{
				 		cin>>h2;
				 		if(h2==1)
				 	   {
				 			job_type="Private";
				 			break;
						}
						if(h2==2)
						{
							job_type="Public";	
						    break;	
						}
						if(h2==3)
						{
							job_type="Autonomous";
							break;
						}
						else
							cout<<"\n\t\aYou Select Wrong Option try Again"<<endl;
					}
					while(true);
				}break;
				case 2:
				{
					cout<<"Enter  BPS from 1 to 22"<<endl;
					cin>>bps;
					while(bps<1 || bps>22)
					{
						cout<<"\n\t\t\aYou Entered wrong Bps \n\t\tBPS Must be between 1 to 22 Enter Agian"<<endl;
						cin>>bps;
					}
				}break;	
				case 3:
				{
					int y1;
					cout<<"\tChoice The Education \n\t1)Bachelor \n\t2)Masters \n\t3)PhD"<<endl;
					do
					{
						cin>>y1;
						if(y1==1)
						{
							Education="Bacherlor";
							break;
						}
						if(y1==2)
						{
							Education="Masters";
							break;	
						}
						if(y1==3)
						{
							Education="PhD";
							break;
						}
						else
							cout<<"\n\t\aYou Select Wrong option Try Again"<<endl;
					}while(true);
				}break;
				case 4:
				{
				   	int h3;
				   	cout<<"\tChoice Teaching level \n\t1) school \n\t2) College \n\t3) University"<<endl;
					do
					{
						cin>>h3;
						if(h3==1)
						{
							Teaching_level="School";
							break;
						}
						if(h3==2)
						{
							Teaching_level="College";
							break;	
						}
						if(h3==3)
						{
							Teaching_level="University";
							break;
						}
							else
							cout<<"\n\t\aYou Select Wrong option Try Again"<<endl;
					}
					while(true);
				}
			}
	   }
	};
	class Doctor : virtual public Employee
	{
		public:
		string Doctor_type,Specialization,Job_level;
		Doctor()
		{
		}
		void setRecord()
		{
			int d4;
			cout<<"Choice the Doctor type \n\t1 mbbs \n\t2) bds \n\t3) vetnery) "<<endl;
			do
			{
				cin>>d4;
				if(d4==1)
				{
					Doctor_type="Mbbs";
					break;
				}
				if(d4==2)
				{
					Doctor_type="bds";
					break;
				}
				if(d4==3)
				{
					Doctor_type="Vetnery";
					break;
				}
				else
				cout<<"\n\t\aYou Select Wrong Option Try Again"<<endl;
			}
			while(true);
			int d2;
			cout<<"Choice The Specialization \n\t1 ent \n\t2) heart \n\t3) stomach \n\t4) gyne "<<endl;
			do
			{
				cin>>d2;
				if(d2==1)
				{
					Specialization="ent";
					break;
				}
				if(d2==2)
				{
					Specialization="heart";
					break;
				}
				if(d2==3)
				{
					Specialization="stomach";
					break;
				}
				if(d2==4)
				{
					Specialization="gyne";
					break;
				}
				else
				cout<<"\n\t\aYou Select Wrong Option Try Again"<<endl;
			}
			while(true);
			int d3;
			cout<<"Choice the Job level \n\t1) house job \n\t2) medical officer \n\t3) senior medical officer"<<endl;
			do
			{
				cin>>d3;
				if(d3==1)
				{
					Job_level="house job";
					break;
				}
				if(d3==2)
				{
					Job_level="medical officer";
					break;
				}
				if(d3==3)
				{
					Job_level="senior medical officer";
					break;
				}
				else
				cout<<"\n\t\aYou Select Wrong Option Try Again"<<endl;
			}while(true);
		}
			void showRecord()
		{
			cout<<" Doctor type is\t\t"<<Doctor_type<<endl;
			cout<<" Specialization is\t"<<Specialization<<endl;
			cout<<" Job_level is\t\t"<<Job_level<<endl;
		}
		void update()
		{								
			int u;
			cout<<"Choice the option that you want to Update \n\t1) job_type \n\t 2)bps \n\t3) job_level"<<endl;
		    cin>>u;
			switch(u)
			{
			  	case 1:
			  	{
					int u1;
					cout<<"Choice the Doctor type \n\t1 mbbs \n\t2) bds \n\t3) vetnery "<<endl;
					do
					{
						cin>>u1;
						if(u1==1)
						{
							Doctor_type="Mbbs";
							break;
						}
						if(u1==2)
						{
							Doctor_type="bds";
							break;
						}
						if(u1==3)
						{
							Doctor_type="Vetnery";
							break;
						}
						else
							cout<<"\n\t\aYou Select Wrong Option Try Again"<<endl;
						}
						while(true);	
				   	}break;
				case 2:
				{
					cout<<"Enter  BPS from 1 to 22"<<endl;
			 		cin>>bps;
			 		while(bps<=1 || bps>=22)
			 		{
			 			cout<<"\n\t\t\aYou Entered wrong Bps \n\t\tBPS Must be between 1 to 22 Enter Agian"<<endl;
			 			cin>>bps;
					}	
				}break;
				case 3:
				{
					int u2;
					cout<<"Choice the Job level \n\t1) house job \n\t2) medical officer \n\t3) senior medical officer"<<endl;
					do
					{
						cin>>u2;
						if(u2==1)
						{
							Job_level="house job";
							break;
						}
						if(u2==2)
						{
							Job_level="medical officer";
							break;
						}
						if(u2==3)
						{
							Job_level="senior medical officer";
							break;
						}
						else
							cout<<"\n\t\aYou Select Wrong Option Try Again"<<endl;
					}
					while(true);	
				}break;
			}
		}		
	};
	class DoctorNode
	{
		public:
			Doctor d;			// Object of Docotor class
			DoctorNode  *Next;
	};
	class TeacherNode
	{
		public:
			Teacher t;				// object of Teacher Class
			TeacherNode  *Next;		
	};
	class EmployeeList : public Teacher, Doctor
	{	
		public:
			int Node,Node_d;
			EmployeeList():Node(0),Node_d(0) 	// Node=0 ,Node_d=0;
			{
				// Default constructor
			}	
			TeacherNode *first,*last;
			DoctorNode *firstd,*lastd;
		void AddNewTeacher()
		{
			system("cls");
			Node=Node + 1;
			cout<<"\n\t**************Record ="<<Node<<"******************"<<endl;
			int choice2;
			TeacherNode *current;
			current=new TeacherNode;
			current->t.Employee::setRecord();
			current->t.setRecord();
			current->Next=NULL;
			first=last=current;							 
			do
			{
				system("cls");
				cout<<"\n\tENTER 1 to add more record OR press any other numrice key to exit "<<endl;
				cin>>choice2;
				if(choice2!=1)
				break;
				system("cls");
				Node=Node + 1;
				cout<<"\n\t**************Record ="<<Node<<"******************"<<endl;
				current=new TeacherNode;
				current->t.Employee::setRecord();
				current->t.setRecord();
				last->Next=current;
				last=current;
			}
			while(true);
			 system("cls");
  			 TeacherNode *temp=first;
			 while(temp!=NULL)
			 {
				temp->t.Employee::showRecord();
				temp->t.showRecord();
				temp=temp->Next;
			 }
		}
	    void AddNewDoctor()
	    {
	    	system("cls");
	    	Node_d=Node_d + 1;
			cout<<"\n\t**************Record ="<<Node_d<<"******************"<<endl;
	    	int choice2;
			DoctorNode *current;
			current=new DoctorNode;
			current->d.Employee::setRecord();
			current->d.setRecord();
			current->Next=NULL;
			firstd=lastd=current;							 
			do
			{
				system("cls");
				cout<<"\n\tENTER 1 to add more record OR press any other numrice key to exit "<<endl;
				cin>>choice2;
				if(choice2!=1)
				break;
				system("cls");
				Node_d=Node_d + 1;
				cout<<"\n\t**************Record ="<<Node_d<<"******************"<<endl;
				current=new DoctorNode;
				current->d.Employee::setRecord();
				current->d.setRecord();
			    lastd->Next=current;
				lastd=current;
		    }
			while(true);
		   	 system("cls");
			 DoctorNode *temp=firstd;
			 while(temp!=NULL)
			 {
				temp->d.Employee::showRecord();
				temp->d.showRecord();
				temp=temp->Next;
			 }
		}
		void upadate_t(int ti)
		{
			if(Node==0) 
			{
				cout<<"\n\tTeacher Record is Empty"<<endl;
			}
			else
			{
				TeacherNode *temp;
				temp=first;
				while(temp!=NULL && temp->t.id!=ti)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
		        cout<<"\n\t\aId is not found in Teacher record that you want to update"<<endl;
			    else
				{
					temp->t.Employee::showRecord();
					temp->t.showRecord();
					temp->t.update();
				} 
			}
		}
		void update_d(int p)
		{
			if(Node_d==0)
			{
				cout<<"\n\tDoctor Record is Empty"<<endl;;
			}
			else
			{
		   		DoctorNode *temp;
		   		temp=firstd;
				while(temp!=NULL && temp->d.id!=p)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
				{
		        	cout<<"\n\t\aId is not found in Doctor Record that you want Update"<<endl;
		        }
			    else
				{
					temp->d.Employee::showRecord();
					temp->d.showRecord();
					temp->d.update();							
				}
			}
		}
		void search_id_t(int tq)
	   {
	   		if(Node==0)
	   		{
	   			cout<<"\n\tTeacher Record is Empty"<<endl;
			}
			 else
			{
				TeacherNode *temp;
				temp=first;
				while(temp!=NULL && temp->t.id!=tq)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
				{
	       	 		cout<<"\n\t\aNot found in Teacher Link list"<<endl;
	       		}
		    	else
				{
			    	temp->t.Employee::showRecord();
			    	temp->t.showRecord();
		   		}
			}
	   }	 
	   		void search_id_d(int i)
	   {
	   	    if(Node_d==0)
	   	    {	
	   	    	cout<<"\n\tDoctor Record is Empty"<<endl;
			}
			else
			{
	   			DoctorNode *temp=firstd;
				while(temp!=NULL && temp->d.id!=i)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
	        	cout<<"\n\t\aNot found in Doctor Records"<<endl;
		    	else
				{
			    	temp->d.Employee::showRecord();
			    	temp->d.showRecord();
		   		}
		   	}
	   }
	   void search_name_t(string ax)
	   {
	   	  if(Node==0)
	   	    {
	   	   	  cout<<"\n\tTeacher Record is Empty"<<endl;
			}
		  else
		  {
	   			TeacherNode *temp;
				temp=first;
				while(temp!=NULL && temp->t.name!=ax)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
				{
					cout<<"\n\t\aNot Fount In In Teacher Records"<<endl;
				}
				else
				{
					temp->t.Employee::showRecord();
					temp->t.showRecord();
				}
			}
	   }
	   void search_name_d(string r)
	   {
	   		if(Node_d==0)
	   		{
	   			cout<<"\n\t\aDoctor Record is Empty"<<endl;
		    }
		    else
		    {
	   			DoctorNode *temp;
				temp=firstd;
				while(temp!=NULL && temp->d.name!=r)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
				{
					cout<<"\n\t\aNot Fount In Doctor Records "<<endl;
				}
				else
				{
					temp->d.Employee::showRecord();
					temp->d.showRecord();
				}
			}
	   }
	   void youngest_t()
	   {
	   	if(Node==0)
	   	{
	   		cout<<"\n\tTeacher Record is Empty"<<endl;
		 }
		 else
		{
	   		TeacherNode *temp,*temp2;
	   		temp=first;
	   		int min=60;
			while(temp!=NULL) 
			{
				int a=temp->t.age;	
					if(a<min)
					{
						min = a;
					}
					temp=temp->Next;
			}
			if(temp==NULL)
			{
				cout<<"\n\tYougest Teacher Age is = "<<min<<endl;
			}
			temp2 = first;
			while(temp2!=NULL && temp2->t.age!=min)
			{
				temp2=temp2->Next;
			}
				temp2->t.Employee::showRecord();
				temp2->t.showRecord();
			}

	   }
	   void youngest_d()
	   {
	   		if(Node_d==0)
	   		{
	   			cout<<"\n\tDoctor Record is Empty"<<endl;
			}
			else
			{
	   			int min_d=60;
	   			DoctorNode *temp,*temp2;
	   			temp=firstd;
				while(temp!=NULL)
				{				
					int a=temp->d.age;	//7, 9
						if(a<min_d)
						{
							min_d = a;
						}
						temp=temp->Next;
				}
				if(temp==NULL)
				{
				cout<<"\n\tYougest Age In Doctor Is ="<<min_d<<endl;
				}
				temp2=firstd;
				while(temp2!=NULL && temp2->d.age!=min_d)
				{
					temp2=temp2->Next;
				}
				temp2->d.Employee::showRecord();
				temp2->d.showRecord();
			}
	   }
	   void eldest_t()
	   {
	   		if(Node==0)
	   		{
	   			cout<<"\n\tTeacher Record is Empty"<<endl;
			}
			else
			{
	   			int max=0;
	   			TeacherNode *temp,*temp2;
	   			temp=first;
				while(temp!=NULL)
				{
					int a=temp->t.age;	//7, 9
					if(a>max)
					{
						max = a;
					}
					temp=temp->Next;
				}			
				if(temp==NULL)
				{
					cout<<"\n\tEldest Age In Teacher is ="<<max<<endl;
				} 
				temp2 = first;
				while(temp2!=NULL && temp2->t.age!=max)
				{
					temp2=temp2->Next;
				}
				temp2->t.Employee::showRecord();
				temp2->t.showRecord();
			}
	   }
	   void eldest_d()
	   {
	   		if(Node_d==0)
	   		{
	   			cout<<"\n\tDoctor Record is Empty"<<endl;
			}
			else
			{
	    		int  max_d=0;
	   			DoctorNode *temp,*temp2;
	   			temp=firstd;
				while(temp!=NULL)
				{
					int a=temp->d.age;	//7, 9
					if(a>max_d)
					{
						max_d = a;
					}
					temp=temp->Next;	//
				}
				if(temp==NULL)
				{
					cout<<"\n\tEldest age id Doctor is ="<<max_d<<endl;
				}
				temp2=firstd;
				while(temp2!=NULL && temp2->d.age!=max_d)
				{
					temp2=temp2->Next;
				}
				temp2->d.Employee::showRecord();
				temp2->d.showRecord();
			}
	   }
	   void search_Doctor_specilazation(string s)
	   {
	   		if(Node_d==0)
	   		{
	   			cout<<"\n\tDoctor Record is Empty"<<endl;
			}
			else
			{
	  			DoctorNode *temp;
				temp=firstd;
				while(temp!=NULL && temp->d.Specialization!=s)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
				{
					cout<<"\n\t\aNot Fount in Doctor Record"<<endl;
				}
				else
				{
					temp->d.Employee::showRecord();
					temp->d.showRecord();
				}
			}
		}
	   void search_teaching_level(string tl)
	   {
	   		if(Node==0)
	   		{
	   			cout<<"\n\tTeacher Record is Empty"<<endl;
			}
			else
			{
	   	 		TeacherNode *temp;
				temp=first;
				while(temp!=NULL && temp->t.Teaching_level!=tl)
				{
					temp=temp->Next;
				}
				if(temp==NULL)
				{
					cout<<"\n\t\aNot Fount Teacher Record"<<endl;
				}
				else
				{
					temp->t.Employee::showRecord();
					temp->t.showRecord();
				}
			}
	   }
	   void delete_t(int dt)
	   {
	   	 	if(Node==0)
	   		{
	   			cout<<"\n\tTeacher Record is Empty"<<endl;
			}
		 	else
		 	{
		 		TeacherNode *temp,*temp2;
		 		temp = first;
		 		while( temp!=NULL && temp->t.id!=dt)
		 		{
		 			temp2=temp;
			  		temp = temp->Next;	
				}
				if(temp==NULL)
				{
					cout<<"Id is not Found that you want delete"<<endl;
				}
				else
				{
					if(temp==first)
					{
						first=first->Next;
						delete temp;
					}
					else if(temp==last)
					{
						temp2->Next=NULL;
						delete temp;
					}
					else
					{
						temp2->Next=temp->Next;
						delete temp;
					}
				}
			}
		 }
	   void delete_d( int dd)
	   {
	   		if(Node_d==0)
	   		{
	   			cout<<"\n\t\aDoctor Record is Empty"<<endl;
			}
			else
			{		
	   	 	 	DoctorNode *temp,*temp2;
		 	 	temp = firstd;
		 		while( temp!=NULL && temp->d.id!=dd)
		 		{
		 	  		temp2= temp;
			  		temp = temp->Next;	
				}
				if(temp==NULL)
				{
					cout<<"Id is not found that you want to Delete"<<endl;
				}
				else
				{
					if(temp==firstd)
					{
						firstd=firstd->Next;
						delete temp;
					}
					else if(temp==lastd)
					{
						temp2=temp->Next=NULL;
						delete temp;
					}
					else
					{
						temp2->Next=temp->Next;
						delete temp;
					}
				}
			}
		}
	};	
	int main()
	{
		EmployeeList e;
		char ch;
		do
		{
			int k;
			system("cls");
 			cout<<"\n\t1) Add Employee \n\t2) updateEmployeeRecord \n\t3) SearchEmployee \n\t4) DeleteEmployee"<<endl;
			cin>>k;
			switch(k)
			{
				case 1:
				{
			    	int m;
					cout<<"\tWhat You Want Add Record \n\t1) Teacher \n\t2) Doctor"<<endl;
					cin>>m;
					switch(m)
					{
					  case 1:
					 	{
					 		e.AddNewTeacher();
						}break;
					    case 2:
						{
							e.AddNewDoctor();	
						}break;
					}
				}break;
				case 2:
				{
					int l;
					cout<<"\tEnter Id That to be update"<<endl;
					cin>>l;
					e.update_d(l);
					e.upadate_t(l);					
				}break;
				case 3:
				{
					system("cls");
					int m1;
					cout<<"\n\tChoice the Options That You want to be search\n\t1) Search By ID \n\t2) Search By Name"<<endl;
					cout<<"\t3) Search Youngest Employee \n\t4) Search Eldest Employee \n\t5) Search Doctor By Specialization "<<endl;
					cout<<"\t6) Search Teacher By TeachingLevel"<<endl;
					cin>>m1;
					switch(m1)
					{
						case 1:
						{
							int m3;
							cout<<"\tEnter The ID that you Want To search"<<endl;
							cin>>m3;
							e.search_id_t(m3);
							e.search_id_d(m3);
						}break;
						case 2:
						{
							string sname;
							cout<<"\tEnter The name that to be Search"<<endl;
							cin>>sname;
						  e.search_name_t(sname);
						  e.search_name_d(sname);	
						}break;
					 case 3:
						{
							e.youngest_t();
							e.youngest_d();
						}break;
					 case 4:
					   {
					 	 e.eldest_t();
						 e.eldest_d();	
						}break;
					 case 5:
					 	{
					 		string ss;
					 		cout<<"\tEnter The Specialization That you want to search"<<endl;
					 		cin>>ss;
					 		e.search_Doctor_specilazation(ss);
						}break;
						case 6:
						{
							string g;
							cout<<"\tEnter Teaching Level that you want to search"<<endl;
							cin>>g;
							e.search_teaching_level(g);	
						}break;
					}
				}break;
				case 4:
				{
					int d;
					cout<<"\tEnter the id that you to delete"<<endl;
					cin>>d;
					e.delete_t(d);
					e.delete_d(d);
				}
			}	 
	 	 cout<<"\n\tDo you Continue Enter Y and N for Exit"<<endl;
	 	 cin>>ch;
		}while(ch=='y' || ch=='Y');
		system("cls");
		cout<<"\n\n\t\tThanks For Using My Employee Software"<<endl;
		return 0;
		system("puase");
	}
