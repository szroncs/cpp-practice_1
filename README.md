# NJE ProgInfo cpp practice

## Seminar 1

### Practice 1
Írjon egy egyszerű programot, egy negyvenöt egység oldalhosszúságú
négyzet kerületének kiszámítására!
```c++
#include <iostream>
using namespace std;


int main() {
    int hossz = 45;
    cout << "A negyzet kerulete: " << hossz * 4 << endl;
    return 0;
}
```

### Practice 2
Téglalap területének kiszámítása user input alapján
```c++
int main() {
    int a, b;
    cout << "Adja meg a teglalap oldalait: " << endl;
    cin >> a >> b;
    cout << "A teglalap terulete: " << a * b << endl;
    cin.ignore().get(); // wait for user input before closing, 
    // similar to system("pause") but that only works on windows
    return 0;
}
```

### Practice 3
Betű kiírása ASCII számmal user input alapján
```c++
#include <iostream>
using namespace std;

int main() {
    int i;
    char betu;
    cout << "Adjon meg egy betut: " << endl;
    cin >> betu;
    i = betu;
    cout << "A megadott betu ASCII száma: " << i << ", az eredeti betu: " << betu << endl;
    cout << endl;

    cout << "A program vege, nyomjon egy billentyut a kilepeshez..." << endl;
    cin.ignore().get(); // wait for user input before closing, 
    // similar to system("pause") but that only works on windows
    return 0;
}
```

### Practice 4
Bekér két számot, majd eldönti, hogy páros, vagy páratlan.
```c++
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az elso szamot: ";
    cin >> num;
    cout << endl;
    if (num % 2 == 0) {
        cout << "Az elso szam paros." << endl;
    } else {
        cout << "Az elso szam paratlan." << endl;
    }
    cout << endl << "Kerem a masodik szamot: ";
    cin >> num;
    cout << endl;
    if (num % 2 == 0) {
        cout << "Az masodik szam paros." << endl;
    } else {
        cout << "Az masodik szam paratlan." << endl;
    }
    cin.ignore().get();

    return 0;
}
```

### Practice 5
Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen.
```c++
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az erdemjegyet: " << endl;
    cin >> num;
    cout << endl;
    if (num < 1 || num > 5 ) {
        cout << "Nem megfelelo szamot adott meg." << endl;
    }

    if (num == 1) {cout << "Elegtelen" << endl;}
    if (num == 2) {cout << "Elegseges" << endl;}
    if (num == 3) {cout << "Kozepes" << endl;}
    if (num == 4) {cout << "Jo" << endl;}
    if (num == 5) {cout << "Jeles" << endl;}

    cin.ignore().get();
    return 0;
}
```


### Practice 6
Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen. 
Egymásba ágyazott if else ágakkal.

```c++
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az erdemjegyet: " << endl;
    cin >> num;
    cout << endl;
    if (num < 1 || num > 5) {
        cout << "Nem megfelelo szamot adott meg." << endl;
    }
    if (num == 1) {cout << "Elegtelen" << endl;} else {
        if (num == 2) {cout << "Elegseges" << endl;} else {
            if (num == 3) {cout << "Kozepes" << endl;} else {
                if (num == 4) {cout << "Jo" << endl;} else {
                    if (num == 5) {cout << "Jeles" << endl;}
                }
            }
        }
    }

    cin.ignore().get();
    return 0;
}
```

### Practice 7
Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen, switch használatával.

```c++
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Kerem az erdemjegyet: " << endl;
    cin >> num;
    cout << endl;
    switch (num) {
        case 1:
            cout << "Elegtelen" << endl;
            break;
        case 2:
            cout << "Elegseges" << endl;
            break;
        case 3:
            cout << "Kozepes" << endl;
            break;
        case 4:
            cout << "Jo" << endl;
            break;
        case 5:
            cout << "Jeles" << endl;
            break;
        default:
            cout << "Nem megfelelo szamot adott meg." << endl;
    }

    cin.ignore().get();
    return 0;
}
```

## Seminar 2

### Practice 8
Írjunk egy programot, amely egy bekért betű kis és nagybetűs változatait adja meg!

```c++
#include <iostream>
using namespace std;

int main() {
    char letter, nagy, kicsi;
    cout << "Kerem a betut: ";
    cin >> letter;
    cout << endl;
    nagy = toupper(letter);
    kicsi = tolower(letter);
    cout << "Kisbetu: " << nagy << endl;
    cout << "Nagybetu: " << kicsi << endl;

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}
```

