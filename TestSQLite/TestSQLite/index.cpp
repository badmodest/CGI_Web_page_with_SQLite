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
    cout << "<meta name = \"viewport\" content = \"width=device-width, initial-scale=1, shrink-to-fit=no, charset=\"UTF - 8\"/>\n";
    cout << "<link rel = \"stylesheet\" href = \"styles/mystyle.css\">\n";
    cout << "<link rel = \"icon\" type = \"image/png\" href = \"/cgi-bin/images/favicon.png\">\n";
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
    font-family: 'Montserrat', sans-serif;\
    color: #FFF;\
a.text:active, \
a.text:hover, \
a.text{\
  color: #0F0;\
    }\
    line-height: 1.3;\
    justify-content: center;\
     /*text-align: center; */ \
    -webkit-font-smoothing: antialiased;\
    overflow-x: hidden;\
    }\
0 % { background-position: 0 % 50 %; }\
50 % { background-position: 100 % 50 %;}\
100 % { background-position: 0 % 50 %; }\
</style>\n";
    cout << "<p style = \"font-family: 'segoe ui', helvetica; font-weight: 15; font-size:32px; align=\"left\" color: black; \">Каталог автозапчастин</p>\n";
      cout <<"<hr style = \"width: 100%; background-color: #E83951; border-color: #E83951;\">\n";

   // cout << "<h1 class=\"intro\">Каталог автозапчастин </h1>\n";
    cout << "<p style = \"font-family: 'segoe ui', helvetica; font-weight: 5; font-size:22px; align=\"left\" color: black; class=\"intro\">Каталог загальний</p>\n";
    cout << "<div id=\"table-scroll\"class=\"table-scroll\">\n";
 
  //  cout << "<tbody>\n";
   // cout << "<tr>\n";
  //  cout << "<th>1</td>\n";
 //  cout << "<td>Cell content<br> test </td>\n";
  //  cout << "</tr>\n";
  //  cout << "<tr>\n";
  //  cout << "<th>2</td>\n";
  //  cout << "<td>Cell content</td>\n";
  //  cout << "</tr>\n";
   // cout << "<tr>\n";
   // cout << "<th>3</th>\n";
  //  cout << "<td><a href = \"/cgi-bin/test5.exe?1\">Show 1</a></td>\n";
  //  cout << "<td><a href = \"/cgi-bin/info.exe\">Show info table</a></td>\n";
  //  cout << "<td>Cell content</td>\n";
   // cout << "<td>Cell content</td>\n";
   // cout << "</tr>\n";
  //  cout << "</table>\n";
    cout << "</div>\n";
    cout << "<style type = \"text/css\">\
@header_background_color: #333;\
@header_text_color: #FDFDFD;\
    @alternate_row_background_color: #DDD;\
    @table_width: 750px;\
    @table_body_height: 300px;\
    @column_one_width: 200px;\
    @column_two_width: 200px;\
    @column_three_width: 350px;\
table,thead,tdata,th,td{\
border: 1px solid grey;\
    text - align:center;\
}\
th{\
   padding:20px;\
}\
th, td, thead, tdata{\
text - align: center;\
   padding:20px;\
}\
caption{\
  font - size:20px;\
}\
    .fixed_headers{\
      width: @table_width;\
      table-layout: fixed;\
      border-collapse: collapse;\
      th { text-decoration: none; }\
      th, td {\
        padding: 5px;\
        text - align: left;\
      }\
      td:nth-child(1), th : nth-child(1) { min-width: @column_one_width; }\
      td:nth-child(2), th : nth-child(2) { min-width: @column_two_width; }\
      td:nth-child(3), th : nth-child(3) { width: @column_three_width; }\
      thead {\
        background-color: @header_background_color;\
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
        tr:nth-child(even) {\
          background-color: @alternate_row_background_color;\
        }\
      }\
    }\
        .old_ie_wrapper{\
          height: @table_body_height;\
          width: @table_width;\
          overflow-x: hidden;\
          overflow-y: auto;\
          tbody { height: auto; }\
      }\
        </style>\n";
  
    //cout << "</table>\n";

    cout << "</body>\n";
    cout << "<br>\n";
    cout << "<table>\n";
    cout << "<tr>\n";
    cout << "<th scope=\"col\">ID</th>\n";
    cout << "<th scope=\"col\">Назва товару</th>\n";
    cout << "<th scope=\"col\" img src = \"/cgi-bin/link.png\"</th>\n";
    cout << "</tr>\n";

    //id = \"main-table\"class=\"main-table\"
    try {
        int sqlite3_prepare(
            sqlite3* mDb,            /* Database handle */
            sqlite3_stmt** mQuery  /* OUT: Statement handle */
        );
        //SQLite::Database    mDb;    ///< Database connection
       // SQLite::Statement **sqlite3_stmt; ///< Database prepared SQL query
        int nb;
        SQLite::Database db("exampl.db", SQLite::OPEN_READWRITE);
        //db.exec("DROP TABLE test4");
        //std::cout << "SQLite database file '" << db.getFilename().c_str() << "' opened successfully\n";
       //char* user_query = getenv("QUERY_STRING");

       //SQLite::Statement bindValue(":user_query", user_query);
       //SQLite::Statement bind(":user_quer", user_query);
       //SQLite::bind(query, 42, "fortytwo");
        
        
        //db.exec("CREATE TABLE test5 (id INTEGER PRIMARY KEY , name TEXT, desc TEXT)");

       // nb = db.exec("INSERT INTO test5 VALUES (1, \"ТНВТ\",\"Генератор вищого класу  дуже гарними бла бла блаа\")");
        // cout << "Insert 1 row, returned " << nb << std::endl;
        //nb = db.exec("INSERT INTO test5 VALUES (2, \"Колiнчатий вал\",\"Генератор? неее коленвал бла бла блабла бла блабла бла бла\")");

        //nb = db.exec("INSERT INTO test5 VALUES (3, \"Генератор\",\"Генератор? так стоп вже ж був...\")");

        //nb = db.exec("INSERT INTO test5 VALUES (4, \"Пiч радiатору\",\"Дуйе тiки так\")");
        //nb = db.exec("INSERT INTO test5 VALUES (5, \"Карбюратор\",\"Робить бр бр бр\")");




        //SQLite::Statement query(db, " SELECT * FROM test4 ");
        //char* user_query = getenv("QUERY_STRING");
       // cout << "<br>\n";
        //const string value = db.execAndGet(" SELECT name FROM test3 WHERE id="+1);
       // cout << "</br>\n";
      //  cout << "<br>\n";
       // const string valuee = db.execAndGet(" SELECT name FROM test3 WHERE id=1");
      //  cout << "</br>\n";
        //cout << "execAndGet=" << value.c_str() << std::endl;
      //  cout << "<br>\n";
      //  cout << "<br>\n";
        //cout << "<br>\n";
        //// cout << "Name is=" << valuee.c_str() << std::endl;
         //std::cout << "Records from table people:" << std::endl;
        //db.exec("DROP TABLE test3"); SQLite::Statement   query(db, "SELECT * FROM test");  //WHERE id = :user_query



        SQLite::Statement   query(db, "SELECT * FROM test5 ");
       // std::cout << "SELECT * FROM test5 :\n";
        while (query.executeStep())
        {

            int         id = query.getColumn(0);
            const char* name = query.getColumn(1);
            //cout << "<thead>\n";
            //cout << "<tr>\n";
           // cout << "<tdata>\n";
            cout << "<tr>\n";
            cout << "<td> ";
            cout << id;
            cout << "</td>\n";
            cout << "<br>";
            cout << "<td>";
            cout << name;
            cout << "</td>\n";
            cout << "<br>";
            cout << "<td>";
            cout << "<a text-decoration: none; href = \"/cgi-bin/info.exe?";
            cout << id;
            cout << "\">деталi</a></td>\n";
            cout << "</td>\n";
            cout << "<br>";
            cout << "</tr>\n";

            //cout << "<img src = \"/cgi-bin/link.png\">\n";
            //cout << "</tdata>\n";
            //cout << "</thead>\n";
            //cout << "</tr>\n";

           // cout << "<br>\n";


            ////std::cout << "row: " << id << ", " << value << ", " << size << std::endl;

            //cout << "Content-Type: text/html; charset=UTF-8\n\n";


            ////std::cout << "row (" << query.getColumn(0) << ", \"" << query.getColumn(1) << "\")" << std::endl;


        }
        // db.exec("DROP TABLE test5");
    }
    catch (std::exception& e) {

        std::cout << "SQLite exception: " << e.what() << std::endl;
        //db.exec("DROP TABLE test3");
        //return EXIT_FAILURE;
    }
    /*
    try {
        int nb;
        SQLite::Database db("test.sqlite3", SQLite::OPEN_READWRITE);

        //std::cout << "SQLite database file '" << db.getFilename().c_str() << "' opened successfully\n";

        db.exec("CREATE TABLE test3 (id INTEGER PRIMARY KEY, name TEXT)");

        nb = db.exec("INSERT INTO test3 VALUES (1, \"ТНВТ\")");
       // cout << "Insert 1 row, returned " << nb << std::endl;
        nb = db.exec("INSERT INTO test3 VALUES (2, \"Колiнчатий вал\")");

        nb = db.exec("INSERT INTO test3 VALUES (3, \"Генератор\")");

        nb = db.exec("INSERT INTO test3 VALUES (4, \"Пiч радiатору\")");

        nb = db.exec("INSERT INTO test3 VALUES (5, \"Карбюратор\")");





        SQLite::Statement query(db, " SELECT * FROM test3");
        //char* user_query = getenv("QUERY_STRING");
       // cout << "<br>\n";
        //const string value = db.execAndGet(" SELECT name FROM test3 WHERE id="+1);
       // cout << "</br>\n";
      //  cout << "<br>\n";
       // const string valuee = db.execAndGet(" SELECT name FROM test3 WHERE id=1");
      //  cout << "</br>\n";
        //cout << "execAndGet=" << value.c_str() << std::endl;
      //  cout << "<br>\n";
      //  cout << "<br>\n";
        //cout << "<br>\n";
        //// cout << "Name is=" << valuee.c_str() << std::endl;
         //std::cout << "Records from table people:" << std::endl;
        //db.exec("DROP TABLE test3");
        while (query.executeStep())
        {
            int         id = query.getColumn(0);
            const char* name = query.getColumn(1);
            //cout << "<thead>\n";
            //cout << "<tr>\n";
           // cout << "<tdata>\n";
            cout << "<tr>\n";
            cout << "<td> ";
            cout << id;
            cout << "</td>\n";
            cout << "<td>";
            cout << name;
            cout << "</td>\n";
            cout << "<td>";
            cout << "<a text-decoration: none; href = \"/cgi-bin/info.exe?";
            cout << id;
            cout << "\">деталi</a></td>\n";
            cout << "</td>\n";
            cout << "</tr>\n";
            
            //cout << "<img src = \"/cgi-bin/link.png\">\n";
            //cout << "</tdata>\n";
            //cout << "</thead>\n";
            //cout << "</tr>\n";
             
           // cout << "<br>\n";


            ////std::cout << "row: " << id << ", " << value << ", " << size << std::endl;

            //cout << "Content-Type: text/html; charset=UTF-8\n\n";


            ////std::cout << "row (" << query.getColumn(0) << ", \"" << query.getColumn(1) << "\")" << std::endl;

        }
        db.exec("DROP TABLE test3");
    }
    catch (std::exception& e) {

        std::cout << "SQLite exception: " << e.what() << std::endl;

        //return EXIT_FAILURE;
    }*/


    /*
    try {

        SQLite::Database db("test.sqlite3", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);

       // std::cout << "SQLite database file '" << db.getFilename().c_str() << "' opened successfully\n";

       db.exec("CREATE TABLE test4 (id INTEGER PRIMARY KEY, name TEXT)");

        int nb = db.exec("INSERT INTO test4 VALUES (1, \"Igor\")");

       // std::cout << "Insert 1 row, returned " << nb << std::endl;

        SQLite::Statement query(db, "SELECT * FROM test4");

        //std::cout << "Records from table people:" << std::endl;

        while (query.executeStep())
        {
           // cout << "<br>\n";
            
            //cout << "Content-Type: text/html; charset=UTF-8\n\n";
            std::cout << "row (" << query.getColumn(0) << ", \"" << query.getColumn(1) << "\")" << std::endl;
            cout << "<p class =\"intro\">Works </p>\n";
            cout << "</div>\n";
            cout << "<br/>\n";

        }

    }
    catch (std::exception& e) {

        std::cout << "SQLite exception: " << e.what() << std::endl;

       // return EXIT_FAILURE;
    }
    */
    cout << "</table>\n";
    cout << "<style type = \"table/css\">\
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
      table-layout: fixed;\
      border-collapse: collapse;\
