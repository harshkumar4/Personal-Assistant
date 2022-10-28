#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to greet the user according to time
void greetings(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Master TUSHAR"<<endl;
        string phrase = "Good Morning Master TUSHAR";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Master TUSHAR"<<endl;
        string phrase = "Good Afternoon Master TUSHAR";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Master TUSHAR"<<endl;
        string phrase = "Good Evening Master TUSHAR";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()
{
    system("cls");

    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        cout<<"************************************************************"<<endl;
        cout<<"| ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER TUSHAR GUPTA|"<<endl;
        cout<<"************************************************************"<<endl<<endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE TUSHAR GUPTA";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password=="TUSHAR" ||password=="tushar")
        {
            cout<<"\n<**************************************************************************************************>\n\n";
            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n\n";
                cout<<endl<<"How can i help you Tushar sir...."<<endl<<endl;

                string phrase = "How can i help you Tushar sir";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Answer to your question is ===> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello TUSHAR GUPTA....."<<endl;
                    string phrase = "Hello Tushar Gupta";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the time")
                {

                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    cout<<"I'm a personal assistant created by TUSHAR GUPTA !!!"<<endl;
                    string phrase = "I'm a personal assistant created by  TUSHAR GUPTA !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open notepad")
                {
                    cout<<"openining notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.WindowsNotepad_11.2207.11.0_x64__8wekyb3d8bbwe\\Notepad\\Notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }



                else if(command=="open Microsoft Excel")
                {
                    cout<<"opening Microsoft Excel"<<endl;
                    string phrase = "opening Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Word")
                {
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Paint_11.2206.6.0_x64__8wekyb3d8bbwe\\PaintApp\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }



                else if(command=="open google")
                {
                    cout<<"openining google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                else if(command=="open my linkedin")
                {
                    cout<<"openining your linkedin"<<endl;
                    string phrase = "opening tushar's linkedin";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.linkedin.com/in/tushar-gupta-12b284214/");
                }
                else if(command=="open facebook")
                {
                    cout<<"openining facebook"<<endl;
                    string phrase = "opening facebook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.facebook.com");
                }

                else if(command=="open instagram")
                {
                    cout<<"openining Instagram"<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }

                else if(command=="close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open photo")
                {
                    cout<<"opening photo"<<endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","TUSHARGUPTA.png",NULL, NULL, SW_NORMAL);
                }




                else if(command=="open video")
                {
                    cout<<"opening video"<<endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Users\\rajiv\\Documents\\Zoom\\edit distance.mp4",NULL, NULL, SW_NORMAL);
                }

                else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye Master TUSHAR, see you soon!"<<endl;
                    string phrase = "Good Bye Master TUSHAR, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "**********************" << endl << endl;

                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);



    return 0;
}
