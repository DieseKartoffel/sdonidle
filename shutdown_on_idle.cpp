#include <iostream>
#include <windows.h>
#include <unistd.h>

    using namespace std;
    int main(int argc, char** argv) 
    {

        ::ShowWindow(::GetConsoleWindow(), SW_HIDE); //hide console

        int sec;
        int x;
        int y;

        if(argc==1){
            sec = 60*60*4; //4hours
        }else{
            sec = std::stoi(argv[1]);
        }

        while(true) {

            POINT p;
            if (GetCursorPos(&p))
            {
                //cursor position now in p.x and p.y
                x = p.x;
                y = p.y;
            }
            
            sleep(sec);

            if (GetCursorPos(&p))
            {
                if(x == p.x && y == p.y){
                    system("shutdown -s -f");  
                }
            }

        }
        
        return 0;
    }



