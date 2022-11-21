#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string> 
#include <string.h> 
#include <CgiDefs.h> 

#include <HTTPHTMLHeader.h> 
#include <HTMLClasses.h> 
#include <SQLiteCpp/SQLiteCpp.h>
using namespace cgicc;
using namespace std;

int main()
{    
   
    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<meta name = \"viewport\" content = \"width=device-width, initial-scale=1\"/>\n";
    cout << "<meta name = \"viewport\" content = \"width=device-width, initial-scale=1, shrink-to-fit=no, charset=\"UTF - 8\"/>\n";
    //cout << "<meta charset = \"UTF-8\">\n";
    cout << "<meta http - equiv = \"X-UA-Compatible\" content = \"IE=edge\">\n";
    cout << "<link rel = \"stylesheet\" href = \"../styles/mystyle.css\">\n";
    cout << "<link rel = \"stylesheet\" href = \"/styles/mystyle.css\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.googleapis.com\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.gstatic.com\" crossorigin>\n";
    cout << "<link href = \"https://fonts.googleapis.com/css2?family=Roboto&display=swap\" rel = \"stylesheet\">\n";
    cout << "<link rel = \"stylesheet\" href = \"https://use.fontawesome.com/releases/v5.2.0/css/all.css\" integrity = \"sha384-hWVjflwFxL6sNzntih27bfxkr27PmbbK/iSvJ+a4+0owXq79v+lsFkW54bOGbiDQ\" crossorigin = \"anonymous\" type = \"text/css\">\n";
    cout << "<title>Онлайн СТО</title>\n";

    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<style type = \"text/css\">\
    body{\
 background: linear-gradient(-45deg, #10111F, #1f1f1f);\
    background-size: 111% 111%;\
    animation: gradient 15s ease infinite;\
    font-family: 'Montserrat', sans - serif;\
    color: #FFF;\
    line-height: 1.3;\
    justify-content: center;\
    text-align: center;\
    -webkit-font-smoothing: antialiased;\
    overflow-x: hidden;\
    }\
    a{\
  color: #CCC !important;\
  text-decoration: none\
    }\
0 % { background-position: 0 % 50 %; }\
50 % { background-position: 100 % 50 %;}\
100 % { background-position: 0 % 50 %; }\
</style>\n";
    cout << "<hr style = \"width: 100%; background-color: #E83951; border-color: #E83951;\">\n";
    cout << "<p style = \"font-family: 'segoe ui', helvetica; font-weight: 15; font-size:32px; align=\"left\" color: black; href = \"/cgi-bin/index.exe\" \">Каталог автозапчастин</p> \n";
    cout << "<a href = \"/cgi-bin/index.exe\">На головну</a></td>\n";
    cout << "<hr style = \"width: 100%; background-color: #E83951; border-color: #E83951;\">\n";
    cout << "<p style = \"font-family: 'segoe ui', helvetica; font-weight: 5; font-size:22px; align=\"left\" color: black; class=\"intro\">Введення нового товару</p>\n";
    cout << "<div class = \"text-input\">\n";
    cout << "<h1>Курсовий проект</h1>\n";
    cout << "<br>\n";
    cout << "<h2>Cтудентiв групи 123-21ск-1</h2>\n";
    cout << "<br>\n";
    cout << "<h3>Голубицького Артема Сергiйовича</h3>\n";
    cout << "<br>\n";
    cout << "<h3>Череднiченко Олексiя Вiталiйовича</h3>\n";
    cout << "<br>\n";
    cout << "</div>\n";
    cout << "</body>\n";
    cout << "<footer class = \"footer\" >\n";
        cout << "<div class = \"waves\">\n";
        cout << "<div class = \"wave\" id = \"wave1\"></div>\n";
        cout << "<div class = \"wave\" id = \"wave2\"></div>\n";
        cout << "<div class = \"wave\" id = \"wave3\"></div>\n";
        cout << "<div class = \"wave\" id = \"wave4\"></div>\n";
        cout << "<div>\n";
        cout << "<ul class = \"menu\">\n";
        cout << "<li class = \"menu__item\"><a class = \"menu__link\" href = \"/cgi-bin/index.exe\">Home</a></li>\n";
        cout << "<li class = \"menu__item\"><a class = \"menu__link\" href = \"#\">About us</a></li>\n";
        cout << "<li class = \"menu__item\"><a class = \"menu__link\" href = \"/cgi-bin/test.exe\">Admin_test</a></li>\n";
        cout << "</ul>\n";
        cout << "<p style = \"opacity: 0.75;\">Made with 🤍 by peace_akame</p>\n";
        cout << "<style type = \"text/css\">\
        .footer{\
  position: relative;\
  background: linear-gradient(-45deg, #10111F, #1f1f1f);\
    background-size: 111% 111%;\
  min - height: 100px;\
  padding: 60px 50px;\
  display: flex;\
  justify - content: center;\
  align - items: center;\
  flex - direction: column;\
  margin - top:35 %;\
        }\
 </style > \n";
        cout << "</footer>\n";
    cout << "</html>\n";
           
   

return 0; 
};
