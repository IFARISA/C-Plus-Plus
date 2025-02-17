#include<iostream>
#include<string>
using namespace std;

class Passenger
{
private:
	string Name;
	long int  ID;
	string contactInfo;
	string bookingRef;

public:
	Passenger()
	{
		Name = "unknown";
		ID = 0;
		contactInfo = "unknown";
		bookingRef = "unknown";
	}

	Passenger(string n, long int id, long int con, int r)
	{
		Name = n;
		ID = id;
		contactInfo = con;
		bookingRef = r;
	}
	void setName(string n)
	{
		Name = n;
	}
	string getName()
	{
		return Name;
	}
	void setId(long int id)
	{
		ID = id;
	}
	long int getId()
	{
		return ID;
	}
	void setContactInfo(string con)
	{
		contactInfo = con;
	}
	string getContactInfo()
	{
		return contactInfo;
	}
	void setBookingRef(string r)
	{
		bookingRef = r;
	}
	string getBookingRef()
	{
		return bookingRef;
	}
	void printPassengerInfo()
	{
		cout << "Passenger Name is: " << getName() << "\n";
		cout << "Passenger ID is: " << getId() << "\n";
		cout << "Contact Information is: " << getContactInfo() << "\n";
		cout << "Booking Refrence Information is: " << getBookingRef() << "\n";
	}

};
class City
{
private:
	string Name;
	int CityCode;
	string countryName;


public:
	City()
	{
		Name = "unknown";
		CityCode = 0;
		countryName = "unknown";
	}
	City(string n, int c, string cn)
	{
		Name = n;
		CityCode = c;
		countryName = cn;
	}
	void setName(string n)
	{
		Name = n;
	}
	string getName()
	{
		return Name;
	}
	void setCityCode(int c)
	{
		CityCode = c;
	}
	int getCityCode()
	{
		return CityCode;
	}
	void setcountryName(string cn)
	{
		countryName = cn;
	}
	string getcountryName()
	{
		return countryName;
	}
	void printCityInfo()
	{
		cout << "City Name is: " << getName() << "\n";
		cout << "The City Code is: " << getCityCode() << "\n";
		cout << "The Country Name is: " << getcountryName() << "\n";
	}
};
class FlyScheduling
{
private:
	int flyNo;
	int dateTime;
	string departingCity;
	string destinationCity;

public:
	FlyScheduling()
	{
		flyNo = 0;
		dateTime = 0;
		departingCity = "unknown";
		destinationCity = "unknown";
	}
	FlyScheduling(int f, int d, string ds, string dn)
	{
		flyNo = f;
		dateTime = d;
		departingCity = ds;
		destinationCity = dn;
	}
	void setflyNo(int f)
	{
		flyNo = f;

	}
	int getflyNo()
	{
		return flyNo;
	}
	void setdataTime(int d)
	{
		dateTime = d;

	}
	int getdataTime()
	{
		return dateTime;
	}
	void setdepartingCity(string ds)
	{
		departingCity = ds;

	}
	string getdepartingCity()
	{
		return departingCity;
	}
	void setdestinationCity(string dn)
	{
		destinationCity = dn;

	}
	string getdestinationCity()
	{
		return destinationCity;
	}
	void printFlyInfo()
	{
		cout << "Fly Number is :" << getflyNo() << "\n";
		cout << "Data Time is :" << getdataTime() << "\n";
		cout << "Departing City is :" << getdepartingCity() << "\n";
		cout << "Destination City is :" << getdestinationCity() << "\n";

	}

};
class FlyingBooking
{
private:
	int flyNo;
	string bookingRef;

