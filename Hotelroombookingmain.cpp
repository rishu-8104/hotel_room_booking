//Title - HOTEL ROOM BOOKING PROGRAM
// Author - Rishu Kumar

// It is a grade 5 program according to me.
// I have included every thing that was needed in grade 5 program.
// this program has room numbers from 1 to 80.
// first half of the rooms is for single room type that is from room 1 to 40
// second half of the rooms is for double room type that is from room 41 to 80
// discount will be given on total amount randomly
// user can not enter same room twice.
// rooms can not be repeated.
// random reservation number will be generated and shown when user check out.
// tenents can search the room using room number.
// customer can book room till n number of rooms.

#include<iostream>
#include"Hotelroombooking.h"
using namespace std;
string name[100];       //for name of tenent.
string address[80];     //for address of tenent.
string contact_number[80];      //for Contact number of tenent.
int room_type[80];              //for room type single or double.
int discount;                   //for giving random discount to tenent.
int number_of_night;            // for number of nights staying
int total=0;                    //for initialising total
float m=0;                      //for initialising m                     
float room_number[80];         //for room number

int main()
{
	int option;

    cout<<"                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"                  <<endl;    //an attractive way to welcome tenents and showing main menu.
    cout<<"                 *****----------------------------------------------------*****"                 <<endl;
    cout<<endl; 
    cout<<"                 ^^^^^^^     WELCOME TO HOTEL ROOM BOOKING PROGRAM     ^^^^^^^^"                 <<endl;
    cout<<endl;
    cout<<"                 *****----------------------------------------------------*****"                 <<endl;
    cout<<"                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<endl;
    cout<<endl;
	while(true)
	{
        cout<<"*-- WELCOME TO MAIN MENU --*"<<endl; //indication for main menu.
        cout<<endl;
        cout<<endl;
        cout<<"Press 1 to Book a Room."<<endl;      // option for booking a program.
        cout<<endl;
        cout<<"Press 2 to Show all booked Room.    "<<endl; // option for showing all reserved room.
        cout<<endl;
        cout<<"Press 3 to Search Your Room."<<endl;     // option for searching a room.
        cout<<endl;
        cout<<"Press 4 to check out Room."<<endl;     // option for check_out a room.
        cout<<endl;
        cout<<"Press 5 to exit."<<endl;                   // to exit and start again.
	    cin>>option;
	switch(option)
	{
		case 1:
			book_room();
            cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<< "   *****--------------  Thankyou!  --------------*****   "<<endl;   // greeting the tenent at the end of booking room. 
                cout<< "*****--------------  Have a Nice Day  --------------*****"<<endl;
                cout<<endl;
			break;
		case 2:
			show();         //for showing all reserved room
			break;
		case 3:
			search();       //for searching reserved room by room number
			break;
 		case 4:
			check_out();     //to check out from a hotel and to calculate invoice 
			break;       
		case 5:
			cout<<"                 You exit the program                    "<<endl;
            cout<<endl;
			break;
		default:
			cout<<"Invalid input"<<endl;
            cout<<endl;
			break;
	}
}
}
void book_room()   //subroutine for booking room and tenent details.
{
		int count=0;                // asking for how many rooms need to be booked.
			cout<<"Enter the number of tenents you are booking for: "<<endl;
			cin>>count;
			if(total==0)
			{
			total=count+total;
			for(int i=0;i<count;i++)
			{                   // asking for tenent basic details.
				cout<<"\nTenent's Detail: "<<i+1<<endl<<endl;
				cout<<"Enter Name: ";
				cin>>name[i];
                cout<<endl;         // asking for room type single or double.
                cout<<"Enter Room type (1 for single or 2 for double): ";
                cin>>room_type[i];
                cout<<endl;
                cout<<"Enter Room number: ";    
                if (room_type[i]==1)  //defining room numbers for single type
                {
                    cin>>room_number[i];
                    while (room_number[i]<1 || room_number[i]>40)
                    {
                        cout<<"Single room are 1 to 40  Enter again: ";// if input is out of range
                        cin>> room_number[i];
                    }
                }
                else if (room_type[i]==2)       //defining room numbers for double type
                {
                    cin>>room_number[i];
                    while (room_number[i]<41 || room_number[i]>80)
                    {
                        cout<<"Double room are 41 to 80  Enter again: ";// if input is out of range
                        cin>> room_number[i];
                    }
                }
                if(room_number[i]>m) //function that dont allow customer to input same room number twice.
                {m=room_number[i];}
                else if (room_number[i] == m)
                {
                    cout<<"\nRoom is already booked!"<<endl;// if room is already booked.
                    cout<<"Enter another Room number: ";
                    cin>>room_number[i];
                }


                cout<<endl; 
                cout<<"Enter Number of Nights to Stay: ";// asking for number of nights to stay
                cin>>number_of_night;
                cout<<endl;
				cout<<"Enter Tenent's address: ";   //for address
				cin>>address[i];
                cout<<endl;
				cout<<"Enter Tenent's contact number: ";        //for contact number
				cin>>contact_number[i]; 
                cout<<endl;                 // after every details data will saved in array and can book again.
                cout<< "        --------- Room has been booked ------------        "<<endl;
                cout<<endl;  
			}
	    	}
	    	else
	    	{               //for another user input same repeat again
	    		for(int i=total;i<count+total;i++)
			{
				    cout<<"\nTenent's Detail: "<<i+1<<endl<<endl;
				    cout<<"Enter Name:  ";
				    cin>>name[i];
                    cout<<endl;
                    cout<<"Enter Room type (1 for single or 2 for double): ";
				    cin>>room_type[i];
                    cout<<endl;
                    cout<<"Enter Room number: ";
                if (room_type[i]==1)
                {
                    cin>>room_number[i];
                    while (room_number[i]<1 || room_number[i]>40)
                    {
                        cout<<"Single room are 1 to 40  Enter again: ";
                        cin>> room_number[i];
                    }
                }
                else if (room_type[i]==2)
                {
                    cin>>room_number[i];
                    while (room_number[i]<41 || room_number[i]>80)
                    {
                        cout<<"Double room are 41 to 80  Enter again: ";
                        cin>> room_number[i];
                    }
                }
                cout<<endl;
                cout<<"Enter Number of Nights to Stay: ";
                cin>>number_of_night;
                cout<<endl;
				cout<<"Enter Tenent's address: ";
				cin>>address[i];
                cout<<endl;
				cout<<"Enter Tenent's contact number: ";
				cin>>contact_number[i];
                cout<<endl;
			}
			total=count+total;
			}
}