### Practice 9
Írjunk egy programot, amely egy karakterről eldönti, hogy betű, szám, vagy egyéb jel!  

```c++
#include <iostream>
using namespace std;

int main() {
    char k;
    cout << "Kerem egy tetszoleges karaktert: ";
    cin >> k;
    int x = isalpha(k);
    int y = isdigit(k);
    if (x != 0) {
        cout << "A megadott karakter betu" << endl;
    } else {
        if (y != 0) {
            cout << "A megadott karakter szam" << endl;
        } else {
            cout << "A megadott karakter nem betu es nem szam" << endl;
        }
    }

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}
```

***

### Learning material - Ciklusok
Bizonyos utasítások automatikus ismétlését biztosító programszerkezetet
iterációnak vagy ciklusnak nevezzük, az ismétlés mindaddig tart, amíg az
ismétlési feltétel igaznak bizonyul. Ciklusszerkezetek (iterációk)

* számlálós ciklus – for (kifejezés) {utasítás}
* elöl tesztelős ciklus – while (kifejezés) {utasítás}
* hátul tesztelős ciklus – do {utasítás} while (kifejezés)

> - {utasítás} elnevezése – ciklusmag, ciklus törzse     
> - utasításon belüli változó definíció – érvényességi köre csak az utasításon belül  


***
### Practice 10
Írjunk egy programot, amely egymás alá tízszer kiírja a nevünket!

**Megoldás**
```c++
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << i+1 << "\t" << "Regos Bendeguz" << endl; // a "\t" a tabulátor vagy tab karakter
    }

    cout << endl << "Press any key to exit";
    cin.ignore().get();
        // ez a rész megegyezik a 'system("pause");' kifejezésnek de az csak windows környezetben működik, 
        // ez pedig minden OS-en 
    return 0;
}
```

### Practice 11
Írjunk egy programot, amely egy bekért egész számig kiszámítja a számok összegét! - `for` ciklussal.  
Ebben a feladatban 0-tól indulunk egészen a felhasználó által megadott számig. 
A ciklus elején van a kifejezés amit validálunk. 

**Megoldás**
```c++
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Kerem egy egesz szamot: ";
    cin >> num;
    cout << endl;

    for (int i = 1; i <= num; i++) {
        sum += i; // ugyanaz mint a 'sum = sum + i;'
    }

    cout << "A szamok osszege: " << sum << endl;

    cout << endl << "Press any key to exit";
    cin.ignore().get(); 
        // ez a rész megegyezik a 'system("pause");' kifejezésnek de az csak windows környezetben működik, 
        // ez pedig minden OS-en 
    return 0;
}
```

### Practice 12
Írjunk programot amely bekéri öt nap hőmérsékletét (egész értékben) és kiszámítja az átlaghőmérsékletet!

**Megoldás**
```c++
#include <iostream>
using namespace std;

int main() {

    int i, temp, sum = 0;

    for (i = 1; i <= 5; i++) {
        cout << "Adja meg a " << i << ". nap homersekletet: " << endl;
        cin >> temp;
        sum += temp;
    }

    cout << "A napok atlag homerseklete: " << (float)sum / 5 << endl; 
        // a 'sum' változó 'int' típussal volt deklarálva de type casting-al 'float'-ként kezeljük
        // ez nem írja felül a változó típusát, ettől még a 'sum' változó továbbra is 'int' típusú

    cout << endl << "Press any key to exit";
    cin.ignore().get();
    return 0;
}
```

### Practice 13
Írjunk egy programot, amely egy bekért egész számig kiszámítja a számok összegét! - `while` ciklussal.


**Megoldás**
```c++
#include <iostream>
using namespace std;

int main() {
    int i, sum = 0;
    cout << "Kerem egy egesz szamot: ";
    cin >> i;
    cout << endl;

    while (i > 0) {
        sum += i; // ugyanaz mint a 'sum = sum + i;'
        i--;      // ugyanaz mint a 'i = i - 1;'
    }

    cout << "A szamok osszege: " << sum << endl;

    cout << endl << "Press any key to exit";
    cin.ignore().get();
        // ez a rész megegyezik a 'system("pause");' kifejezésnek de az csak windows környezetben működik, 
        // ez pedig minden OS-en 
    return 0;
}
```

### Practice 14
Írjunk egy programot, amely egy bekért számról megmondja hány valódi osztója van!

**Megoldás**
```c++
#include <iostream>
using namespace std;
```

_____________________________________________________________

# 2025-10-18 órai munka