	int dataTime;
	string departingCity;
	string destinationCity;
public:
	FlyingBooking()
	{
		flyNo = 0;
		bookingRef = "unknown";
		dataTime = 0;
		departingCity = "unknown";
		destinationCity = "unknown";
	}
	FlyingBooking(int f, string r, int d, string ds, string dn)
	{
		flyNo = f;
		bookingRef = r;
		dataTime = d;
		departingCity = ds;
		destinationCity = dn;
	}
	void setflyNo(int f)
	{
		flyNo = f;

	}
	int getflyNo()
	{
		return flyNo;
	}
	void setBookingRef(string r)
	{
		bookingRef = r;
	}
	string getBookingRef()
	{
		return bookingRef;
	}
	void setdataTime(int d)
	{
		dataTime = d;

	}
	int getdataTime()
	{
		return dataTime;
	}
	void setdepartingCity(string ds)
	{
		departingCity = ds;

	}
	string getdepartingCity()
	{
		return departingCity;
	}
	void setdestinationCity(string dn)
	{
		destinationCity = dn;

	}
	string getdestinationCity()
	{
		return destinationCity;
	}
	void printBookingInfo()
	{
		cout << "Fly Number is :" << getflyNo() << "\n";
		cout << "Booking Refrence Information is: " << getBookingRef() << "\n";
		cout << "Data Time is :" << getdataTime() << "\n";
		cout << "Departing City is :" << getdepartingCity() << "\n";
		cout << "Destination City is :" << getdestinationCity() << "\n";
	}

};


const int tableSize = 25;
struct Passenger_Node
{
	Passenger passenger;
	Passenger_Node* next;
	Passenger_Node* prev;

	Passenger_Node()
	{
		next = NULL;
		prev = NULL;
	}
	void display()
	{
		cout << "Passenger Name : " << passenger.getName() << endl;
		cout << "Passenger ID : " << passenger.getId() << endl;
		cout << "Passenger ContactInfo : " << passenger.getContactInfo() << endl;
		cout << "Passenger Booking Ref : " << passenger.getBookingRef() << endl;
	}
};
class Passenger_List
{
private:
	Passenger_Node** hashTable, ** top;
public:
	Passenger_List()
	{
		hashTable = new Passenger_Node * [tableSize];
		top = new Passenger_Node * [tableSize];

		for (int i = 0; i < tableSize; i++)
		{
			hashTable[i] = NULL;
			top[i] = NULL;
		}
	}

	~Passenger_List()
	{
		delete[] hashTable;
	}

	int hashFunction(int key)
	{
		return key % tableSize;
	}

	void Insert()
	{
		Passenger pas;

		long int d_id;
		string p_name;
		string p_contactInfo;
		string p_bookingRef;


		cout << "\n\n  ************* \n";
		cout << "  \t\tInsert Menu\n";
		cout << "  *************\n";
		cin.ignore();
		cout << "Enter Passenger's ID:  ";
		cin >> d_id;
		cin.ignore();
		cout << "Enter Passenger's Name:  ";
		cin >> p_name;
		cout << "Enter Passenger's ContactInfo:  ";
		cin >> p_contactInfo;
		cout << "Enter Passenger's BookingRef :  ";
		cin >> p_bookingRef;


		pas.setId(d_id);
		pas.setName(p_name);
		pas.setBookingRef(p_bookingRef);
		pas.setContactInfo(p_contactInfo);

		int hashVal = hashFunction(d_id);
		Passenger_Node* entry = hashTable[hashVal];

		if (entry == NULL)
		{
			// creating new node
			entry = new Passenger_Node;
			entry->passenger = pas;
			entry->next = NULL;
			entry->prev = NULL;
			hashTable[hashVal] = entry;
			top[hashVal] = entry;
		}

		else
		{
			// traversing till the end of 
			// the list 
			while (entry != NULL)
				entry = entry->next;

			// creating the new node
			entry = new Passenger_Node;
			entry->passenger = pas;
			entry->next = NULL;
			entry->prev = top[hashVal];
			top[hashVal]->next = entry;
			top[hashVal] = entry;
		}
		cout << "\nSuccessfully Inserted into HashTable..!\n\n";
	}

