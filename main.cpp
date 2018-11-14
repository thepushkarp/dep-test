#include<bits/stdc++.h>
#include<fstream>
#include"Dep.h"
#include"Recomm.h"
#include"show.h"
#include"insert.h"
#include"colour.h"

using namespace std;

int main()
{
    cout<<TXT_B_RED<<"DEPRESSION "<<TXT_B_GREEN<<"TESTER"<<RESET<<"\n\n";
    int choice;
    cout<<"Enter any one option from the following:\n\n";
    cout<<"1. Run Depression Tester\n";
    cout<<"2. View Records\n";
    cout<<"3. Delete Record\n";
    cout<<"4. View About Section and Disclaimer\n";
    cout<<"\n To exit program, enter 0.\n";
    switch(choice)
    {
        case 0: {
                    void exit(void);
                }
        case 1: {
                    system("clear");
                    write_record();
                    Dep();
                    Recomm();
                    break;
                }

        case 2: {
                    system("clear");
                    display();
                    break;
                }
        
        case 3: {
                    system("clear");
                    cout<<"This feature is still in development.\n";
                    break;
                }

        case 4: {
                    system("clear");
                     /*cout<<"Disclaimer: "<<TXT_B_WHITE<<"The information provided ";
                    cout<<"in this software is intended for general information only and is not legal advice or other professional advice. ";
                    cout<<"Any opinions expressed in this material do not necessarily represent the views of the Copyright Agency.";
                    cout<<"While care and consideration has been taken in the creation of the material on this website, we do not warrant, ";
                    cout<<"represent or guarantee that the material published on this website is in all respects accurate, complete and current. ";
                    cout<<"To the extent permitted by law, we exclude any liability, including any liability for negligence, for any loss or ";
                    cout<<"damage arising from reliance on material on this website."<<RESET;*/
                    break;
                }
        
        default: {
                    cout<<"Oops! You entered the wrong input.\n";
                    cout<<"Restarting the application";
                    main();

                 }
    }


    return 0;
}