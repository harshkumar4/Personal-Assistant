# Personal-Assistant-application
C++ text to speech application which acts as a personal assistant. 

Firstly one must download and install espeak speech synthesizer. The link is:http://espeak.sourceforge.net/download.html
Now the espeak.exe application must be placed in the same folder where the c++ application is being stored.

If you need to listen to the speech, then you must include these 4 lines of code:

string phrase = "whatever message you want to listen to";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);

To open any file format in the system, then command is:
ShellExecute(NULL,"open","file path",NULL, NULL, SW_NORMAL);

Note: in file path, please put two \\ wherever there is one \

To open a browser:
system("start url of browser");
Example:
system("start https://www.youtube.com");

To open .exe files such as ms word,paint,excel notepad etc:
CreateProcess(TEXT("file path"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);

you can also add some additional featurs 
send pull request if your featurs seems usefull then will be merged into main branch


