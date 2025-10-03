# NJE ProgInfo cpp practice

## Seminar 1

### Practice 1
Írjon egy egyszerű programot, egy negyvenöt egység oldalhosszúságú
négyzet kerületének kiszámítására!

### Practice 2
Téglalap területének kiszámítása user input alapján

### Practice 3
Betű kiírása ASCII számmal user input alapján

### Practice 4
Bekér két számot, majd eldönti, hogy páros, vagy páratlan.

### Practice 5
Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen.

### Practice 6
Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen. 
Egymásba ágyazott if else ágakkal.

### Practice 7
Matematika tantárgy érdemjegyét bekérve kiírja azt szövegesen, switch használatával.

## Seminar 2

### Practice 8
Írjunk egy programot, amely egy bekért betű kis és nagybetűs változatait adja meg!

### Practice 9
Írjunk egy programot, amely egy karakterről eldönti, hogy betű, szám, vagy egyéb jel!  

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