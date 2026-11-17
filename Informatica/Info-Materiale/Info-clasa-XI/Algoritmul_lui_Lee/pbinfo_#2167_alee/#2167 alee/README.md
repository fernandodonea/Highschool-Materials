# Pbinfo - #2167 Alee
Parcul oraşului a fost neglijat mult timp, astfel că acum toate aleile sunt distruse. Prin urmare, anul acesta Primăria şi-a propus să facă reamenajări. Parcul are forma unui pătrat cu latura de n metri și este înconjurat de un gard care are exact două porți. Proiectanții de la Primărie au realizat o hartă a parcului și au trasat pe hartă un caroiaj care împarte parcul în nxn zone pătrate cu latura de 1 metru. Astfel harta parcului are aspectul unei matrice pătratice cu n linii și n coloane. Liniile și respectiv coloanele sunt numerotate de la 1 la n. Elementele matricei corespund zonelor pătrate de latură 1 metru. O astfel de zonă poate să conțină un copac sau este liberă. Edilii orașului doresc să paveze cu un număr minim de dale pătrate cu latura de 1 metru zonele libere (fără copaci) ale parcului, astfel încât să se obțină o alee continuă de la o poartă la alta.

## Cerința
Scrieți un program care să determine numărul minim de dale necesare pentru construirea unei alei continue de la o poartă la cealaltă.

## Date de intrare
Fișierul de intrare alee.in conține pe prima linie două valori naturale n și m separate printr-un spațiu, reprezentând dimensiunea parcului, respectiv numărul de copaci care se găsesc în parc. Fiecare dintre următoarele m linii conține câte două numere naturale x și y separate printr-un spațiu, reprezentând pozițiile copacilor în parc (x reprezintă linia, iar y reprezintă coloana zonei în care se află copacul). Ultima linie a fișierului conține patru numere naturale x1 y1 x2 y2, separate prin câte un spațiu, reprezentând pozițiile celor două porți (x1, y1 reprezintă linia și respectiv coloana zonei ce conține prima poartă, iar x2, y2 reprezintă linia și respectiv coloana zonei ce conține cea de a doua poartă).

## Date de ieșire
Fișierul de ieșire alee.out va conţine o singură linie pe care va fi scris un număr natural care reprezintă numărul minim de dale necesare pentru construirea aleii.

## Restricții și precizări
1 ≤ n ≤ 175
1 ≤ m < n*n
Aleea este continuă dacă oricare două plăci consecutive au o latură comună.
Aleea începe cu zona unde se găsește prima poartă și se termină cu zona unde se găsește cea de a doua poartă.
Pozițiile porților sunt distincte şi corespund unor zone libere.
Pentru datele de test există întotdeauna soluție.
### Exemplu:
alee.in
```
8 6 
2 7
3 3
4 6
5 4
7 3
7 5 
1 1 8 8
```
alee.out
```
15
```
Explicație
O modalitate de a construi aleea cu număr minim de dale este:
```
OOO-----
--OO--x-
--xO----
---OOx--
---xO---
----OO--
--x-xOO-
------OO
```
(cu X am marcat copacii, cu - zonele libere, iar cu O dalele aleii).