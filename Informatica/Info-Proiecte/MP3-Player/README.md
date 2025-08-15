# MP3 Player (C++)

Acest proiect este un player muzical simplu, realizat în C++, care permite gestionarea unei biblioteci de melodii și crearea de playlisturi personalizate. 


## Scopul proiectului
Proiectul are ca scop exersarea și demonstrarea unor concepte fundamentale din programarea C++:
- Utilizarea tipului `struct` pentru organizarea datelor complexe (melodii, playlisturi)
- Implementarea unui meniu interactiv folosind instrucțiunea `switch`
- Utilizarea librăriilor create de utilizator (fișiere header și sursă proprii)
- Lucrul cu fișiere pentru stocarea și citirea datelor


## Funcționalități principale
- Citirea pieselor dintr-un fișier (`piese.in`)
- Afișarea librăriei de melodii
- Căutarea melodiilor după artist sau gen muzical
- Afișarea melodiilor favorite
- Sortarea pieselor în ordine alfabetică
- Crearea și afișarea playlisturilor
- Vizualizarea top 10 cele mai ascultate melodii

## Structura proiectului
- `main.cpp` — Punctul de intrare al aplicației, conține logica meniului principal
- `playlistformat.cpp` — Implementarea funcțiilor pentru gestionarea pieselor și playlisturilor
- `playlistformat.hpp` — Declarațiile funcțiilor utilizate în proiect
- `piese.in` — Fișier text cu datele despre melodii (nume, artist, album, gen, durată, cod, streams, favorit)

## Autori
- Donea Fernando
- Bejenaru Cosmin

## Observații
- Interfața este de tip consolă.
- Pentru a utiliza funcțiile, urmați instrucțiunile din meniu.
- Pentru a adăuga melodii noi, editați fișierul `piese.in` conform formatului existent.

### Fișierul `piese.in`
1. Pe prima se afla numarul de piese citite
2. Pe urmatoarele `n` linii se afla informatiile despre fiecare piesa, in urmatorul format:
```
    nume piesa (sir de caractere)
    artist (sir de caractere)
    album (sir de caractere)
    gen muzical (sir de caractere)
    durata (numar real)
    codul unic al piesei (numar intreg)
    numarul de streamuri (numar intreg)
    favorit (D/N)
```