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

## Exam prep

### Theoretical exam - 25 min 

#### 1, Mit ír ki az alábbi program? Válaszát írja a szaggatott vonalra!		
```c++

#include <iostream>
using namespace std;
float Fx(int * t, int x);
int main()
{
int szam = 2;
int tmb[2] = { 4.3,3.5 };

	cout << Fx(tmb, szam);			//--------------- 3 pont
}

float Fx(int * t, int x)
{
float seged = 0;
for (int i = 0; i < x; i++)
seged = seged + t[i];
if (seged > 7) return 1;
return 0;
}
```

Hibát ad:
- tömb inicializálás: `int tmb[2] = { 4.3,3.5 };` --> float data type-ot akarunk egy int array-be tenni, 
a C++ fordító nem fogadja el implicit módon a lebegőpontos számot egész számként inicializáló konstansnak
egy szűkítő konverzió esetén (Narrowing Conversion)
- illetve az `Fx` függvény is egy int típusú pointert vár, tehát a tömbben megadott float értékek ott
is data type nem egyezőségi hibát fognak okozni.

#### 2, Mit ír ki az alábbi program? Válaszait írja a pontozott vonalakra!
```c++
#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 2, c = 10, er;
    er = a % b * c;
    cout << "\n eredmeny= " << er;		//......................2 pont

    b = 2;
    double val_er = 1 / 2 * 2 + 12;
    cout << "\n eredmeny=" << val_er;  	//.....................2 pont

    int i = 0, tmb[5] = { 1,2,3,4,5 };
    do {
        tmb[i] = 3 * i;
        i++;
    } while (i < 3);
    cout << "\n tmb[2]= " << tmb[2];		//......................2 pont

    a = 2; b = 15;
    switch (a)
    {
        case 0: b = b + 1;
        case 1: b = 3;
        case 2: b = 100;
        case 3: b = 350;
    }
    cout << "\n b= " << b;			//......................2 pont
    return 0;
}
```

- eredmeny=10
- eredmeny=12 --> hiába `double` a változó delklarálása mivel int alapú máveletet hajtunk végre ezért 
`1/2 = 0` és nem `0.5`. Ahhoz a műveletnek így kellene kinéznie: `double val_er = 1.0 / 2.0 * 2.0 + 12;`
- tmb[2]=6 --> nem számít hogy milyen értékeke voltak eredetileg a tömbben mert csak az `i`-vel számolunk.
- b=350 --> `case 2:`-nél nincs break tehát a `case 3:`-ben is lefut.

#### 3, Mit ír ki az alábbi program részlet? Válaszát írja a szaggatott vonalra!
```c++
#include <iostream>
using namespace std;

int main() {
    int f = 20, * mut;
    int& fi = f;
    mut = &f;
    cout << "f=" << f <<" *mut= " << *mut << endl;	//---------------	2pont
    fi = f**mut;
    cout << "fi=" << fi << " *mut= " << *mut << endl;   //---------------	2pont
}
```

- f=20 *mut= 20
- fi=400 *mut= 400

#### 4, Mi a hiba az alábbi programrészletekben? Húzza alá a hibát és válaszát írja a pontozott vonalra!
```c++
int i , k=10;					//---------------	2pont
		for(i=0, i<12, ++i )
		{ k+=i;}
				
int tomb[3]={2};				
	cin<<  tomb[1]; 				//---------------	2pont

int main
		{
			int j=1, i=2;
			j = j+2;
	}						//---------------	2pont

int *szam, hosz=5;
	szam = hossz;
	cout << hossz << endl; 			//---------------	2pont

```
1. `for` ciklus feltételeit `;`-vel kell elválasztani
2. `cin <<` nem értelmezhető mert
`cin` - "control input from a stream buffer" vagyis beolvasásra hesználható de a
`<<` - "[stream insertion operator](https://en.cppreference.com/w/cpp/language/operators.html#Stream_extraction_and_insertion)" 
ebben az esetben egy bemeneti stream-re akar írni de onnan csak olvasni tudunk. (asszem)
3. `main` függvény helytelenül deklarált `int main () {}` a paraméter lehet üres de nem maradat le mert akkor
formailag nem helyes a függvény.
4. most erre mit mondjak `hosz` != `hossz`


#### 5, A C++ nyelv szabályait figyelembe véve mely függvénydeklarációk szabályosak az alábbiak közül?
```c++
    1. int* FV(int a, int b);
    2. int (int a, int *);
    3. float H(int &, *k);
    4. double C (int a, c, float x);
```
a, Mind a 4 jó    
b, egyik sem jó    
c, Az 1, 2, 4 a jó   
d, 1, 2 a jó   
e, 2,3,4 a jó  
f, az 1, 3 a jó    
g, az 1 a jó --------> ez a helyes válasz

1. `int* FV(int a, int b);` 
   - Szabályos.
   - Visszatérési típus: `int*` (pointer egy egész számra).
   - Függvény neve: FV.
   - Paraméterek: Két egész szám `(int a, int b)`.
   - Ez egy teljesen szabályos függvényprototípus.

2. `int (int a, int *);`
   - Szabálytalan.
   - Hiányzik a függvény neve a visszatérési típus (int) és a paraméterlista között.
   - A második paraméternél (int *) a paraméter neve opcionális, de a függvény neve kötelező. 
   (Például: `int FuggvenyNev(int a, int *b);` szabályos lenne.)

3. `float H(int &, *k);`
   - Szabálytalan.
   - A második paraméter deklarációja hibás: *k.
   - Ha a k egy pointer lenne, a helyes forma: int *k (vagy float *k, attól függően, hogy milyen 
   típusú mutatót szeretnénk). A C++ nyelvben nem hagyható el a paraméter típusa a név előtt, még 
   ha az egy pointer vagy referencia is. (Például: `float H(int &r, int *k);` szabályos lenne.)

4. `double C (int a, c, float x);`
   - Szabálytalan.
   - A második paraméter (c) deklarációja hibás.
   - Hiányzik a típusa. Minden paraméter előtt fel kell tüntetni annak típusát. A C-ben létezett 
   implicit int feltételezés, de a modern C++ szabványban ez nem megengedett. 
   (Például: `double C (int a, int c, float x);` szabályos lenne.)




### Practical exam - 50 min 

Feladat:
Egy vegyesbolt adatait kell tárolni. Tároljuk az áruk neveit (string),  árát,
és a raktáron lévõ darabszámot!
Hozzunk létre egy az elõbbiek tárolására szolgáló struktúra típusú változót!
Maximum 15 db különféle árúnk lehet (15 elemû a struktúra tömb)!
1. Kérjük  be az árúk számát ellenõrzötten!
2. Kérjük be az áruk neveit! (pl. fekete ribizli szörp)
3. Kérjük be az áruk árát ellenõrzötten(nem lehet 5000 Ft nál nagyobb és 100 Ft- nál kisebb!)
4. Kérjük be az árúk darabszámát véletlengenerátorral (az árúk száma 1 és 10 db között lehet)
5. Írja ki az adatokat táblázatosan!
6. Határozza meg, és írja ki, mennyi az egész árukészlet értéke!
7. Számolja ki az átlagos árat és írja ki a képernyõre !
8. Számolja meg hány áruból van több mint öt raktárkészleten!
9. Írja ki a legdrágább áru nevét és árát!
10. Emelje az árakat 20 %-kal majd írja ki az áruk nevét és új árát!