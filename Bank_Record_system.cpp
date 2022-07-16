#include<iostream>
using namespace std;
int main()
{
	int i,option,j,k,l,update_no,order_no,updated_rec,update_choice,updated_balance,search_flag=0,search_number,u,t;
	int rec_no[50];
	string first_name[50],last_name[50],updated_name;
	float balance[50];
	char record_again;
	string deleted_string="Data has been deleted";
	cout<<"Enter some records before editing/updating/deleting/searching records since records are empty now\n";
	{
				for(i=0;i<50;i++)
					{
					cout<<"\nEnter Record Number : ";
					cin>>rec_no[i];
					cout<<"\nEnter First Name : ";
					cin>>first_name[i];
					cout<<"\nEnter Last Name : ";
					cin>>last_name[i];
					cout<<"\nEnter Balance : ";
					cin>>balance[i];
					cout<<"\nDo you want to add another record ? (Y/N) : ";
					cin>>record_again;
					if(record_again=='y'||record_again=='Y')
					{
						continue;
					}
					else if(record_again=='n'||record_again=='N')
					{
						break;
					}
					else
					{ 
						cout<<"Invalid Response ! Please Restart The Program";
						return 0;
					}
			}
	}
	for(j=0;j<100;j++)
	{
		start:
			cout<<"\nChoose From The Options Below : \n\t1. Show the Records\n\t2. Update the Record\n\t3. Search the Records\n\t4. Delete Record\n\t5. Quit\n";
			cin>>option;
			if(option==1)
			{
					cout<<"\nRecord files are below\n\n";
					for(k=0;k<i+1;k++)
					{
							cout<<"Record Number : "<<rec_no[k]<<"\n";
							cout<<"First Name    : "<<first_name[k]<<"\n";
							cout<<"Last Name     : "<<last_name[k]<<"\n";
							cout<<"Balance       : "<<balance[k]<<"\n";
							cout<<"\n\n";		
					}
			}
			if(option==2)
			{
				for(l=0;l<50;l++)
				{
					cout<<"\nUpdate\n1. Record Number\n2. First Name\n3. Last Name\n4. Balance\n";
					cin>>update_no;	
					if(update_no==1)
					{
						cout<<"\nEnter order.no of the added record that have to be updated : ";
						cin>>order_no;
						if(order_no<0||order_no>i+1)
							{
								cout<<"Invalid Response";
								return 0;
							}
						cout<<"\nEnter the updated record number : ";
						cin>>updated_rec;
						rec_no[order_no-1]=updated_rec;
						cout<<"\n1. Show the updated record\n2. Update another record\n3. Exit\n";
						cin>>update_choice;
						if(update_choice==1)
							{
											cout<<"Record Number : "<<rec_no[order_no-1]<<"\n";
											cout<<"First Name    : "<<first_name[order_no-1]<<"\n";
											cout<<"Last Name     : "<<last_name[order_no-1]<<"\n";
											cout<<"Balance       : "<<balance[order_no-1]<<"\n";
											goto start;		
							}
						else if(update_choice==2)
							{
									continue;
							}
						else if(update_choice==3)
							{
									break;
							}
						else { cout<<"Invalid Request"; return 0;}
						
					}
					else if(update_no==2)
					{
						cout<<"\nEnter order.no of the added record that have to be updated : ";
						cin>>order_no;
						if(order_no<0||order_no>i+1)
							{
								cout<<"Invalid Response";
								return 0;
							}
						cout<<"\nEnter the updated first name : ";
						cin>>updated_name;
						first_name[order_no-1]=updated_name;
						cout<<"\n1. Show the updated record\n2. Update another record\n3. Exit\n";
						cin>>update_choice;
						if(update_choice==1)
							{
											cout<<"Record Number : "<<rec_no[order_no-1]<<"\n";
											cout<<"First Name    : "<<first_name[order_no-1]<<"\n";
											cout<<"Last Name     : "<<last_name[order_no-1]<<"\n";
											cout<<"Balance       : "<<balance[order_no-1]<<"\n";
											goto start;		
							}
						else if(update_choice==2)
							{
									continue;
							}
						else if(update_choice==3)
							{
									break;
							}
						else { cout<<"Invalid Request"; return 0;}
						
					}
					else if(update_no==3)
					{
						cout<<"\nEnter order.no of the added record that have to be updated : ";
						cin>>order_no;
						if(order_no<0||order_no>i+1)
							{
								cout<<"Invalid Response";
								return 0;
							}
						cout<<"\nEnter the updated last name : ";
						cin>>updated_name;
						last_name[order_no-1]=updated_name;
						cout<<"\n1. Show the updated record\n2. Update another record\n3. Exit\n";
						cin>>update_choice;
						if(update_choice==1)
							{
											cout<<"Record Number : "<<rec_no[order_no-1]<<"\n";
											cout<<"First Name    : "<<first_name[order_no-1]<<"\n";
											cout<<"Last Name     : "<<last_name[order_no-1]<<"\n";
											cout<<"Balance       : "<<balance[order_no-1]<<"\n";
											goto start;		
							}
						else if(update_choice==2)
							{
									continue;
							}
						else if(update_choice==3)
							{
									break;
							}
						else { cout<<"Invalid Request"; return 0;}
					}
					else if(update_no==4)
					{
						cout<<"\nEnter order.no of the added record that have to be updated : ";
						cin>>order_no;
						if(order_no<0||order_no>i+1)
							{
								cout<<"Invalid Response";
								return 0;
							}
						cout<<"\nEnter the updated balance : ";
						cin>>updated_balance;
						balance[order_no-1]=updated_balance;
						cout<<"\n1. Show the updated record\n2. Update another record\n3. Exit\n";
						cin>>update_choice;
						if(update_choice==1)
							{
											cout<<"Record Number : "<<rec_no[order_no-1]<<"\n";
											cout<<"First Name    : "<<first_name[order_no-1]<<"\n";
											cout<<"Last Name     : "<<last_name[order_no-1]<<"\n";
											cout<<"Balance       : "<<balance[order_no-1]<<"\n";
											goto start;		
							}
						else if(update_choice==2)
							{
									continue;
							}
						else if(update_choice==3)
							{
									break;
							}
						else { cout<<"Invalid Request"; return 0;}
					}
					else
					{
						cout<<"Invalid Response! Restart!";
						return 0;
					}
				}
			}
			if (option==3)
			{
					cout<<"\nEnter the record number to search : ";
					cin>>search_number;
					for(u=0;u<i+1;u++)
					{
							if(search_number==rec_no[u])
								{
									cout<<"\n\n";
									cout<<"Record Number      : "<<rec_no[u]<<"\n";
									cout<<"First Name         : "<<first_name[u]<<"\n";
									cout<<"Last Name          : "<<last_name[u]<<"\n";
									cout<<"Balance	           : "<<balance[u]<<"\n";
									search_flag=1;
									break;
								}
					}
					if(search_flag==1)
					{
							goto start;
					}
					else
					{
						cout<<"Entered Record Number is not found in the database! Search Again\n";
						goto start;
					}
			}
			if (option==4)
			{
					cout<<"\nEnter the record number of the record which has to be deleted : ";
					cin>>search_number;
					for(u=0;u<i+1;u++)
					{
							if(search_number==rec_no[u])
								{
									first_name[u]=deleted_string;
									last_name[u]=deleted_string;
									balance[u]=0;
									search_flag=1;
									break;
								}
					}
					cout<<"Showing Database.......\n";
					if(search_flag==1)
					{
							for(t=0;t<i+1;t++)
							{
							cout<<"\n\n";
							cout<<"Record Number      : "<<rec_no[t]<<"\n";
							cout<<"First Name         : "<<first_name[t]<<"\n";
							cout<<"Last Name          : "<<last_name[t]<<"\n";
							cout<<"Balance	           : "<<balance[t]<<"\n";
							}
							goto start;
					}
					else
					{
						cout<<"Entered Record Number is not found in the database! Search Again\n";
						goto start;
					}
			}
			if(option==5)
			{
				cout<<"Exiting....";
				return 0;
			}
			else {
				cout<<"Invalid Response ! Pls Restart the Program ! ";
				return 0;
		}
	}
	return 0;
}