	void Display()
	{
		int count = 0;
		for (int i = 0; i < tableSize; i++)
		{
			Passenger_Node* entry = hashTable[i];
			if (entry != NULL)
			{
				cout << "****Passenger Record at Table key: " << i << endl;
				while (entry != NULL)
				{
					entry->display();
					entry = entry->next;
				}
			}
		}
		cout << endl;
		if (count == 0)
			cout << "No Record exist..!" << endl;
	}

	void Remove()
	{
		int key;
		cout << "Enter Passenger's ID You want to remove:  ";
		cin >> key;

		// Applying hashFunc to find 
			// index for given key 
		int hashVal = hashFunction(key);
		Passenger_Node* entry = hashTable[hashVal];
		if (entry == NULL || entry->passenger.getId() != key)
		{
			cout << "Couldn't find any element at this Id: " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL) {
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
			entry = entry->next;
		}
		cout << "\tSuccessfully Removed form Hash Table...!\n\n";
	}

	void Find()
	{
		int key;
		cout << "Enter Patient's ID You want to find:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		bool flag = false;
		Passenger_Node* entry = hashTable[hashVal];

		// if hashtable at that index has some 
		// values stored 
		if (entry != NULL)
		{
			while (entry != NULL) {
				if (entry->passenger.getId() == key) {
					flag = true;
				}
				if (flag)
				{
					entry->display();
				}
				entry = entry->next;
			}
		}
		if (!flag)
			cout << "No Element found at Id: " << key << endl;
	}

	void Modify()
	{
		int d_id;
		int key;
		string d_name;
		string d_bookingRef;
		string d_coninfoNum;

		Passenger update_Passenger;
		cout << "Enter Passenger's ID You want to modify:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		Passenger_Node* entry = hashTable[hashVal];

		if (entry == NULL || entry->passenger.getId() != key)
		{
			cout << "Couldn't find any element at this Id " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL)
		{
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
			entry = entry->next;
		}

		cout << "\nEnter the new data to update the old data of Passenger" << endl;
		cout << "\nEnter Passenger's ID:  ";
		cin >> d_id;
		cin.ignore();
		cout << "\nEnter Passenger's Name:  ";
		cin >> d_name;
		cout << "\nEnter Passenger's ContactInfo:  ";
		cin >> d_coninfoNum;
		cout << "\nEnter Passenger's BookinRef :  ";
		cin >> d_bookingRef;

		update_Passenger.setId(d_id);
		update_Passenger.setName(d_name);
		update_Passenger.setContactInfo(d_coninfoNum);
		update_Passenger.setBookingRef(d_bookingRef);
	}
};

struct City_Node
{
	City city;
	Passenger_List Passenger_List;
	City_Node* next;
	City_Node* prev;

	City_Node()
	{
		next = NULL;
		prev = NULL;
	}
	void display()
	{
		cout << "City Code : " << city.getCityCode() << endl;
		cout << "City Name : " << city.getName() << endl;
		cout << "City Address : " << city.getcountryName() << endl;
	}
};
class Citys_List
{
private:
	City_Node** hashTable, ** top;
public:
	Citys_List()
	{
		hashTable = new City_Node * [tableSize];
		top = new City_Node * [tableSize];

		for (int i = 0; i < tableSize; i++)
		{
			hashTable[i] = NULL;
			top[i] = NULL;
		}
	}

	~Citys_List()
	{
		delete[] hashTable;
	}

	int hashFunction(int key)
	{
		return key % tableSize;
	}

