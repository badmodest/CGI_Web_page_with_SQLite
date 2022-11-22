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
    //cout << "<meta charset = \"UTF-8\">\n";
    cout << "<meta http-equiv = \"X-UA-Compatible\" content = \"IE=edge\">\n";
    cout << "<link rel = \"stylesheet\" href = \"../styles/mystyle.css\">\n";
    cout << "<link rel = \"stylesheet\" href = \"/styles/mystyle.css\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.googleapis.com\">\n";
    cout << "<link rel = \"preconnect\" href = \"https://fonts.gstatic.com\" crossorigin>\n";
    cout << "<link href = \"https://fonts.googleapis.com/css2?family=Roboto&display=swap\" rel = \"stylesheet\">\n";
    cout << "<link rel = \"stylesheet\" href = \"https://use.fontawesome.com/releases/v5.2.0/css/all.css\" integrity = \"sha384-hWVjflwFxL6sNzntih27bfxkr27PmbbK/iSvJ+a4+0owXq79v+lsFkW54bOGbiDQ\" crossorigin = \"anonymous\" type = \"text/css\">\n";
    cout << "<title>Онлайн СТО</title>\n";
    cout << "</head>\n";
    cout << "<style type = \"text/css\">\
    @import url('https://fonts.googleapis.com/css?family=Pontano+Sans');\
$white:#fff;\
$black:#333;\
$lightergray:#d5d5d5;\
$lightgray:#f0f3f1;\
$gray:#e3dddd;\
$text:#888;\
$button:#3e3e3f;\
    $button-hover:#565657;\
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
      color:$text;\
      background:$white;\
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
          color:$text;\
          text-decoration:none;\
          transition:all 0.2s ease;\
          &:hover {\
            color:$black;\
          }\
          &.active {\
            color:$black;\
          }\
          }\
              h1, h2, h3, h4{\
                color:$black;\
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
                max-width:100%;\
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
                background:$white;\
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
                      color:$black;\
                      font-size:1.125rem;\
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
                          .breadcrumb-item{\
                            &.active {\
                              color:$black;\
                            }\
                            + .breadcrumb-item {\
                              &::before {\
                                content:'/';\
                                display:inline-block;\
                                padding:0 0.5rem;\
                                color:$lightergray;\
                              }\
                            }\
                            }\
                                .description{\
                                  border-top:0.0625rem solid $gray;\
                                  margin:2rem 0;\
                                  padding:1rem 0 0 0;\
                              }\
                                  .add-to-cart{\
                                    position:relative;\
                                    display:inline-block;\
                                    background:$button;\
                                    color:$white;\
                                    border:none;\
                                    border-radius:0;\
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
                                      }\
                                    }\
                                    &::before {\
                                      position:absolute;\
                                      content:'';\
                                      z-index:-1;\
                                      top:0;\
                                      left:0;\
                                      right:0;\
                                      bottom:0;\
                                      background:$button-hover;\
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
                                                  @keyframes fadeImg{\
                                                    from {\
                                                      opacity:0;\
                                                    }\
                                                    to {\
                                                      opacity:1;\
                                                    }\
                                                  }\
                                                      </style>\n";

    cout << "<body>\n";
    cout << " <nav class = \"flex-nav\">\n";
        cout << "<div class = \"container\">\n";
        cout << "<div class = \"grid menu\">\n";
        cout << "<div class = \"column-xs-8 column-md-6\">\n";
        cout << "<p id = \"highlight\">Каталог автозапчастин</p>\n";
        cout << "</div>\n";
        cout << "<div class = \"column-xs-4 column-md-6\">\n";
        cout << "<a href = \"#\" class = \"toggle-nav\">Головне меню <i class = \"ion-navicon-round\"></i></a>\n";
        cout << "<ul>\n";
        cout << "<li class = \"nav-item\"><a href = \"#\">Продукти</a></li>\n";
        cout << "<li class = \"nav-item\"><a href = \"#\">О Нас</a></li>\n";
        cout << "<li class = \"nav-item\"><a href = \"#\">M</a></li>\n";
        cout << "<li class = \"nav-item\"><a href = \"#\">C</a></li>\n";
        cout << "</ul>\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "</nav>\n";
        cout << "<main>\n";
        cout << "<div class = \"container\">\n";
        cout << "<div class = \"grid second-nav\">\n";
        cout << "<div class = \"column-xs-12\">\n";
        cout << "<nav>\n";
        cout << "<ol class = \"breadcrumb-list\">\n";
        cout << "<li class = \"breadcrumb-item\"><a href = \"#\">Запчастини</a></li>\n";
        cout << "<li class = \"breadcrumb-item\"><a href = \"#\">Запчастини двигуна</a></li>\n";
        cout << "<li class = \"breadcrumb-item active\">ТНВТ</li>\n";
        cout << "</ol>\n";
        cout << "</nav>\n";
        cout << "</div>\n";
        cout << "</div>\n";
        cout << "<div class = \"grid product\">\n";
        cout << "<div class = \"column-xs-12 column-md-7\">\n";
        cout << "<div class = \"product-gallery\">\n";
        cout << "<div class = \"product-image\">\n";
        //cout << "<img class = \"active\" src = \"https://novovolynsk.in.ua/images/9569/3647.jpg\">\n";
        cout << "</div>\n";
            cout << "<ul class = \"image-list\">\n";
            //cout << "<li class = \"image-item\"><img src = \"https://source.unsplash.com/W1yjvf5idqA\"></li>\n";
            //cout << "<li class = \"image-item\"><img src = \"https://source.unsplash.com/VgbUxvW3gS4\"></li>\n";
            cout << "<li class = \"image-item\"><img src = \"https://source.unsplash.com/5WbYFH0kf_8\"></li>\n";
            cout << "<li class = \"image-item\"><img src = \"https://novovolynsk.in.ua/images/9569/3647.jpg\"></li>\n";
            cout << "</ul>\n";
            cout << "</div>\n";
            cout << "</div>\n";
            cout << "<div class = \"column-xs-12 column-md-5\">\n";


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
       
        while (query.executeStep())
        {

            int         id = query.getColumn(0);
            const char* name = query.getColumn(1);
            const char* desc = query.getColumn(2);
            cout << "<h1>";
            cout << name;
            cout << "</h1>\n";
            cout << "<h1>";
            cout << id;
            cout << " UAH</h1>\n";
            cout << "<div class = \"description\">\n";
            cout << "<p>";
            cout << desc;
            cout << "</p>\n";
            cout << "<p>OPIS.</p>\n";
            cout << "</div>\n";

/*
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
            cout << id;
            cout << "\">деталi</a></td>\n";
            cout << "</td>\n";
            cout << "<td>";
            cout << desc;
            cout << "</td>\n";
            cout << "<br>";
            cout << "<br>";
            cout << "</tr>\n";
            */

        }

    }
    catch (std::exception& e) {
        std::cout << "SQLite exception:" << e.what() << std::endl;
    }
    
    cout << "<button class = \"add-to-cart\">Додати до кошику</button>\n";
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
  


    cout << "</html>\n";
           
   

return 0; 
};
