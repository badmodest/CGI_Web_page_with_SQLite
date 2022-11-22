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
    cout << "<link rel = \"stylesheet\" href = \"styles/mystyle.css\">\n";
    cout << "<link rel = \"icon\" type = \"image/png\" href = \"/cgi-bin/images/favicon.png\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.googleapis.com\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.gstatic.com\" crossorigin>\n";
    cout << "<link href = \"https://fonts.googleapis.com/css2?family=Roboto&display=swap\" rel = \"stylesheet\">\n";
    cout << "<link rel = \"stylesheet\" href = \"https://use.fontawesome.com/releases/v5.2.0/css/all.css\" integrity = \"sha384-hWVjflwFxL6sNzntih27bfxkr27PmbbK/iSvJ+a4+0owXq79v+lsFkW54bOGbiDQ\" crossorigin = \"anonymous\" type = \"text/css\">\n";
    cout << "<title>Онлайн СТО</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<header>\n";
        cout << "<div class = \"container\">\n";
        cout << "<section class = \"grid hero\">\n";
        cout << "<div class = \"column-xs-12 column-md-6\">\n";
        cout << "<div class = \"image-holder\">\n";
        cout << "<div class = \"image-block\"></div>\n";
        cout << "<img src = \"https://source.unsplash.com/n49BjsFf5dI\">\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-6\">\n";
        cout << "<div class = \"intro\">\n";
        cout << "<h1>Kato Bakery</h1>\n";
        cout << "<p class = \"lead\">An artisan bakery specializing in pastries and desserts.Made fresh daily.</p>\n";
        cout << "<a class = \"main-button\" href = \"#menu-section\">View our menu</a>\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</header>\n";
        cout << "<main id = \"menu-section\">\n";
        cout << "<div class = \"container\">\n";
        cout << "<section class = \"grid menu\">\n";
        cout << "<div class = \"column-xs-12\">\n";
        cout << "<h2>Menu</h2>\n";
        cout << "<section class = \"grid menu-list\">\n";
        cout << "<div class = \"column-xs-12\">\n";
        cout << "<h3>Cakes</h3>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Cheesecake</h4>\n";
        cout << "<p>Thin base made from crushed biscuits, with a thicker top layer of soft cheese, eggs and sugar</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Tiramisu</h4>\n";
        cout << "<p>Made of ladyfingers dipped in coffee, layered with a whipped mixture of eggs, sugar, and mascarpone cheese, flavored with cocoa</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Chiffon</h4>\n";
        cout << "<p>Light, airy cake made with vegetable oil, eggs, sugar, flour</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Tres Leches</h4>\n";
        cout << "<p>Sponge cake soaked with evaporated milk, condensed milk, and heavy cream or sour cream</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Black Forest</h4>\n";
        cout << "<p>Several layers of chocolate sponge cake sandwiched with whipped cream and cherries</p>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "<section class = \"grid menu-list\">\n";
        cout << "<div class = \"column-xs-12\">\n";
        cout << "<h3>Pastries</h3>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Cinnamon Roll</h4>\n";
        cout << "<p>Sweet roll made from flour, cinnamon, sugar, and butter  with cream cheese icing</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Éclair</h4>\n";
        cout << "<p>Oblong pastry made with choux dough filled with a cream and topped with icing</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Croissant</h4>\n";
        cout << "<p>Buttery flaky bread made of a layered yeast-leavened dough</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Kouign-amann</h4>\n";
        cout << "<p>Round crusty cake containing layers of butter and sugar folded in</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Pain au Chocolat</h4>\n";
        cout << "<p>Sweet roll consisting of yeast-leavened laminated dough pieces of dark chocolate in the centre</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Apple Tart</h4>\n";
        cout << "<p>Consisting of apple filling over a pastry base with an open top not covered with pastry</p>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "<section class = \"grid menu-list\">\n";
        cout << "<div class = \"column-xs-12\">\n";
        cout << "<h3>Breads</h3>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Baguette</h4>\n";
        cout << "<p>Thin elongated loaf, made of water, flour, yeast, and salt</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Ciabatta</h4>\n";
        cout << "<p>Italian white bread made from wheat flour, water, olive oil, salt, and yeast</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>Whole Wheat</h4>\n";
        cout << "<p>Made using flour which is entirely made from whole wheat grains</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-4\">\n";
        cout << "<h4>White</h4>\n";
        cout << "<p>Made from wheat flour from which the bran and the germ have been removed through a process known as milling</p>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</main>\n";
        cout << "<footer>\n";
        cout << "<div class = \"container\">\n";
        cout << "<section class = \"grid\">\n";
        cout << "<div class = \"column-xs-12\">\n";
        cout << "<p class = \"copyright\">&copy; AAAAAAAAAAAAAAAA</p>\n";
        cout << "</div>\n";
        cout << "</section>\n";
        cout << "</div>\n";
        cout << "</footer>\n";
    /*
    try {
        int sqlite3_prepare(
            sqlite3* mDb,        
            sqlite3_stmt** mQuery
        );

        int nb;
        SQLite::Database db("exampl.db", SQLite::OPEN_READWRITE);
        SQLite::Statement   query(db, "SELECT * FROM test5 ");
 
        while (query.executeStep())
        {

            int         id = query.getColumn(0);
            const char* name = query.getColumn(1);

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
            cout << "\\">деталi</a></td>\n";
            cout << "</td>\n";
            cout << "<br>";
            cout << "</tr>\n";

 
        }

    }
    catch (std::exception& e) {

        std::cout << "SQLite exception: " << e.what() << std::endl;
    }
    */
 
   cout << "<style type = \"table/css\">\
       @import url('https://fonts.googleapis.com/css?family=Lora:400,700|Merriweather:400,700');\
$white: #fff;\
$black: #302a2b;\
$bg: #f2f2f0;\
$text: #877a7a;\
$button: #bc8364;\
   * {\
       box-sizing: border-box;\
       &::before, & ::after{\
         box-sizing: border-box;\
       }\
   }\
   body{\
     font-family: 'Merriweather', serif;\
     font-size: 1rem;\
     font-weight: 400;\
     line-height: 1.6;\
     margin : 0;\
     padding : 0;\
     color: $text;\
     background: $bg;\
     text-rendering: optimizeLegibility;\
   }\
       h1, h2, h3, h4{\
         font-family: 'Lora', serif;\
         color: $black;\
   }\
       h2, h3{\
         color: $black;\
         font-weight: 400;\
         letter-spacing: 0.125rem;\
         text-transform: lowercase;\
   }\
       h1{\
         font-size: 2rem;\
         font-weight: 700;\
         margin : 0;\
   }\
       h2{\
         font-size: 1.85rem;\
         margin: 0 0-0.75rem 0;\
   }\
       h3{\
         font-size: 1.625rem;\
         margin: 1rem 0;\
         border-bottom: 0.125rem solid $black;\
   }\
       h4{\
         font-size: 1.325rem;\
         margin: 1rem 0;\
   }\
       .intro{\
         width: 100 %;\
         margin: 1rem 0 2rem 0;\
   }\
       a{\
         text-decoration: none;\
   }\
       .main-button{\
         font-size: 1rem;\
         font-weight: 700;\
         padding: 1rem 1.325rem;\
         border : 0;\
         color: $white;\
         background: $button;\
         transition: all 0.3s ease;\
         &:hover {\
           background: $black;\
         }\
   }\
       .lead{\
         font-size: 1rem;\
         margin: 1rem 0 3rem 0;\
         }\
             .container{\
               margin: auto;\
               padding: 0 1rem;\
               max-width: 82rem;\
               width: 100 %;\
         }\
             header{\
               background: linear-gradient(-8deg, $bg 0 %, $bg 50 %, $white 50 %, $white 50 %);\
         }\
             main{\
               padding: 0 0 3rem 0;\
         }\
             .grid{\
               > [class *= \"column-\"] {\
                 padding: 1rem;\
               }\
               .menu-list {\
                 margin: 0 0 1.5rem 0;\
                 padding: 0 1rem 2rem 1rem;\
                 background: $white;\
                 > div {\
                   &:nth-child(1) {\
                     padding: 0.5rem 1rem;\
                   }\
                   &: not(:nth-child(1)) {\
                     padding: 0 1rem;\
                   }\
                 }\
               }\
         }\
             .hero{\
               height: 100 %;\
               align-content: center;\
               align-items: center;\
               justify-content: center;\
               > div:nth-of-type(1) {\
                 order : 1;\
               }\
                 }\
                     section{\
                       display: block;\
                 }\
                     img{\
                         width: 100 %;\
                       height: 25rem;\
                         object-fit: cover;\
                 }\
                     .image-holder{\
                       position: relative;\
                       .image-block {\
                         position: absolute;\
                         z-index: 1;\
                         display: block;\
                         top : 0;\
                         bottom : 0;\
                         left : 0;\
                         right : 0;\
                         width: 100 %;\
                         height: 25rem;\
                         background: $black;\
                         transform-origin: 0 % 100 %;\
                         animation: revealBottom 1s 0.7s cubic-bezier(0.23, 1, 0.75, 1) forwards;\
                       }\
                       img {\
                         opacity : 0;\
                         animation: hideItem 0s 0.5s forwards;\
                       }\
                 }\
                     footer{\
                       text-align: center;\
                       background: $black;\
                       }\
                           @media(min-width: $md) {\
                           body{\
                             font-size: 1.125rem;\
                           }\
                               header{\
                                 background: linear-gradient(-8deg, $bg 0 %, $bg 25 %, $white 25 %, $white 25 %);\
                           }\
                               .hero{\
                                 height: 100vh;\
                                 > div:nth-of-type(1) {\
                                   order : 0;\
                                 }\
                           }\
                               .intro{\
                                 width: 80 %;\
                                 margin: auto;\
                           }\
                               .main-button{\
                                 font-size: 1.125rem;\
                           }\
                               h1{\
                                 font-size: 3.125rem;\
                           }\
                               .lead{\
                                 font-size: 1.25rem;\
                           }\
                               h2{\
                                 font-size: 2.75rem;\
                                 margin: 0 0-1.125rem 0;\
                           }\
                               h3{\
                                 font-size: 2.25rem;\
                           }\
                               h4{\
                                 font-size: 1.5rem;\
                           }\
                               img{\
                                 height: 75vh;\
                           }\
                               .image-holder{\
                                 .image-block {\
                                   height: 75vh;\
                                 }\
                           }\
                       }\
                       @keyframes revealBottom{\
                         0 % {\
                           transform: scaleY(1);\
                         }\
                         100 % {\
                           transform: scaleY(0);\
                         }\
                       }\
                           @keyframes hideItem{\
                             0 % {\
                               opacity : 0;\
                             }\
                             100 % {\
                               opacity : 1;\
                             }\
                       }\
      </style>\n";
        cout << "</body>\n";
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