	void Insert()
	{
		City cit;

		int c_cityCode;
		string c_name;
		string c_countryName;

		cout << "\n\n  ************* \n";
		cout << "  \t\tInsert Menu\n";
		cout << "  *************\n";
		cin.ignore();
		cout << "Enter City's Code:  ";
		cin >> c_cityCode;
		cin.ignore();
		cout << "Enter City's Name:  ";
		cin >> c_name;
		cout << "Enter City's country:  ";
		cin >> c_countryName;

		cit.setCityCode(c_cityCode);
		cit.setName(c_name);
		cit.setcountryName(c_countryName);

		int hashVal = hashFunction(c_cityCode);
		City_Node* entry = hashTable[hashVal];

		if (entry == NULL)
		{
			// creating new node
			entry = new City_Node;
			entry->city = cit;
			entry->next = NULL;
			entry->prev = NULL;
			hashTable[hashVal] = entry;
			top[hashVal] = entry;
		}

		else
		{
			// traversing till the end of 
			// the list 
			while (entry != NULL)
				entry = entry->next;

			// creating the new node
			entry = new City_Node;
			entry->city = cit;
			entry->next = NULL;
			entry->prev = top[hashVal];
			top[hashVal]->next = entry;
			top[hashVal] = entry;
		}
		cout << "\nSuccessfully Inserted into HashTable..!\n\n";
	}

	void Display()
	{
		int count = 0;
		for (int i = 0; i < tableSize; i++)
		{
			City_Node* entry = hashTable[i];
			if (entry != NULL)
			{
				cout << "****City Record at Table key: " << i << endl;
				while (entry != NULL)
				{
					entry->display();
					entry = entry->next;
				}
			}
		}
		cout << endl;
		if (count == 0)
			cout << "No Record exist..!" << endl;
	}

	void Remove()
	{
		int key;
		cout << "Enter City's Code You want to remove:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		City_Node* entry = hashTable[hashVal];
		if (entry == NULL || entry->city.getCityCode() != key)
		{
			cout << "Couldn't find any element at this Id: " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL) {
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
			entry = entry->next;
		}
		cout << "\tSuccessfully Removed form Hash Table...!\n\n";
	}

	void Find()
	{
		int key;
		cout << "Enter City's Code You want to find:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		bool flag = false;
		City_Node* entry = hashTable[hashVal];

		// if hashtable at that index has some 
		// values stored 
		if (entry != NULL)
		{
			while (entry != NULL) {
				if (entry->city.getCityCode() == key) {
					flag = true;
				}
				if (flag)
				{
					entry->display();
				}
				entry = entry->next;
			}
		}
		if (!flag)
			cout << "No Element found at Id: " << key << endl;
	}

	void Modify()
	{
		int key;
		int b_cityCode;
		string b_name;
		string b_country;

		City update_City;
		cout << "Enter City Code You want to modify:  ";
		cin >> key;

		int hashVal = hashFunction(key);
		City_Node* entry = hashTable[hashVal];

		if (entry == NULL || entry->city.getCityCode() != key)
		{
			cout << "Couldn't find any element at this Id " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL)
		{
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
			entry = entry->next;
		}

		cout << "\nEnter the new data to update the old data of City" << endl;
		cout << "Enter City Code:  ";
		cin >> b_cityCode;
		cin.ignore();
		cout << "Enter City Name:  ";
		cin >> b_name;
		cout << "Enter City Country:  ";
		cin >> b_country;

		update_City.setCityCode(b_cityCode);
		update_City.setName(b_name);
		update_City.setcountryName(b_country);
	}
};

struct FlyScheduling_Node
{
	FlyScheduling flyScheduling;
	FlyScheduling_Node* next;
	FlyScheduling_Node* prev;
	FlyScheduling_Node()
	{
		next = NULL;
		prev = NULL;
	}
	void display() {
		cout << "flight Number : " << flyScheduling.getflyNo() << endl;
		cout << "DateTime(24h) : " << flyScheduling.getdataTime() << endl;
		cout << "Departing city : " << flyScheduling.getdepartingCity() << endl;
		cout << "Destination city : " << flyScheduling.getdestinationCity() << endl;

	}
};
class FlyScheduling_List
{
private:
	FlyScheduling_Node** hashTable, ** top;
public:
	FlyScheduling_List()
	{
		hashTable = new FlyScheduling_Node * [tableSize];
		top = new FlyScheduling_Node * [tableSize];

		for (int i = 0; i < tableSize; i++)
		{
			hashTable[i] = NULL;
			top[i] = NULL;
		}
	}

