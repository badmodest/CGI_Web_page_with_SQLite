#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string> 
#include <string.h> 
using namespace std;

const char* html_form = "<form ACTION=\"http://localhost/cgi-bin/test.exe\" METHOD=\"GET\">"
" Введіть який-небудь текст:<input type=\"text\" name=\"user_input\">"
" <input type=\"submit\" value=\"Надіслати на сервер\"> "
"</form>";

int main(int argc, char** argv)
{
    /* показуємо серверу, що ми повертаємо звичайний текст */
    cout << "Content-Type: text/html; charset=UTF-8\n\n";

    /* дістаємо значення необхідної змінної і зберігаємо його в вказівник */
    cout << "Pulucheno = " << getenv("QUERY_STRING");
    char* user_query = getenv("QUERY_STRING");
    cout << "<form <a href = \"#\">Cell content longer</a> <input type=\"submit\" value=\"Надіслати на сервер\"> </form>\n";
    cout << "<td><a href = \"/cgi-bin/test.exe\">Cell content longer</a></td>\n";
    cout << "AAAAAAA = " << user_query;
    /* перевіряємо, чи повернене значення не пусте */
    if (user_query == NULL || strlen(user_query) == 0)
    {
        /* якщо пусте - повідомляємо про це користувача */
       // cout << html_form;
        cout << "AAA = " << getenv("QUERY_STRING");
    }
    else
    {
        /* якщо існує значення - виводимо його у документ */
        cout << "QUERY_STRING = " << user_query;
        cout << "Pulucheno nichego? = " << getenv("QUERY_STRING");
    }

    /* виходимо з програми */
    return 0;
}