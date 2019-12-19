#include <iostream>
//#include <windows.h>
using namespace std;
void wg();
void wot();
void wows();
void wowp();
void wotb();
void caliber();
void wotc();
void wowsc();
void wowsb();
void moo();
void support();
void shop();
void dwnl();
 int menu_2=0;
int main ()
{
    srand (time(0));
    int menu=0;
    //
    do
    {
        cout<<"Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 1 - Рандомная ссылка"<<endl<<"2 - Ручной выбор"<<endl;
        cin>>menu;
        switch (menu) {
            case 2:
            {
                 cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать игру, страницу, которой хотим открыть:"<<endl<<" 1 - World Of Tanks"<<endl<<" 2 - World Of Warships;"<<endl<<" 3 - World of Warplanes;"<<endl<<" 4 - World Of Tanks BLITZ;"<<endl<<" 5 - Калибр;"<<endl<<" 6 - World Of Tanks MERCENARIES;"<<endl<<" 7 - World Of Warships LEGENDS;"<<endl<<" 8 - World Of Warships BLITZ;"<<endl<<" 9 - Master of Orion;"<<endl;
                   cin >> menu;
                break;
            }
            case 1:
            {
                cout << "Выбор рандомной ссылки"<<endl;
                 menu = -1+rand()%10;
                break;
            }
               
            default:
                break;
        }
   
    switch (menu)
    {
        case 0:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wg();
            break;
        }
        case 1:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wot();
            break;
        }
        case 2:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wows();
            break;
        }
        case 3:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wowp();
            break;
        }
        case 4:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wotb();
            break;
        }
        case 5:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            caliber();
            break;
        }
        case 6:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wotc();
            break;
        }
        case 7:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wowsc();
            break;
        }
        case 8:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            wowsb();
            break;
        }
        case 9:
        {
            cout<<"Сайт игры был окрыт"<<endl;
            moo();
            break;
        }
            default:
                      break;
    }
    }
    while (menu!=-1);
    return 0;
}


























void wg()
{
    system("open https://ru.wargaming.net/ru/");
}
void wot()
{
system("open https://ru.wargaming.net/ru/games/wot");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
        switch (menu_2) {
        case 0:
            {
                wg();
                break;
            }
        case 1:
            {
            wot();
            break;
            }
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}
void wows()
{
system("open https://ru.wargaming.net/ru/games/wot");

    do
    {
         cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            wows();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}
void wowp()
{
system("open https://ru.wargaming.net/ru/games/wowp");

    do
    {
         cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            wows();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}

void wotb()
{
system("open https://ru.wargaming.net/ru/games/wotb");

    do
    {
         cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            wotb();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}
void caliber()
{
system("open https://ru.wargaming.net/ru/games/caliber");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            caliber();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}
void wotc()
{
system("open https://ru.wargaming.net/ru/games/wotc");

    do
    {
         cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            wotc();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}
void wowsc()
{
system("open https://ru.wargaming.net/ru/games/wowsconsole");

    do
    {
        cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            wowsc();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}

void wowsb()
{
system("open https://ru.wargaming.net/ru/games/wowsb");

    do
    {
         cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            wowsb();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}
void moo()
{
system("openhttps://ru.wargaming.net/ru/games/moo");

    do
    {
       cout << "Введите цыфру соответствующую необходимому пункту меню:"<<endl<<" 0 - Основная страница Wargaming;"<<endl<<"Неходимо выбрать страницу, которую хотим открыть:"<<endl<<" 1 - Страница игры , которую выбрали раньше"<<endl<<" 2 - ЦПП Wargaming;"<<endl<<" 3 - Премиум магазин;"<<endl<<" 4 - Установка игры"<<endl;
        cin>>menu_2;
    switch (menu_2) {
        case 0:
        {
            wg();
            break;
        }
        case 1:
        {
            moo();
            break;
        }
        
        case 2:
        {
            support();
            break;
        }
        case 3:
        {
            shop();
            break;
        }
        case 4:
        {
            dwnl();
            break;
        }
            
        default:
            break;
    }
    }
    while(menu_2!=0);
}






void support()
{
   system("open https://ru.wargaming.net/support/?utm_content=cm-top&utm_source=global-nav&utm_medium=link&utm_campaign=wgnp");
}
void shop ()
{
    system("open https://ru.wargaming.net/shop/?utm_content=cm-top&utm_source=global-nav&utm_medium=link&utm_campaign=wgnp");
}
void dwnl()
{
    cout<<"загрузка игры"<<endl;
    system("open https://redirect.wargaming.net/WGC/Wargaming_Game_Center_Install_RU.dm");
}
//  //ЦПП
//  //ПМ
// //DWNL