	~FlyScheduling_List()
	{
		delete[] hashTable;
	}

	int hashFunction(int key)
	{
		return key % tableSize;
	}

	void Insert()
	{
		FlyScheduling fs;

		int f_flyNo;
		int f_dateTime;
		string f_departingCity;
		string f_destinationCity;

		cout << "\n\n  ************* \n";
		cout << "  \t\tInsert Menu\n";
		cout << "  *************\n";
		cout << "Enter FlyScheduling flight Number :  ";
		cin >> f_flyNo;
		cout << "Enter FlyScheduling DateTime(24h):  ";
		cin >> f_dateTime;
		cout << "Enter FlyScheduling Departing city:  ";
		cin >> f_departingCity;
		cout << "Enter FlyScheduling destination city:  ";
		cin >> f_destinationCity;
		fs.setflyNo(f_flyNo);
		fs.setdataTime(f_dateTime);
		fs.setdepartingCity(f_departingCity);
		fs.setdestinationCity(f_destinationCity);

		int hashVal = hashFunction(f_flyNo);
		FlyScheduling_Node* entry = hashTable[hashVal];

		if (entry == NULL)
		{
			// creating new node
			entry = new FlyScheduling_Node;
			entry->flyScheduling = fs;
			entry->next = NULL;
			entry->prev = NULL;
			hashTable[hashVal] = entry;
			top[hashVal] = entry;
		}

		else
		{
			// traversing till the end of 
			// the list 
			while (entry != NULL)
				entry = entry->next;

			// creating the new node
			entry = new FlyScheduling_Node;
			entry->flyScheduling = fs;
			entry->next = NULL;
			entry->prev = top[hashVal];
			top[hashVal]->next = entry;
			top[hashVal] = entry;
		}
		cout << "\nSuccessfully Inserted into HashTable..!\n\n";
	}

	void Display()
	{
		int count = 0;
		for (int i = 0; i < tableSize; i++)
		{
			FlyScheduling_Node* entry = hashTable[i];
			if (entry != NULL)
			{
				cout << "****FlySchedule Record at Table key: " << i << endl;
				while (entry != NULL)
				{
					entry->display();
					entry = entry->next;
				}
			}
		}
		cout << endl;
		if (count == 0)
			cout << "No Record exist..!" << endl;
	}

	void Remove()
	{
		int key;
		cout << "Enter FlySchedule Number You want to remove:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		FlyScheduling_Node* entry = hashTable[hashVal];
		if (entry == NULL || entry->flyScheduling.getflyNo() != key)
		{
			cout << "Couldn't find any element at this Id: " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL) {
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
			entry = entry->next;
		}
		cout << "\tSuccessfully Removed form Hash Table...!\n\n";
	};

	void Find()
	{
		int key;
		cout << "Enter Fly Number You want to find:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		bool flag = false;
		FlyScheduling_Node* entry = hashTable[hashVal];

		// if hashtable at that index has some 
		// values stored 
		if (entry != NULL)
		{
			while (entry != NULL) {
				if (entry->flyScheduling.getflyNo() == key) {
					flag = true;
				}
				if (flag)
				{
					entry->display();
				}
				entry = entry->next;
			}
		}
		if (!flag)
			cout << "No Element found at Id: " << key << endl;
	}