\
      th { text-decoration: none; }\
      th, td {\
font-family: 'Montserrat', sans-serif;\
        padding: 11px;\
        /*text-align: center; */ \
      }\
\
      td:nth-child(1), th : nth-child(1) { min-width: @column_one_width; }\
      td:nth-child(2), th : nth-child(2) { min-width: @column_two_width; }\
      td:nth-child(3), th : nth-child(3) { width: @column_three_width; }\
\
      thead {\
font-family: 'Montserrat', sans-serif;\
        background-color: @header_background_color;\
        color: @header_text_color;\
        tr {\
font-family: 'Montserrat', sans-serif;\
          display: block;\
          position: relative;\
        }\
      }\
      tbody {\
font-family: 'Montserrat', sans-serif;\
        display: block;\
        overflow: auto;\
        width: 100 %;\
        height: @table_body_height;\
        tr:nth-child(even) {\
          background-color: @alternate_row_background_color;\
        }\
      }\
    }\
\
        .old_ie_wrapper{\
          height: @table_body_height;\
          width: @table_width;\
          overflow-x: hidden;\
          overflow-y: auto;\
          tbody { height: auto; }\
      }\
        </style>\n";
    cout << "<br/>\n";
    cout << "<footer class = \"footer\" >\n";
    cout << "<div class = \"waves\">\n";
    cout << "<div class = \"wave\" id = \"wave1\"></div>\n";
    cout << "<div class = \"wave\" id = \"wave2\"></div>\n";
    cout << "<div class = \"wave\" id = \"wave3\"></div>\n";
    cout << "<div class = \"wave\" id = \"wave4\"></div>\n";
    cout << "<div>\n";
    cout << "<ul class = \"menu\">\n";
    cout << "<li class = \"menu__item\"><a class = \"menu__link\" href = \"/cgi-bin/index.exe\">Home</a></li>\n";
    cout << "<li class = \"menu__item\"><a class = \"menu__link\" href = \"/cgi-bin/about.exe\">About us</a></li>\n";
    cout << "<li class = \"menu__item\"><a class = \"menu__link\" href = \"/cgi-bin/test.exe\">Admin_test</a></li>\n";
    cout << "<li class = \"menu__item\"><a class = \"menu__link\" href = \"/cgi-bin/input.exe\">Input_test</a></li>\n";
    cout << "</ul>\n";
    cout << "<p style = \"opacity: 0.75;\">Made with ❤ by peace_akame</p>\n";
    cout << "<style type = \"text/css\">\
        .footer{\
  position: relative;\
  background: linear-gradient(-45deg, #10111F, #1f1f1f);\
    background-size: 111% 111%;\
  min-height: 100px;\
  padding: 60px 50px;\
  display: flex;\
  justify-content: center;\
  align-items: center;\
  flex-direction: column;\
  margin-top:35 %;\
        }\
 </style > \n";
    cout << "</footer>\n";
    cout << "</html>\n";

   

