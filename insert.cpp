#include<bits/stdc++.h>
#include<fstream>
#include<cstdio>
#include<string.h>
#include "insert.h"

using namespace std;

class person
{
    int age;
    char gender,prof[50],locality[50];
    public:
        void setData() //Takes in user data
        {
            cout << "\nEnter your Age: ";
            cin >> age;
            cout << "Enter your Gender(M/F): ";
            cin>>gender;
	        cout<<"Enter your Profession: ";
	        cin>>prof;
            cout<<"Enter your Locality: ";
            cin>>locality;
        }

        void showData()
        {
            cout << "\nAge : " << age;
            cout << "\nGender : " << gender;
	        cout << "\nProfession : " << prof;
            cout << "\nLocality : " << locality;
        }

        string local()
        {
            return locality;
        }
};

void write_record()
{
    ofstream outFile;
    outFile.open("h.dat", ios::binary | ios::app);

    person obj;
    obj.setData();

    outFile.write((char*)&obj, sizeof(obj));

    outFile.close();
};