	void Modify()
	{
		int key;
		int x_flyNo;
		int x_dateTime;
		string x_departingCity;
		string x_destinationCity;

		FlyScheduling update_FlyScheduling;
		cout << "Enter City Code You want to modify:  ";
		cin >> key;

		int hashVal = hashFunction(key);
		FlyScheduling_Node* entry = hashTable[hashVal];

		if (entry == NULL || entry->flyScheduling.getflyNo() != key)
		{
			cout << "Couldn't find any element at this Id " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL)
		{
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
		}
		entry = entry->next;
		cout << "\nEnter the new data to update the old data of Passenger" << endl;
		cout << "Enter FlyScheduling flight number :  ";
		cin >> x_flyNo;
		cout << "Enter FlyScheduling dateTime(24h):  ";
		cin >> x_dateTime;
		cout << "\nEnter FlyScheduling departing city :  ";
		cin >> x_departingCity;
		cout << "\nEnter FlyScheduling destination city :  ";
		cin >> x_destinationCity;

		update_FlyScheduling.setflyNo(x_flyNo);
		update_FlyScheduling.setdataTime(x_dateTime);
		update_FlyScheduling.setdepartingCity(x_departingCity);
		update_FlyScheduling.setdestinationCity(x_destinationCity);
	}
};

struct Flyingbooking_Node
{
	FlyingBooking flyingBooking;
	Passenger passenger;
	Flyingbooking_Node* next;
	Flyingbooking_Node* prev;

	Flyingbooking_Node()
	{
		next = NULL;
		prev = NULL;
	}
	void display()
	{
		cout << "FlyNo: " << flyingBooking.getflyNo() << endl;
		cout << "BookingRef : " << flyingBooking.getBookingRef() << endl;
		cout << "passenger name :" << passenger.getName() << endl;;
		cout << "passenger id :" << passenger.getId() << endl;
		cout << "passenger contactinfo :" << passenger.getContactInfo() << endl;
		cout << "passenger BookingRef :" << passenger.getBookingRef() << endl;
		cout << "date time : " << flyingBooking.getdataTime() << endl;
		cout << "departing city : " << flyingBooking.getdepartingCity() << endl;
		cout << "destination city : " << flyingBooking.getdestinationCity() << endl;
	}
};
class Flyingbooking_List
{
private:
	Flyingbooking_Node** hashTable, ** top;
public:
	Flyingbooking_List()
	{
		hashTable = new Flyingbooking_Node * [tableSize];
		top = new Flyingbooking_Node * [tableSize];

		for (int i = 0; i < tableSize; i++)
		{
			hashTable[i] = NULL;
			top[i] = NULL;
		}
	}

	~Flyingbooking_List()
	{
		delete[] hashTable;
	}

	int hashFunction(int key)
	{
		return key % tableSize;
	}

	void Insert()
	{
		FlyingBooking fb;
		Passenger pp;
		int fb_flyNo;
		string fb_bookingRef;
		string pp_Name;
		long int  pp_ID;
		string pp_contactInfo;
		string pp_bookingRef;
		int fb_DataTime;
		string fb_departingCity;
		string fb_destinationCity;

		cout << "\n\n  ************* \n";
		cout << "  \t\tInsert Menu\n";
		cout << "  *************\n";
		cout << "Enter FlyingBooking Flight Number :  ";
		cin >> fb_flyNo;
		cout << "Enter FlyingBooking BookingRef :  ";
		cin >> fb_bookingRef;
		cout << "Enter FlyingBooking DateTime(24h) :  ";
		cin >> fb_DataTime;
		cout << "Enter FlyingBooking departing city :  ";
		cin >> fb_departingCity;
		cout << "Enter FlyingBooking destination city:  ";
		cin >> fb_destinationCity;
		cout << "Enter passenger name :  ";
		cin >> pp_Name;
		cout << "Enter passenger name ID:  ";
		cin >> pp_ID;
		cout << "Enter passenger contact info :  ";
		cin >> pp_contactInfo;
		cout << "Enter passenger bookingRef :  ";
		cin >> pp_bookingRef;

		fb.setflyNo(fb_flyNo);
		fb.setBookingRef(fb_bookingRef);
		fb.setdataTime(fb_DataTime);
		fb.setdepartingCity(fb_departingCity);
		fb.setdestinationCity(fb_destinationCity);
		pp.setId(pp_ID);
		pp.setName(pp_Name);
		pp.setBookingRef(pp_bookingRef);
		pp.setContactInfo(pp_contactInfo);

		int hashVal = hashFunction(fb_flyNo);
		Flyingbooking_Node* entry = hashTable[hashVal];

		if (entry == NULL)
		{
			// creating new node
			entry = new Flyingbooking_Node;
			entry->flyingBooking = fb;
			entry->next = NULL;
			entry->prev = NULL;
			hashTable[hashVal] = entry;
			top[hashVal] = entry;
		}

		else
		{
			// traversing till the end of 
			// the list 
			while (entry != NULL)
				entry = entry->next;

			// creating the new node
			entry = new Flyingbooking_Node;
			entry->flyingBooking = fb;
			entry->next = NULL;
			entry->prev = top[hashVal];
			top[hashVal]->next = entry;
			top[hashVal] = entry;
		}
		cout << "\nSuccessfully Inserted into HashTable..!\n\n";
	}

