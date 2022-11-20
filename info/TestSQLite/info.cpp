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
    background: linear-gradient(-45deg, #FFAFBD, #ffc3a0);\
    background-size: 111% 111%;\
    animation: gradient 15s ease infinite;\
    font - family: 'Montserrat', sans - serif;\
    color: #000;\
    line - height: 1.3;\
    justify - content: center;\
    text - align: center;\
    -webkit - font - smoothing: antialiased;\
    overflow - x: hidden;\
    }\
0 % { background - position: 0 % 50 %; }\
50 % { background - position: 100 % 50 %;}\
100 % { background - position: 0 % 50 %; }\
</style>\n";
    cout << "<hr style = \"width: 100%; background-color: #E83951; border-color: #E83951;\">\n";
    cout << "<p style = \"font-family: 'segoe ui', helvetica; font-weight: 15; font-size:32px; align=\"left\" color: black; href = \"/cgi-bin/index.exe\" \">Каталог автозапчастин</p> \n";
    cout << "<a href = \"/cgi-bin/index.exe\">На головну</a></td>\n";
    cout << "<hr style = \"width: 100%; background-color: #E83951; border-color: #E83951;\">\n";

   // cout << "<h1 class=\"intro\">Каталог автозапчастин </h1>\n";
    cout << "<p style = \"font-family: 'segoe ui', helvetica; font-weight: 5; font-size:22px; align=\"left\" color: black; class=\"intro\">Каталог загальний</p>\n";
    cout << "<table class = \"fixed_headers\">\n";
    cout << "<thead>\n";
    cout << "<tr>\n";
    cout << "<th>Name</th>\n";
    cout << "<th>Color</th>\n";
    cout << "<th>Description</th>\n";
    cout << "</tr>\n";
    cout << "</thead>\n";
    cout << "<tbody>\n";
    cout << "<tr>\n";
    cout << "<td>Apple</td>\n";
    cout << "<td>Red</td>\n";
    cout << "<td>These are red.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Pear</td>\n";
    cout << "<td>Green</td>\n";
    cout << "<td>These are green.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Grape</td>\n";
    cout << "<td>Purple / Green</td>\n";
    cout << "<td>These are purple and green.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Orange</td>\n";
    cout << "<td>Orange</td>\n";
    cout << "<td>These are orange.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Banana</td>\n";
    cout << "<td>Yellow</td>\n";
    cout << "<td>These are yellow.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Kiwi</td>\n";
    cout << "<td>Green</td>\n";
    cout << "<td>These are green.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Plum</td>\n";
    cout << "<td>Purple</td>\n";
    cout << "<td>These are Purple</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Watermelon</td>\n";
    cout << "<td>Red</td>\n";
    cout << "<td>These are red.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Tomato</td>\n";
    cout << "<td>Red</td>\n";
    cout << "<td>These are red.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Cherry</td>\n";
    cout << "<td>Red</td>\n";
    cout << "<td>These are red.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Cantelope</td>\n";
    cout << "<td>Orange</td>\n";
    cout << "<td>These are orange inside.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Honeydew</td>\n";
    cout << "<td>Green</td>\n";
    cout << "<td>These are green inside.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Papaya</td>\n";
    cout << "<td>Green</td>\n";
    cout << "<td>These are green.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Raspberry</td>\n";
    cout << "<td>Red</td>\n";
    cout << "<td>These are red.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Blueberry</td>\n";
    cout << "<td>Blue</td>\n";
    cout << "<td>These are blue.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Mango</td>\n";
    cout << "<td>Orange</td>\n";
    cout << "<td>These are orange.</td>\n";
    cout << "</tr>\n";
    cout << "<tr>\n";
    cout << "<td>Passion Fruit</td>\n";
    cout << "<td>Green</td>\n";
    cout << "<td>These are green.</td>\n";
    cout << "</tr>\n";
    cout << "</tbody>\n";
    cout << "<style type = \"text/css\">\
\
@header_background_color: #333;\
@header_text_color: #FDFDFD;\
    @alternate_row_background_color: #DDD;\
    @table_width: 750px;\
    @table_body_height: 300px;\
    @column_one_width: 200px;\
    @column_two_width: 200px;\
    @column_three_width: 350px;\
\
    .fixed_headers{\
      width: @table_width;\
      table - layout: fixed;\
      border - collapse: collapse;\
\
      th { text - decoration: underline; }\
      th, td {\
        padding: 11px;\
        text - align: center;\
      }\
\
      td:nth - child(1), th : nth - child(1) { min - width: @column_one_width; }\
      td:nth - child(2), th : nth - child(2) { min - width: @column_two_width; }\
      td:nth - child(3), th : nth - child(3) { width: @column_three_width; }\
\
      thead {\
        background - color: @header_background_color;\
        color: @header_text_color;\
        tr {\
          display: block;\
          position: relative;\
        }\
      }\
      tbody {\
        display: block;\
        overflow: auto;\
        width: 100 %;\
        height: @table_body_height;\
        tr:nth - child(even) {\
          background - color: @alternate_row_background_color;\
        }\
      }\
    }\
\
        .old_ie_wrapper{\
          height: @table_body_height;\
          width: @table_width;\
          overflow - x: hidden;\
          overflow - y: auto;\
          tbody { height: auto; }\
      }\
        </style>\n";
    cout << "</table>\n";


    /*

    try {

        SQLite::Database db("test.sqlite3", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);

        std::cout << "SQLite database file '" << db.getFilename().c_str() << "' opened successfully\n";

       // db.exec("CREATE TABLE test4 (id INTEGER PRIMARY KEY, name TEXT)");

        int nb = db.exec("INSERT INTO test4 VALUES (1, \"Igor\")");

        std::cout << "Insert 1 row, returned " << nb << std::endl;

        SQLite::Statement query(db, "SELECT * FROM test4");

        //std::cout << "Records from table people:" << std::endl;

        while (query.executeStep())
        {
         
            
            //cout << "Content-Type: text/html; charset=UTF-8\n\n";
            std::cout << "row (" << query.getColumn(0) << ", \"" << query.getColumn(1) << "\")" << std::endl;

        }

    }
    catch (std::exception& e) {

        std::cout << "SQLite exception: " << e.what() << std::endl;

        return EXIT_FAILURE;
    } */
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
  background: #cdb3d5;\
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
