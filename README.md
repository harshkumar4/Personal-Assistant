# Personal-Assistant Application
C++ text to speech application which acts as a personal assistant. 

Firstly one must download and install espeak [speech synthesizer](http://espeak.sourceforge.net/download.html). 
Now the espeak.exe application must be placed in the same folder with the C++ application.

If you need to listen to the speech, then you must include these 4 lines of code:

```string phrase = "whatever message you want to listen to";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
```

To open any file format in the system, then command is:
```
ShellExecute(NULL,"open","file path",NULL, NULL, SW_NORMAL);
```

Note: In file path, please put two `\\` wherever there is one `\`

To open a browser:
```
system("start url of browser");
```
Example:
```
system("start https://www.youtube.com");
```

To open `.exe` files such as MS Word, Paint, Excel, Notepad..., use :
```
CreateProcess(TEXT("file path"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
```

**You can also add some additional features, 
send pull request if your features seems usefull then will be merged into main branch**