	void Display()
	{
		int count = 0;
		for (int i = 0; i < tableSize; i++)
		{
			Flyingbooking_Node* entry = hashTable[i];
			if (entry != NULL)
			{
				cout << "****FlyBooking Record at Table key: " << i << endl;
				while (entry != NULL)
				{
					entry->display();
					entry = entry->next;
				}
			}
		}
		cout << endl;
		if (count == 0)
			cout << "No Record exist..!" << endl;
	}

	void Remove()
	{
		int key;
		cout << "Enter FlyingBooking Number You want to remove:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		Flyingbooking_Node* entry = hashTable[hashVal];
		if (entry == NULL || entry->flyingBooking.getflyNo() != key)
		{
			cout << "Couldn't find any element at this Id: " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL) {
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
			entry = entry->next;
		}
		cout << "\tSuccessfully Removed form Hash Table...!\n\n";
	}

	void Find()
	{
		int key;
		cout << "Enter Fly Number You want to find:  ";
		cin >> key;

		// Applying hashFunc to find 
		// index for given key 
		int hashVal = hashFunction(key);
		bool flag = false;
		Flyingbooking_Node* entry = hashTable[hashVal];

		// if hashtable at that index has some 
		// values stored 
		if (entry != NULL)
		{
			while (entry != NULL) {
				if (entry->flyingBooking.getflyNo() == key) {
					flag = true;
				}
				if (flag)
				{
					entry->display();
				}
				entry = entry->next;
			}
		}
		if (!flag)
			cout << "No Element found at Id: " << key << endl;
	}

	void Modify()
	{
		int key;
		int m_fb_flyNo;
		string m_fb_bookingRef;
		string m_pp_Name;
		long int  m_pp_ID;
		string m_pp_contactInfo;
		string m_pp_bookingRef;
		int m_fb_DataTime;
		string m_fb_departingCity;
		string m_fb_destinationCity;
		FlyingBooking update_FlyingBooking;

		Passenger update_passenger;
		cout << "Enter Fly Number You want to modify:  ";
		cin >> key;

		int hashVal = hashFunction(key);
		Flyingbooking_Node* entry = hashTable[hashVal];

		if (entry == NULL || entry->flyingBooking.getflyNo() != key)
		{
			cout << "Couldn't find any element at this Id " << key << endl;
		}

		// if some values are present at that key & 
		// traversing the list and removing all values 
		while (entry != NULL)
		{
			if (entry->next == NULL)
			{
				if (entry->prev == NULL)
				{
					hashTable[hashVal] = NULL;
					top[hashVal] = NULL;
					delete entry;
					break;
				}
				else
				{
					top[hashVal] = entry->prev;
					top[hashVal]->next = NULL;
					delete entry;
					entry = top[hashVal];
				}
			}
		}
		cout << "\nEnter the new data to update the old data of Flying Booking" << endl;
		cout << "\nEnter FlyingBooking flight number:  ";
		cin >> m_fb_flyNo;
		cout << "\nEnter FlyingBooking bookingRef :  ";
		cin >> m_fb_bookingRef;
		cout << "\nEnter FlyingBooking DateTime(24h) :  ";
		cin >> m_fb_DataTime;
		cout << "\nEnter FlyingBooking Departing city :  ";
		cin >> m_fb_departingCity;
		cout << "\nEnter FlyingBooking destanation city :  ";
		cin >> m_fb_destinationCity;
		cout << "\nEnter the new data to update the old data of passenger" << endl;
		cout << "\nEnter passenger's name :  ";
		cin >> m_pp_Name;
		cout << "\nEnter passenger's ID	";
		cin >> m_pp_ID;
		cout << "\nEnter passenger's contact info :  ";
		cin >> m_pp_contactInfo;
		cout << "\nEnter passenger's BookinRef :  ";
		cin >> m_pp_bookingRef;

		update_FlyingBooking.setflyNo(m_fb_flyNo);
		update_FlyingBooking.setBookingRef(m_fb_bookingRef);
		update_FlyingBooking.setdataTime(m_fb_DataTime);
		update_FlyingBooking.setdepartingCity(m_fb_departingCity);
		update_FlyingBooking.setdestinationCity(m_fb_destinationCity);
		update_passenger.setName(m_pp_Name);
		update_passenger.setId(m_pp_ID);
		update_passenger.setContactInfo(m_pp_contactInfo);
		update_passenger.setBookingRef(m_pp_bookingRef);
		//flyingBooking = update_FlyingBooking;
		//passenger = update_passenger;
		cout << "\nSuccessfully Modified...!\n\n";

	}
};


