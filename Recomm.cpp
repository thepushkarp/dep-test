#include <bits/stdc++.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "Recomm.h"

using namespace std;

void Recomm()
{
    ifstream fin;
    fin.open("goldep.txt",ios::in |ios::binary);
    int sum;
    fin.seekg (0, ios::beg);
    fin>>sum;

    if(sum>=0 && sum<10) 
    {
        system("clear");
        cout<<"\nHallelujah! You are living the happiest life you can. There may be ups and downs, which are considered normal behaviour. Keep yourself engaged in doing things you love and never let that smile of yours fade away. :-). ";
    }
    else if(sum>=10 && sum<18)
    {
        system("clear");
        cout<<"\nYou are normally a cheerful person but may be susceptible to mild mood disturbances. These may be due to adolescence. Cultivating a hobby would do wonders in getting away from the negativities in life.";
    }
    else if(sum>=18 && sum<22)
    {
        system("clear");
        cout<<"\nYou contemplate a lot. Which is good for a healthy mind but overthinking over an event may make you feel low at times. Live in the moment and don't delve deep on issues of the past";
        cout<<"\n\nHere's a list of music you might be interested to listen to when you feel like escaping from reality:";
        cout<<"\n\n";
        system("echo '\e]8;;https://www.youtube.com/watch?v=5tepYJno7rU\\e\\Ain’t No Mountain High - Marvin Gaye\e]8;;\e\\'");
        system("echo '\e]8;;https://www.youtube.com/watch?v=dtgoDXEOxTM\\e\\Hall Of Fame - The Script ft. will.i.am\e]8;;\e\\'");
        system("echo '\e]8;;https://www.youtube.com/watch?v=VrTNXF741fE\\e\\This Song Saved My Life - Simple Plan\e]8;;\e\\'");
        system("echo '\e]8;;https://www.youtube.com/watch?v=vx2u5uUu3DE\\e\\It’s My Life - Bon Jovi\e]8;;\e\\'");
        cout<<"\n";
    }
    else if(sum>=22 && sum<36)
    {
        system("clear");
        cout<<"\nYou feel more than just blue. You are on the starting stages of Depression and your symptoms can go on for days and are noticeable enough to interfere with your usual activities.";
        cout<<"\nMaintaining a healthy body and mind would help you relax in times of anxiety. Try to get enough delay and impart important nutrients in your diet.";
        cout<<"\n\nTrying out Yoga poses from this website can help.";
        cout<<"\n\n";
        system("echo '\e]8;;https://www.yogajournal.com/poses/yoga-for-depression\\e\\Dissolve Depression\e]8;;\e\\'");
        cout<<"\n";
    }
    else if(sum>=36 && sum<54)
    {
        system("clear");
        cout<<"\nYou are having problems with self-esteem that is resulting in low productivity, increased sensitiveness and excessive worrying. You are in the region of Severe Depression.";
        cout<<"\nYou should see a therapist as soon as possible. Spend more time with friends and family and hit the Gym regularly. Drink lots of water and meditate on a daily basis.";
        cout<<"\n\nMeanwhile, here's a list of music you might be interested to listen to when you feel like really low:";
        cout<<"\n\n";
        system("echo '\e]8;;https://www.youtube.com/watch?v=UfcAVejslrU\\e\\Weightless - Marconi Union\e]8;;\e\\'");
        system("echo '\e]8;;https://www.youtube.com/watch?v=YbHZ8VVhb94\\e\\Electra - Airstream\e]8;;\e\\'");
        system("echo '\e]8;;https://www.youtube.com/watch?v=EcRXlM6edrM\\e\\Mellomaniac (Chillout Mix) - DJ Shah\e]8;;\e\\'");
        system("echo '\e]8;;https://www.youtube.com/watch?v=NO5tb20qQnA\\e\\Watermark - Enya\e]8;;\e\\'");
        cout<<"\n\n";
        cout<<"Also,here's a link for some Doctors you would want to visit in Gandhinagar.";
        cout<<"\n\n";
        system("echo '\e]8;;https://www.practo.com/gandhinagar/psychiatrist\\e\\Psychatrists in Gandhinagar\e]8;;\e\\'");
        cout<<"\n";
    }
    else if(sum>=54)
    {
        system("clear");
        cout<<"\nHelpline Number: 022 2754 6669";
        cout<<"\n\nYou may have experienced delusions, feelings of stupor, halucinations or suicidal thoughts before.";
        cout<<"\nYou are in dire need of Medical Thrapy as soon as possible. You should also spend more time with friends and family and do lots of physical activity.";
        cout<<"\n\nOnline an online chat room and councelling website:";
        cout<<"\n\n";
        system("echo '\e]8;;https://www.7cups.com\\e\\Online Therapy & Free Counseling\e]8;;\e\\'");
        cout<<"\n\nDoctors you would want to visit in Gandhinagar:";
        cout<<"\n\n";
        system("echo '\e]8;;https://www.practo.com/gandhinagar/psychiatrist\\e\\Psychatrists in Gandhinagar\e]8;;\e\\'");
        cout<<"\n";
    }    

    fin.close();

};