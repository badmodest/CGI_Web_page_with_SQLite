#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string> 
#include <string.h> 
#include <CgiDefs.h> 
//#include <unistd.h> 

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
    cout << "<meta name = \"viewport\" content = \"width=device-width, initial-scale=1, shrink-to-fit=no, charset=\"UTF-8\"/>\n";
   // cout << "<link rel = \"stylesheet\" href = \"styles/mystyle.css\">\n";
    //cout << "<link rel = \"icon\" type = \"image/png\" href = \"/cgi-bin/images/favicon.png\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.googleapis.com\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.gstatic.com\" crossorigin>\n";
    cout << "<link href = \"https://fonts.googleapis.com/css2?family=Roboto&display=swap\" rel = \"stylesheet\">\n";
    cout << "<link rel = \"stylesheet\" href = \"https://use.fontawesome.com/releases/v5.2.0/css/all.css\" integrity = \"sha384-hWVjflwFxL6sNzntih27bfxkr27PmbbK/iSvJ+a4+0owXq79v+lsFkW54bOGbiDQ\" crossorigin = \"anonymous\" type = \"text/css\">\n";
    cout << "<title>Онлайн СТО</title>\n";
    cout << "</head>\n";
    cout << "<header>\n";
        cout << "<div class = \"container\">\n";
        cout << "<section class = \"grid hero\">\n";
        cout << "<div class = \"colxs colmd\">\n";
        cout << "<div class = \"imh\">\n";
        cout << "<div class = \"imb\"></div>\n";
        cout << "<img src = \"https://www.meme-arsenal.com/memes/9fd8efacc89ad1cbbe3eae1d93332e2c.jpg\">\n";
        cout << "</div>\n";
        cout << "</div>\n";

    
    try {
        int sqlite3_prepare(
            sqlite3* mDb,        
            sqlite3_stmt** mQuery
        );

        int nb;
        SQLite::Database db("exampl.db", SQLite::OPEN_READWRITE);
        SQLite::Statement   query(db, "SELECT * FROM test5 ");
 
        cout << "<div class = \"colxs colmd\">\n";
        cout << "<div class = \"intro\">\n";
        cout << "<h1>Онлайн СТО</h1>\n";
        cout << "<br>";
        cout << "<br>";
        cout << "<a class = \"buttton\" href = \"#menu-section\">До каталогу</a>\n";
        cout << "<a class = \"buttton\" href = \"table.exe\">Перейти до каталогу у виглядi таблицi</a>\n";
        cout << "<br>";
        cout << "<br>";
        cout << "<br>";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</header>\n";
        cout << "<main id = \"menu-section\">\n";
        cout << "<div class = \"container\">\n";
        cout << "<section class = \"gridm\">\n";
        cout << "<div class = \"colxs\">\n";
        cout << "<h2>Меню</h2>\n";
        cout << "<section class = \"gridml\">\n";
        cout << "<div class = \"colxs\">\n";
        cout << "<h3>                  </h3>\n";
        cout << "</div>\n";
        cout << "<div class = \"colxs colmd4\">\n";


        while (query.executeStep())
        {


            int         id = query.getColumn(0);
            const char* name = query.getColumn(1);
            const char* desc = query.getColumn(2);

           // cout << "<a text-decoration:none; href = \"/cgi-bin/info_test.exe?";
            //cout << id;
            //cout << "\">";
            //cout << name;
            //cout << "</a>\n";
            cout << "<a href = \"/cgi-bin/info_test.exe?";
            cout << id;
            cout << "\"class = \"buttton\">";
                cout << name;
                cout << "<i class = \"ion-navicon-round\"></i></a>\n";
              //  cout << "<br>";
           // cout << "<p>";
           // cout << desc;
           // cout << "</p>\n";
           // cout << "</div>\n";

            /*
            cout << "<br>";
            cout << "<td>";
            
            cout << "</td>\n";
            cout << "<br>";
            cout << "<td>";
            cout << "<a text-decoration:none; href = \"/cgi-bin/info.exe?";
            cout << id;
            cout << "\">деталi</a></td>\n";
            cout << "</td>\n";
            cout << "<br>";
            cout << "</tr>\n";
*/
 
        }

    }
    catch (std::exception& e) {
        cout << "<p href = \"/cgi-bin/index_test.exe";
    
        cout << "\">Натиснiть щоб повторити спробу та перейти на головну. Помилка: ";
            cout << e.what();
        cout << "</p>\n";
        

        //std::cout << "SQLite exception:" << e.what() << std::endl;
    }
  
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</main>\n";
        cout << "<footer>\n";
        cout << "<div class = \"container\">\n";
        cout << "<section class = \"grid\">\n";
        cout << "<div class = \"colxs\">\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</footer>\n";
   cout << "<style>\
       @import url('https://fonts.googleapis.com/css?family=Montserrat:400,700|Montserrat:400,700');\
#fff:#fff;\
#CCC:#CCC;\
linear-gradient(-45deg, #10111F, #1f1f1f):linear-gradient(-45deg, #10111F, #1f1f1f);\
#CCC:#CCC;\
#2D2E2B:#2D2E2B;\
   * {\
       box-sizing:border-box;\
       &::before, &::after{\
         box-sizing:border-box;\
       }\
   }\
   body{\
     font-family:'Montserrat', sans-serif;\
     font-size:1rem;\
     font-weight:400;\
     line-height:1.6;\
     margin:0;\
     padding:0;\
     color:#CCC;\
     background:linear-gradient(-45deg, #10111F, #1f1f1f);\
     text-rendering:optimizeLegibility;\
 border:none;\
                                    border-radius:25px;\
   }\
       h1, h2, h3, h4, p{\
         font-family:'Catamaran', sans-serif;\
         color:#CCC;\
   }\
       h2, h3{\
         color:#CCC;\
         font-weight:400;\
         letter-spacing:0.125rem;\
         text-transform:lowercase;\
   }\
       h1{\
         font-size:2rem;\
         font-weight:700;\
         margin:0;\
   }\
       h2{\
         font-size:1.85rem;\
         margin:0 0-0.75rem 0;\
   }\
       h3{\
         font-size:1.625rem;\
         margin:1rem 0;\
         border-bottom:0.125rem solid #CCC;\
   }\
       h4, p{\
         font-size:1.325rem;\
         margin:1rem 0;\
   }\
       .intro{\
         width:100 %;\
         margin:1rem 0 2rem 0;\
   }\
       a{\
         text-decoration:none;\
   }\
a:link {\
color: #B5B5B5;\
}\
a:visited{\
  color: #CEAEEB;\
}\
       .main-button{\
         font-size:1rem;\
         font-weight:700;\
         padding:1rem 1.325rem;\
         border:0;\
         color:#fff;\
         background:#2D2E2B;\
         transition:all 0.3s ease;\
         &:hover {\
           background:#CCC;\
         }\
   }\
       .lead{\
         font-size:1rem;\
         margin:1rem 0 3rem 0;\
         }\
             .container{\
               margin:auto;\
               padding:0 1rem;\
               max-width:82rem;\
               width:100 %;\
         }\
 .buttton{\
                     display:inline-block;\
                                    background:#2D2E2B;\
                                    color:linear-gradient(-45deg, #10111F, #1f1f1f);\
                                    border:none;\
                                    border-radius:25px;\
                                    padding:1.25rem 2.5rem;\
                                    font-size:1.25rem;\
                                    text-transform:uppercase;\
                                    margin-top:10px;\
                                    margin-bottom:10px;\
                                    cursor:pointer;\
                                    transform:translateZ(1);\
                                    transition:color 0.3s ease;\
                                    letter-spacing:0.0625rem;\
                                    &:hover {\
                                      &::before {\
                                        transform:scaleX(0);\
                                      }\
                                    }\
             header{\
               background:linear-gradient(-8deg, linear-gradient(-45deg, #10111F, #1f1f1f) 0 %, linear-gradient(-45deg, #10111F, #1f1f1f) 50 %, #fff 50 %, #fff 50 %);\
         }\
             main{\
               padding:0 0 3rem 0;\
         }\
             .grid{\
               > [class*=\"column-\"]\
   {\
                 padding:1rem;\
               }\
               .menu-list {\
                 margin:0 0 1.5rem 0;\
                 padding:0 1rem 2rem 1rem;\
                 background:#fff;\
                 > div {\
                   &:nth-child(1) {\
                     padding:0.5rem 1rem;\
                   }\
                   &:not(:nth-child(1)) {\
                     padding:0 1rem;\
                   }\
                 }\
               }\
         }\
             .hero{\
               height:100 %;\
               align-content:center;\
               align-items:center;\
               justify-content:center;\
               > div:nth-of-type(1) {\
                 order:1;\
               }\
                 }\
                     section{\
                       display:block;\
                 }\
                     img{\
                         width:100 %;\
                       height:25rem;\
                         object-fit:cover;\
 border:none;\
                                    border-radius:25px;\
                 }\
                     .imh{\
                       position:relative;\
                       .imb {\
                         position:absolute;\
                         z-index:1;\
                         display:block;\
                         top:0;\
                         bottom:0;\
                         left:0;\
                         right:0;\
                         width:100 %;\
                         height:25rem;\
                         background:#CCC;\
 border:none;\
                                    border-radius:25px;\
                       }\
                       img {\
                         opacity:0;\
                         animation:hideItem 0s 0.5s forwards;\
 border:none;\
                                    border-radius:25px;\
                       }\
                 }\
                     footer{\
                       text-align:center;\
                       background:#CCC;\
                       }\
                           @media(min-width:$md) {\
                           body{\
                             font-size:1.125rem;\
                           }\
                               header{\
                                 background:linear-gradient(-8deg, linear-gradient(-45deg, #10111F, #1f1f1f) 0 %, linear-gradient(-45deg, #10111F, #1f1f1f) 25 %, #fff 25 %, #fff 25 %);\
                           }\
                               .hero{\
                                 height:100vh;\
                                 > div:nth-of-type(1) {\
                                   order:0;\
                                 }\
                           }\
                               .intro{\
                                 width:80 %;\
                                 margin:auto;\
                           }\
                               .main-button{\
                                 font-size:1.125rem;\
                           }\
                               h1{\
                                 font-size:3.125rem;\
                           }\
                               .lead{\
                                 font-size:1.25rem;\
                           }\
                               h2{\
                                 font-size:2.75rem;\
                                 margin:0 0-1.125rem 0;\
                           }\
                               h3{\
                                 font-size:2.25rem;\
                           }\
                               h4{\
                                 font-size:1.5rem;\
                           }\
                               img{\
                                 height:75vh;\
                           }\
                               .imh{\
                                 .imb {\
                                   height:75vh;\
                                 }\
                           }\
                       }\
      </style>\n";
    cout << "</html>\n";

   

return 0; 
};