char subMenu();

int main() {
	Passenger_List p;
	Flyingbooking_List pt;
	Citys_List bk;
	FlyScheduling_List fs;

	int a;
	char ch;
	while (1) {
		cout << " \t \t      Airline Company \t\n";
		cout << "\t\t\t MAIN MENU \n\n";
		cout << "1. Passenger " << endl << endl;
		cout << "2. City " << endl << endl;
		cout << "3. Fly Scheduel" << endl << endl;
		cout << "4. Fly Booking " << endl << endl;


		cout << "Select your option (1-4): "; cin >> a;
		cout << endl << endl;
		switch (a)
		{
		case 1:
			ch = subMenu();
			if (ch == 'd')
				p.Display();
			else if (ch == 'i')
				p.Insert();
			else if (ch == 'r')
				p.Remove();
			else if (ch == 'm')
				p.Modify();
			else if (ch == 'f')
				p.Find();
			break;

		case 2:
			ch = subMenu();
			if (ch == 'd')
				bk.Display();
			else if (ch == 'i')
				bk.Insert();
			else if (ch == 'r')
				bk.Remove();
			else if (ch == 'm')
				bk.Modify();
			else if (ch == 'f')
				bk.Find();
			break;

		case 3:
			ch = subMenu();
			if (ch == 'd')
				fs.Display();
			else if (ch == 'i')
				fs.Insert();
			else if (ch == 'r')
				fs.Remove();
			else if (ch == 'm')
				fs.Modify();
			else if (ch == 'f')
				fs.Find();
			break;

		case 4:
			ch = subMenu();
			if (ch == 'd')
				pt.Display();
			else if (ch == 'i')
				pt.Insert();
			else if (ch == 'r')
				pt.Remove();
			else if (ch == 'm')
				pt.Modify();
			else if (ch == 'f')
				pt.Find();
			break;

		default:
			cout << " Please Enter Value Form 1 to 4" << endl << endl;
			break;
		}

	}




	return 0;
}


char subMenu() {
	char a;
	cout << " \t \t      Airline Company \t\n";
	cout << "\t\t\t Sub_MENU \n\n";
	cout << "(d) Display" << endl << endl;
	cout << "(i) Insert" << endl << endl;
	cout << "(r) Remove" << endl << endl;
	cout << "(m) Modify" << endl << endl;
	cout << "(f) Find" << endl << endl;

	cout << "Select your option (above): "; cin >> a;
	return a;
}