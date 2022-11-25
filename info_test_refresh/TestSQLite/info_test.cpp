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
    cout << "<meta name = \"viewport\" content = \"width=device-width, initial-scale=1, shrink-to-fit=no, charset=\"UTF-8\"/>\n";
   // cout << "<meta charset = \"UTF-8\">\n";
    cout << "<meta http-equiv = \"X-UA-Compatible\" content = \"IE=edge\">\n";
    cout << "<link rel = \"stylesheet\" href = \"../styles/mystyle.css\">\n";
    cout << "<link rel = \"stylesheet\" href = \"/styles/mystyle.css\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.googleapis.com\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.gstatic.com\" crossorigin>\n";
    cout << "<link href = \"https://fonts.googleapis.com/css2?family=Roboto&display=swap\" rel = \"stylesheet\">\n";
    cout << "<link rel = \"stylesheet\" href = \"https://use.fontawesome.com/releases/v5.2.0/css/all.css\" integrity = \"sha384-hWVjflwFxL6sNzntih27bfxkr27PmbbK/iSvJ+a4+0owXq79v+lsFkW54bOGbiDQ\" crossorigin = \"anonymous\" type = \"text/css\">\n";
    cout << "<title>Онлайн СТО</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << " <nav class = \"flex-nav\">\n";
        cout << "<div class = \"container\">\n";
        cout << "<div class = \"grid menu\">\n";
        cout << "<div class = \"column-xs-8 column-md-6\">\n";
        cout << "<br>\n";
        cout << "<p id = \"highlight\">Каталог автозапчастин</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-4 column-md-6\">\n";
        cout << "<a href = \"index_test.exe\" class = \"buttton\">Головне меню <i class = \"ion-navicon-round\"></i></a>\n";

        cout << "<br>\n";
        cout << "<br>\n";
        cout << "<br>\n";
        char* user_query = getenv("QUERY_STRING");
        cout << "<a href = \"table.exe?";
        cout << user_query;
        cout <<"\" class = \"buttton\">Показати у таблицi <i class = \"ion-navicon-round\"></i></a>\n";
        cout << "<ul>\n";
        cout << "<li class = \"nav-item\"><a href = \"#\">Продукти</a></li>\n";
        cout << "<li class = \"nav-item\"><a href = \"#\">О Нас</a></li>\n";
        cout << "</ul>\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "</nav>\n";
        cout << "<main>\n";
        cout << "<div class = \"container\">\n";
        cout << "<div class = \"grid second-nav\">\n";
        cout << "<div class = \"column-xs-12\">\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "<div class = \"grid product\">\n";
        cout << "<div class = \"column-xs-12 column-md-7\">\n";
        cout << "<div class = \"product-gallery\">\n";
        cout << "<div class = \"product-image\">\n";
        cout << "</div>\n";



   try {
        int sqlite3_prepare(
            sqlite3 * mDb,           
            sqlite3_stmt * *mQuery  
        );
        
        SQLite::Statement** sqlite3_stmt; 
        int nb;
        SQLite::Database db("exampl.db", SQLite::OPEN_READONLY);
       char* user_query = getenv("QUERY_STRING");
        string user_query_str = user_query;
        SQLite::Statement   query(db, "SELECT * FROM test5 WHERE id ="+user_query_str);
        cout << "<ul class = \"image-list\">\n";
       
        cout << "</ul>\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-12 column-md-5\">\n";
        while (query.executeStep())
        {
            
            int         id = query.getColumn(0);
            const char* name = query.getColumn(1);
            const char* desc = query.getColumn(2);
            int         count = query.getColumn(3);
            int         price = query.getColumn(4);
            const char* cond = query.getColumn(5);
            const char* manuf = query.getColumn(6);
            const char* link = query.getColumn(7);
            cout << "<li class = \"image-item\"><img src = \"";
            cout << link;
            cout<<"\"></li>\n";
            cout << "<h1>";
            cout << name;
            cout << "</h1>\n";
            cout << "<h1>";
            cout << price;
            cout << " UAH</h1>\n";
            cout << "<div class = \"description\">\n";
            cout << "<p>";
            cout << desc;
            cout << "</p>\n";
            cout << "<p>Стан: ";
            cout << cond;
            cout << "</p>\n";
            cout << "<p>Тип запчастини: ";
            cout << manuf;
            cout << "</p>\n";
            cout << "<h4>Залишилось: ";
            cout << count;
            cout << " шт.</h4>\n";
            cout << "</div>\n";

        }

    }
    catch (std::exception& e) {
        std::cout << "SQLite exception:" << e.what() << std::endl;
    }
    
  
    cout << "</div>\n";
    cout << "</div>\n";

    cout << "</div>\n";
    cout << "</div>\n";
    cout << "</main>\n";
    cout << "<footer>\n";
    cout << "<div class = \"grid\">\n";
    cout << "<div class = \"column-xs-12\">\n";
    cout << "<a href = \"https://badmodest.github.com\" title = \"peace_akame\" target = \"_blank\">peace_akame</a></p>\n";
    cout << "</div>\n";
    cout << "</div>\n";
    cout << "</footer>\n";

    cout << "</body>\n";
    cout << "<style>\
    @import url('https://fonts.googleapis.com/css?family=Pontano+Sans');\
linear-gradient(-45deg, #10111F, #1f1f1f):#fff;\
#CCC:#333;\
$lightergray:#d5d5d5;\
$lightgray:#f0f3f1;\
$gray:#e3dddd;\
#CCC:#888;\
#2D2E2B:#3e3e3f;\
    #4C4D48:#565657;\
    * {\
        box-sizing:border-box;\
        &::before,&::after{\
          box-sizing:border-box;\
        }\
    }\
    body{\
      font-family:'Pontano Sans',sans-serif;\
      font-size:1.125rem;\
      line-height:1.5;\
      margin:0;\
      padding:0;\
      color:#CCC;\
      background:linear-gradient(-45deg, #10111F, #1f1f1f);\
      text-rendering:optimizeLegibility;\
    }\
        ul{\
          padding:0;\
          margin:0;\
          list-style:none;\
          li {\
           margin: 0 1.75rem 0 0;\
          }\
    }\
        a{\
          color:#CCC;\
          text-decoration:none;\
          transition:all 0.2s ease;\
          &:hover {\
            color:#CCC;\
          }\
          &.active {\
            color:#CCC;\
          }\
          }\
              h1, h2, h3, h4{\
                color:#CCC;\
                font-weight:normal;\
                margin:1.75rem 0 1rem 0;\
          }\
              h1{\
                font-size:2.5rem;\
          }\
              h2{\
                font-size:2.125rem;\
                margin:0;\
          }\
              h3{\
                font-size:2rem;\
          }\
              h4{\
                font-size:1.5rem;\
                margin:1rem 0 0.5rem 0;\
          }\
              section{\
                display:block;\
          }\
              img{\
                max-width:60%;\
                height:auto;\
                object-fit:cover;\
          }\
              nav{\
                display:block;\
                li {\
                  font-size:1.125rem;\
                  margin:0;\
                }\
          }\
              .flex-nav ul{\
                position:absolute;\
                z-index:1;\
                list-style:none;\
                margin:0;\
                padding:0;\
                display:flex;\
                flex-wrap:wrap;\
                flex-direction:column;\
                display:none;\
                width:100%;\
                left:0;\
                padding:1rem;\
                background:linear-gradient(-45deg, #10111F, #1f1f1f);\
                text-align:center;\
                &.active {\
                  display:flex;\
                }\
                li {\
                  margin:0.5rem 0;\
                }\
                }\
                    .toggle-nav{\
                      display:flex;\
                      justify-content:flex-end;\
                      font-size:1.125rem;\
                      line-height:1.7;\
                      margin:1rem 0;\
                      i {\
                        font-size:1.5rem;\
                        line-height:1.4;\
                        margin:0 0 0 0.5rem;\
                      }\
                }\
                    #highlight{\
                      color:#CCC;\
                      font-size:2.125rem;\
                      text-transform:uppercase;\
                      }\
                          .price{\
                            margin:0;\
                      }\
                          .breadcrumb-list{\
                            display:flex;\
                            flex-wrap:wrap;\
                            padding:0;\
                            margin:1rem 0 0 0;\
                            list-style:none;\
                            li {\
                              font-size:0.85rem;\
                              letter-spacing:0.125rem;\
                              text-transform:uppercase;\
                            }\
                      }\
                                .description{\
                                  border-top:0.0625rem solid $gray;\
                                  margin:2rem 0;\
                                  padding:1rem 0 0 0;\
                              }\
                                  .buttton{\
                                    position: absolute;\
                                    right: 150px;\
                                   display:inline-block;\
                                    background:#2D2E2B;\
                                    color:linear-gradient(-45deg, #10111F, #1f1f1f);\
                                    border:none;\
                                    border-radius:25px;\
                                    padding:1.25rem 2.5rem;\
                                    font-size:1rem;\
                                    text-transform:uppercase;\
                                    cursor:pointer;\
                                    transform:translateZ(0);\
                                    transition:color 0.3s ease;\
                                    letter-spacing:0.0625rem;\
                                    &:hover {\
                                      &::before {\
    transform:scaleX(1);\
    box - shadow: 0px 0px 5px #CCC; \
                                      }\
                                    }\
                                    &::before {\
                                      position:absolute;\
box-shadow: 0px 0px 5px #CCC;\
                                      content:'';\
                                      z-index:-1;\
                                      top:0;\
                                      left:0;\
                                      right:0;\
                                      bottom:0;\
                                      background:#4C4D48;\
                                      transform:scaleX(0);\
                                      transform-origin:0 50%;\
                                      transition:transform 0.3s ease-out;\
                                    }\
                              }\
                                  .container{\
                                    margin:auto;\
                                    padding:0 1rem;\
                                    max-width:75rem;\
                                    width:100%;\
                                    }\
                                        .grid{\
                                          > [class*=\"column-\"] {\
                                            padding:1rem;\
                                          }\
                                          &.menu, &.product {\
                                            border-bottom:0.0625rem solid $gray;\
                                          }\
                                          &.menu {\
                                            > [class*=\"column-\"] {\
                                              padding:0.5rem 1rem 0.5rem 1rem;\
                                            }\
                                          }\
                                          &.product {\
                                            padding:0 0 1.5rem 0;\
                                          }\
                                          &.second-nav {\
                                            > [class*=\"column-\"] {\
                                              padding:0.5rem 1rem;\
                                            }\
                                          }\
                                    }\
                                        footer {\
                                          padding:1rem 0;\
                                          text-align:center;\
                                            }\
                                                .product-image {\
                                                  display:none;\
                                            }\
                                                .image-list {\
                                                  li {\
                                                    margin:0;\
box-shadow: 0px 0px 25px gray;\
                                                  }\
                                            }\
                                                @media(min-width:$md) {\
                                                      .product-image img, .image-list img{\
                                                        width:100%;\
                                                      }\
                                                          .product-image {\
                                                            display:block;\
                                                            img {\
                                                              height:52vh;\
                                                              &.active {\
                                                                display:block;\
                                                                margin:0 0 0.75rem 0;\
                                                              }\
                                                            }\
                                                      }\
                                                          .image-list {\
                                                            display:flex;\
                                                            overflow:hidden;\
                                                            li {\
                                                              margin:0 0.75rem 0 0;\
                                                              flex-basis:100%;\
                                                              &:nth-child(3) {\
                                                                margin:0;\
                                                              }\
                                                            }\
                                                            img {\
                                                              height:10rem;\
                                                              width:100%;\
                                                              transition:opacity 0.3s ease;\
                                                              cursor:pointer;\
                                                              &:hover {\
                                                                opacity:0.7;\
                                                              }\
                                                            }\
                                                              }\
                                                                  nav ul {\
                                                                    justify-content:flex-end;\
                                                              }\
                                                                  .toggle-nav{\
                                                                    display:none;\
                                                              }\
                                                                  .flex-nav{\
                                                                    display:block;\
                                                                    ul {\
                                                                      display:flex;\
                                                                      flex-direction:row;\
                                                                      position:relative;\
                                                                      justify-content:flex-end;\
                                                                      li {\
                                                                        font-size:1.125rem;\
                                                                        margin:0 1.5rem 0 0;\
                                                                        &:nth-child(4) {\
                                                                          margin:0;\
                                                                        }\
                                                                      }\
                                                                    }\
                                                              }\
                                                  }\
                                                      </style>\n";


    cout << "</html>\n";
           
   

return 0; 
};
