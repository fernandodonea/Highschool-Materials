# Pbinfo - #1451 Iceberg
## Cerința
Se dă o matrice reprezentând o zonă dintr-un ocean ce conține un iceberg; valorile egale cu 1 fac parte din iceberg, iar cele egale cu 0 reprezintă apă.

Se știe că icebergul este înconjurat de apa (nu există nici o valoare de 1 pe marginea matricei) și că într-un interval de timp se topesc toate zonele icebergului care au cel puțin doua laturi vecine cu apa.

Determinați și afișați cate intervale de timp sunt necesare ca icebergul să se topească în întregime. De asemenea, afișați pentru fiecare interval de timp câte poziții de gheață are icebergul la începutul intervalului.

## Date de intrare
Programul citește de la tastatură numărul n, iar apoi o matrice de n linii și n coloane reprezentând zona icebergului.

## Date de ieșire
Programul va afișa pe ecran numărul t reprezentând numărul de intervale de timp și t numere naturale reprezentând suprafața ghețarului la începutul fiecărui interval.

## Restricții și precizări
1 ≤ n ≤ 31
Elementele de pe marginile matricii sunt tot timpul 0
Exemplu:
Intrare
```
7
0 0 0 0 0 0 0 
0 1 1 1 1 1 0 
0 0 1 1 1 0 0 
0 0 1 1 1 0 0 
0 1 1 1 1 1 0 
0 0 0 0 0 0 0
0 0 0 0 0 0 0
```
Ieșire
```
4
16
12
8
2
```
Explicație
După primul interval de timp ghețarul arată astfel:
```
0 0 0 0 0 0 0 
0 0 1 1 1 0 0 
0 0 1 1 1 0 0 
0 0 1 1 1 0 0 
0 0 1 1 1 0 0 
0 0 0 0 0 0 0 
```
După cel de-al doilea interval de timp ghețarul arată astfel:
```
0 0 0 0 0 0 0 
0 0 0 1 0 0 0 
0 0 1 1 1 0 0 
0 0 1 1 1 0 0 
0 0 0 1 0 0 0 
0 0 0 0 0 0 0 
```
După cel de-al treilea interval de timp ghețarul arată astfel:
```
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 1 0 0 0 
0 0 0 1 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
```
iar la pasul următor se topește de în întregime.