void show()             //subroutine to show all thereserved room to hotel staff. 
{
	if(total==0)        //if there will be no data.
	{
		cout<<"* Data Not Found! *"<<endl;
	}
	else{
		for(int i=0;i<total;i++) // display all reserved with all details.
	    		{
	    		    cout<<"\nData of Tenent's: "<<i+1<<endl<<endl;
	    		    cout<<"Name: "<<name[i]<<endl;
	    		    cout<<"Room number: "<<room_number[i]<<endl;
	    		    cout<<"Room type: "<<room_type[i]<<endl;
	    		    cout<<"Address: "<<address[i]<<endl;
	    		    cout<<"Contact Number: "<<contact_number[i]<<endl;
	    	    }
	    	}
}


void check_out()        //subroutines for cheack out a room.
{
    if(total==0)            // if no data found.
	{
		cout<<"* Data Not Found! *"<<endl;
	}
	else{                       //invoice will be created using room number
	float roomno;
				cout<<"Enter the room no of tenent: "<<endl;
				cin>>roomno;
				for(int i=0;i<total;i++)
				{ 
					if(roomno==room_number[i])
					{
						cout<<"Name: "<<name[i]<<endl;
                        cout<<"Reservation number: "<<rand() %  99999 + 10000<<endl;// for generating random reservatin number
	    	        	cout<<"Room number: "<<room_number[i]<<endl;
	    		        cout<<"Room type: "<<room_type[i]<<endl;
                        cout<<"Number of Nights: "<<number_of_night<<endl;
	    		        cout<<"Address: "<<address[i]<<endl;
	    	        	cout<<"Contact Number:"<<contact_number[i]<<endl;
                        switch (room_type[i])           //using switch function for single or double room type.
                        {   
                            case 1:                 //for single room type
                                cout<<"---------------------------------------------------------------------------------"<<endl;            
                                cout<<"You have selected single room and will staying here for "<<number_of_night<<" nights";
                                cout<<endl;
                                cout<<"Your total amount is "<<100*number_of_night<<" euros"<<endl;
                                discount=rand() % 2 *10;            //for giving discount.
                                cout<<"You get "<<discount<<"% discount"<<endl;
                                cout<<"Your total bill is "<<100*number_of_night- 100*number_of_night * discount*0.01<<" euros"<<endl;
                            break;
                        
                           
                            case 2:                 //for double room type
                                cout<<"---------------------------------------------------------------------------------"<<endl;            
                                cout<<"You have selected Double room and will staying here for "<<number_of_night<<" nights";
                                cout<<endl;
                                cout<<"Your total amount is "<<150*number_of_night<<" euros"<<endl;
                                discount=rand() % 2 *10;
                                cout<<"You get "<<discount<<"% discount"<<endl;
                                cout<<"Your total bill is "<<150*number_of_night- 150*number_of_night * discount*0.01<<" euros"<<endl;
                                break;
                                default:
                                    
                                break;
                            }   
                        }   
					}
				}
			}


void search()       //subroutines for serarching tenent using room number.
{
	if(total==0)        //if no data found.
	{
		cout<<"* Data Not Found! *"<<endl;
	}
	else{
	float roomno;
				cout<<"Enter the room Number of tenent: "<<endl;
				cin>>roomno;
                
				for(int i=0;i<total;i++)
				{                           // displaying details using room number
					if(roomno == room_number[i])
					{
						cout<<"Name: "<<name[i]<<endl;
                        cout<<"Reservation number: "<<rand() %  99999 + 10000<<endl;
	    	        	cout<<"Room number: "<<room_number[i]<<endl;
	    		        cout<<"Room type: "<<room_type[i]<<endl;
	    		        cout<<"Address: "<<address[i]<<endl;
	    	        	cout<<"Contact Number:"<<contact_number[i]<<endl;
					}
                    else
                    {
                    }
                }       
			}
}