return 0; 
};


/*
#include <iostream>
#include <cstdio>
#include <cstdlib>

#include <SQLiteCpp/SQLiteCpp.h>


#ifdef SQLITECPP_ENABLE_ASSERT_HANDLER
namespace SQLite
{
    /// definition of the assertion handler enabled when SQLITECPP_ENABLE_ASSERT_HANDLER is defined in the project (CMakeList.txt)
    void assertion_failed(const char* apFile, const long apLine, const char* apFunc, const char* apExpr, const char* apMsg)
    {
        // Print a message to the standard error output stream, and abort the program.
        std::cerr << apFile << ":" << apLine << ":" << " error: assertion failed (" << apExpr << ") in " << apFunc << "() with message \"" << apMsg << "\"\n";
        std::abort();
    }
}
#endif

int main()
{
    // Using SQLITE_VERSION would require #include <sqlite3.h> which we want to avoid: use SQLite::VERSION if possible.
//  std::cout << "SQlite3 version " << SQLITE_VERSION << std::endl;
    std::cout << "SQlite3 version " << SQLite::VERSION << " (" << SQLite::getLibVersion() << ")" << std::endl;
    std::cout << "SQliteC++ version " << SQLITECPP_VERSION << std::endl;

    ////////////////////////////////////////////////////////////////////////////
    // Simple batch queries example :
    try
    {
        // Open a database file in create/write mode
        SQLite::Database    db("example.db", SQLite::OPEN_READWRITE );
        std::cout << "SQLite database file '" << db.getFilename().c_str() << "' opened successfully\n";

        // Create a new table with an explicit "id" column aliasing the underlying rowid
        db.exec("DROP TABLE IF EXISTS example");
        db.exec("CREATE TABLE example (id INTEGER PRIMARY KEY, value TEXT)");

        // first row
        int nb = db.exec("INSERT INTO example VALUES (NULL, \"example\")");
        std::cout << "INSERT INTO example VALUES (NULL, \"example\")\", returned " << nb << std::endl;

        // second row
        nb = db.exec("INSERT INTO example VALUES (NULL, \"second\")");
        std::cout << "INSERT INTO example VALUES (NULL, \"second\")\", returned " << nb << std::endl;

        // update the second row
        nb = db.exec("UPDATE example SET value=\"second-updated\" WHERE id='2'");
        std::cout << "UPDATE example SET value=\"second-updated\" WHERE id='2', returned " << nb << std::endl;

        // Check the results : expect two row of result
        SQLite::Statement   query(db, "SELECT * FROM example");
        std::cout << "SELECT * FROM example :\n";
        while (query.executeStep())
        {
            std::cout << "row (" << query.getColumn(0) << ", \"" << query.getColumn(1) << "\")\n";
        }

        db.exec("DROP TABLE example");
    }
    catch (std::exception& e)
    {
        std::cout << "SQLite exception: " << e.what() << std::endl;
        return EXIT_FAILURE; // unexpected error : exit the example program
    }

    std::cout << "everything ok, quitting\n";

    return EXIT_SUCCESS;
}
*/