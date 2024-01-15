#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>

using namespace std;

char choice;
class customer

{
    public:
    string name, gender;
    int age, phone;
    static int cusID;
    char all[100];
    void getCustoInfo()
    {
        ofstream out(" old coustomer.txt", ios::app);
        {
            cout << " enter customer id";
            cin >> cusID;
            cout << " enter customer name";
            cin >> name;
            cout << " enter customer gender";
            cin >> gender;
            cout << " enter customer age";
            cin >> age;
            cout << " enter customer phone no";
            cin >> phone;
        }
        cout << "\n customer id: " << cusID << "\n name" << name << "\n gender" << gender << " \nage" << age << "\nphone no" << phone <<endl;
        cout << " customer information save sucessfully" << endl;
    }
    void showCustoInfo(){
    	ifstream in("old coustomer.txt");
    	{
    		if (!in)
    		{
    			cout << " file not found" << endl;
    			exit(1);
			}
			while (!in.eof())
			{
			in.getline(all, 100);
			cout << all << endl;	
			}
			in.close();		
	    }   
	}
};

int customer::cusID;

class cabs
{
public:
    int cabchoice;
	int kilometers;
	static float price;
	
	void cabdetails()
	{
		cout << " most sefest,fastest cab service our country ";
		cout << " ____________________________________________";
		cout << "enter the cab type you want to travel: ";
		cout << "1. car(50 Rs/km)"<< endl;
		cout << "2. Auto(10 rs/km)" <<endl;
		cout << "3. bus(30 rs/km)" <<endl;
		cout << "enter your choice ";
		cin >> cabchoice;
		switch (cabchoice)
		{
			case 1:
				cout << "enter the distance you want to travel: ";
				cin >> kilometers;
				price = 50.0*kilometers;
				cout << " you total bill will be: "<< price <<endl; 
				cout <<" do you want to book cab (y/n)";
			    cin >> choice;
				if( choice == 'y' || choice == 'y')
				{
					cout << " your cab is booked" << endl;
					
				}
				else
				{
					cout << " thank you for using our service ";
				    cabdetails();
				}
				break;
				
			case 2:
					cout << "enter the distance you want to travel: ";
				    cin >> kilometers;
				    price = 10.0*kilometers;
				    cout << " you total bill will be: "<< price <<endl; 
				    cout <<" do you want to book cab (yes/no)";
			        cin >> choice;
			
				if(choice == 'y' || choice == 'y')
				{
					cout << " your cab is booked" <<endl;
					
				}
				else
				{
					cout << " thank you for using our service ";
				    cabdetails();
				}
				break;
				
			case 3:
				   cout << "enter the distance you want to travel: ";
				   cin >> kilometers;
				   price = 30.0*kilometers;
				   cout << " you total bill will be: "<< price <<endl; 
				   cout <<" do you want to book cab (yes/no)";
				   cin >> choice;
				
				if(choice == 'y' || choice == 'y')
				{
					cout << " your cab is booked" <<endl;
					
				}
				else
				{
					cout << " thank you for using our service ";
					cabdetails();
			    }
			    break;
			  default:
			  cout << "Invalid choice"<<endl;
			  break;
			    
		}
	}	
};

class booking{
    public:
	int chooseHotel;
	int package;
	int gotoMenu;
	string bookedHotel;
    int hotelprice[10];
	
