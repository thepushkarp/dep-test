#include<bits/stdc++.h>
#include<unistd.h>
#include<fstream>
#include"Dep.h"
#include"Recomm.h"
#include"show.h"
#include"insert.h"
#include"colour.h"

using namespace std;

int main()
{
    system("clear");
    cout<<TXT_B_RED<<"DEPRESSION TESTER"<<RESET<<"\n\n";
    int choice;
    cout<<TXT_B_WHITE;
    cout<<"Enter any one option from the following:\n\n";
    cout<<TXT_B_CYAN;
    cout<<"\t1. Run Depression Tester\n";
    cout<<"\t2. View Records\n";
    cout<<"\t3. Delete Record\n";
    cout<<"\t4. Disclaimer\n";
    cout<<"\t5. View Information About this Application\n";
    cout<<TXT_B_WHITE;
    cout<<"\nTo exit the application, enter 0.\n\n";
    cout<<RESET;
    cout<<"Enter your choice:"<<" ";
    cin>>choice;
    switch(choice)
    {
        case 0: {
                    void exit(void);
                    break;
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
                    //system("clear");
                    cout<<"\nThis feature is still in development.\n";
                    break;
                }

        case 4: {
                    //system("clear");
                     cout<<"\nThis feature is still in development.\n";
                     /*cout<<"Disclaimer: "<<TXT_B_WHITE<<"The information provided ";
                    cout<<"in this software is intended for general information only and is not legal advice or other professional advice. ";
                    cout<<"Any opinions expressed in this material do not necessarily represent the views of the Copyright Agency.";
                    cout<<"While care and consideration has been taken in the creation of the material on this website, we do not warrant, ";
                    cout<<"represent or guarantee that the material published on this website is in all respects accurate, complete and current. ";
                    cout<<"To the extent permitted by law, we exclude any liability, including any liability for negligence, for any loss or ";
                    cout<<"damage arising from reliance on material on this website."<<RESET;*/
                    break;
                }

        case 5: {
                    //system("clear");
                     cout<<"This feature is still in development.\n";
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
                    cout<<"Restarting the application in 3 seconds.\n";
                    sleep(3);
                    main();

                 }
    }


    return 0;
}