	void Hotel(){
	
	    string hotelname[15] = {" raj hotel", " taj hotel", " hotel grand",};
	    int hotelprice[10] = {1000, 2000, 3000,};
	    
	    for( int i=1; i<=3; i++)
	    cout << i+1 << "."<< hotelname[i] << " -->" <<hotelprice[i]<<endl;
	    cout <<"\ncurrently we have 3 hotel"<<endl;
	    cin >> chooseHotel;
	    
	    system("cls");
	    switch(chooseHotel)
        {
	    case 1:
	    	 cout << "you have selected" << hotelname[0] << " the price of hotel is" << 1000 <<endl;
	    	 cout << " do you want to this hottel(yes/no)"<<endl;	    	
			 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your hotel is booked" <<endl;
	    	     hotelprice[10]= 1000;
	    	     bookedHotel = hotelname[1];
	    	     cout <<" go to menu to take a receipt" <<endl;		
			 }
			 else{
			 	cout << " thank you for using our service "<<endl;
			 	Hotel();
			 }
	    	 break;
	    case 2:
	         cout << "you have selected" << hotelname[1] << " the price of hotel is" << 2000 <<endl;
	    	 cout <<" do you want to this hottel(yes/no)";
	    	 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your hotel is booked" <<endl;
	    	     hotelprice [10]= 2000;
	    	     bookedHotel = hotelname[2];
	    	     cout <<" goto menu to take a receipt" <<endl;		
			 }
			 else
			 {
			 	cout << " thank you for using our service "<<endl;
			 	Hotel();
			 }
	    	 break;
	    case 3:
	         cout << "you have selected" << hotelname[1] << " the price of hotel is" << 3000 <<endl;
	    	 cout <<" do you want to this hottel(yes/no)";
	    	 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your hotel is booked" <<endl;
	    	     hotelprice[10] = 3000;
	    	     bookedHotel = hotelname[3];
	    	     cout <<" goto menu to take a receipt" <<endl;		
			 }
			 else
			 {
			 	cout << " thank you for using our service "<<endl;
			 	Hotel();
			 }
	    	 break;
	    	default:
	    	  cout << " invaled choice"<<endl;
	    	  break;
	       
			 
		
        }
	}
};
class Receipt : public booking,cabs,customer
 {
	public:
	   void printBill(){
	   	    ofstream outf(" Receipt.txt");
	   	    {
	   	    	outf << " ----------------------------"<<endl;
	   	    	outf << "---------- Receipt------------"<<endl;
	   	    	outf << "------------------------------"<<endl;
	   	    	outf <<" customer ID"<< customer::cusID<<endl;
	   	    	outf<<"--------------------------------"<<endl;
	   	    	outf <<"----------booking--------------"<<endl;
	   	    	outf <<"-------------------------------"<<endl;
	   	    	outf <<" Hotel name: "<< booking::bookedHotel << endl;
	   	    	outf <<"Hotel price " << booking::hotelprice << endl;
	   	    	outf <<"-----------cab-----------------"<<endl;
	   	    	outf <<" cab name: "<< cabs <<endl;
	   	    	outf <<" cab price: " << cabs :: price <<endl;
	   	    	outf <<"--------------------------------"<< endl;
	   	    	outf <<" -----------total---------------"<<endl;
	   	    	outf <<"Total price" << booking::hotelprice + cabs::price<<endl;
	   	    	outf <<"--------------thank you----------"<< endl;
	   	    	
			   }
			   outf.close();
			   
		}
		void showbill(){
			ifstream inf("Receipt text");
			{
				if(inf){
					cout << " file not present"<<endl;
					
				}
				while(!(inf.eof())){
					string line;
					getline(inf,line)
					{
					cout << line << endl;
				    }
			}
			inf.close();		
		}
};
void menu()
{
	cout <<"-------------------------------------------" << endl;
	cout <<"1.customer Management" <<endl;
	cout <<"2.cab management" << endl;
	cout <<"3. booking management" <<endl;
	cout <<"4. Receipt Management" <<endl;
	cout <<"5. Exit" <<endl;
	cout <<"------------------------------------------"<<endl << endl;
	cout << " enter your choice: ";
	int mainchoice;
	
	cin >> mainchoice;
	system("cls");
	
	customer choice;
	cabs cabs;
	booking book;
	Receipt recepit;
	
	switch (mainchoice){
		case 1:
			cout << "----------------------------"<<endl;
			cout << "----------customer----------"<<endl;
			cout << "1.Add new member" <<endl;
			cout << "2.show old customer" << endl;
			cout << "3. go to menu" <<endl;
			cout <<"---------------------------------"<<endl <<endl;
			cout <<" enter your choice: ";
			int customerchoice;
			cin >> customerchoice;
			system ("cls");
			switch(customerchoice){
				case 1:
					getCustoinfo:
					break;
				case 2:
					showCustoinfo:
					break;
				case 3:
					menu();
					break;
			}
			break;
		case 2:
			cabs.cabdetails();
			break;
		case 3:
			cout << "---------------------------"<<endl;
			cout << "--------booking------------"<<endl;
			cout << "----------------------------"<<endl;
			break;
		case 4:
			cout << "----------------------------"<< endl;
			cout << "---------Receipt------------" << endl;
			cout <<"------------------------------"<<endl;
			cout <<"1.print Receipt"<< endl;
			cout <<"2.show Receipt" << endl;
			cout <<"3.Go to menu" <<endl;
			cout <<"--------------------------------"<<endl;
			cout <<" Enter your choice: ";
			int receiptchoice;
			cin >> receiptchoice;
			
			system("cls");
			switch(receiptchoice){
				case 1:
					recepit.printBill();
					break;
				case 2:
					recepit.showbill();
					break;
				case 3:
					cout << " Are you exit (yes/no)";
					char a;
					if(a == 'y' || a == 'y')
					    cout <<" Thank you for using our service"<<endl;
					    exit(0);
			}
				    else {
				    	menu();
					
					}
					
		   }
	
}
class booking
{
    public:
	int choosetravel;
	int package;
	int gotoMenu;
	string bookedtravel;
    int travelprice[10];
	
	void travel(){
	
	    string travelplace name[20] = {" jammu kashmir", " kedarnath", " rishikesh","sundarban Delta","sonmarg"};
	    int travelprice[10] = {15000, 20000, 30000,40000,50000};
	    
	    for( int i=1; i<5; i++)
	    cout << i+1 << "."<< travelplace name[i] << " -->" <<travelprice[i]<<endl;
	    cout <<"\ncurrently we have vist to 5 places to under in my Quidence "<<endl;
	    cin >> choosetravel;
	    
	    system("cls");
	    switch(choosetravel)
        {
	    case 1:
	    	 cout << "you have selected" << travelplace name[1] << " the price of this travel is" << travelprice[1]<<endl;
	    	 cout << " do you want to visit this palace (yes/no)";	    	
			 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your travel is booked" <<endl;
	    	     travelprice[10]= 15000;
	    	     bookedtravel = travelplace name[1];
	    	     cout <<" go to menu to take a receipt" <<endl;		
			 }
			 else{
			 	cout << " thank you for using our service "<<endl;
			 	travel();
			 }
	    	 break;
	    case 2:
	         cout << "you have selected" << travelplace name[1] << " the price of this travel is" << 20000 <<endl;
	    	 cout <<" do you want to visit this travel(yes/no)";
	    	 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your travel is booked" <<endl;
	    	     travelprice [10]= 20000;
	    	     bookedtravel = travelplace name[2];
	    	     cout <<" goto menu to take a receipt" <<endl;		
			 }
			 else
			 {
			 	cout << " thank you for using our service "<<endl;
			 	travel();
			 }
	    	 break;
	    case 3:
	         cout << "you have selected" << travelplace name[1] << " the price of this travel is" << 30000<<endl;
	    	 cout <<" do you want to visit  this travelling place (yes/no)";
	    	 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your travelling place  is booked" <<endl;
	    	     travelprice[10] = 30000;
	    	     bookedtravel = travelplace name[3];
	    	     cout <<" goto menu to take a receipt" <<endl;		
			 }
			 else
			 {
			 	cout << " thank you for using our service "<<endl;
			 	travel();
			 }
	    	 break;
	    case 4:
	         cout << "you have selected" << travelplace name[1] << " the price of this travel is" << 30000<<endl;
	    	 cout <<" do you want to visit  this travelling place (yes/no)";
	    	 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your travelling place  is booked" <<endl;
	    	     travelprice[10] = 40000;
	    	     bookedtravel = travelplace name[4];
	    	     cout <<" goto menu to take a receipt" <<endl;		
			 }
			 else
			 {
			 	cout << " thank you for using our service "<<endl;
			 	travel();
			 }
	    	 break;
	    case 5:
	       cout << "you have selected" << travelplace name[1] << " the price of this travel is" << 30000<<endl;
	    	 cout <<" do you want to visit  this travelling place (yes/no)";
	    	 cin >> choice;
	    	 if (choice == 'y' || choice == 'y')
	    	 {
	    	     cout<<" your travelling place  is booked" <<endl;
	    	     travelprice[10] = 50000;
	    	     bookedtravel = travelplace name[5];
	    	     cout <<" goto menu to take a receipt" <<endl;		
			 }
			 else
			 {
			 	cout << " thank you for using our service "<<endl;
			 	travel();
			 }
	    	 break;
	    
	    	default:
	    	{
	    	  cout << " invaled choice"<<endl;
	    	  break;
	       
			 
		
        }
	}
	
	int main()
	{
		customer c;
	    c.getCustoInfo();
	    c.getshowCustInfo();
	    
	    cab c1;
	    c1.cabdetails();
	    c1.showcabdetail();
	    
	    booking b1;
	    b1.Hotel();
	    b1.showHotel();
	    
	    Receipt r1;
	    r1.getprintBill();
	    r1.showprintBill();
	    
	    booking b2;
	    b2.travel();
	    b2.showtravel();
	    
	    
	    
	    
	    
}
	
	    
	    
};
          

