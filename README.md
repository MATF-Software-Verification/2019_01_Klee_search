# Target-searcher

## Opis projekta

U okviru ovog projekta implementiran je novi način pretrage koji alat KLEE može da koristi prilikom simboličkog izvršavanja.
Ime pretrage je Target-searcher jer se zasniva na tome da su korisnici ovog alata u mogućnosti da sami odaberu vrstu pretrage, iz skupa pretraga koje alat KLEE nudi, kojom žele da obrade konkretnu funkciju.<br/>Rad predstavlja nadogradnju postojećeg projekta(https://github.com/salesh/klee). Za razliku od pomenutog projekta, u ovom radu je omogućeno korišćenje više različitih pretraga, a ne samo DFS i BFS. Pod sekcijom rezultati mogu se videti upoređeni rezultati izvršavanja pretrage korišćenjem našeg algoritma i ostalih algoritama koje KLEE nudi.

## Uputstvo za korišćenje
Da biste ispravno koristili našu pretragu, pratite sledeća uputstva.
1) Neophodno je imati instaliran alat KLEE na svojoj mašini. Uputstvo možete pronaći na linku "http://www.verifikacijasoftvera.matf.bg.ac.rs/vs/vezbe/InstallationProcedure" pod sekcijom KLEE.

2) Zatim treba skinuti projekat na svoju mašinu komandom: ``git clone https://github.com/MATF-Software-Verification/06_Klee_search.git``.

3) Pozicionirajte se u direktorijum gde se nalazi datoteka koju želite da testirate.

4) Zatim datoteku treba prevesti u bajtkod, nad kojim KLEE radi, komandom: ``clang-6.0 -emit-llvm -c -g ime_programa.c``

5) Nakon toga se kao rezultat dobija datoteka ime_programa.bc

6) Onda treba izvršiti komandu: ``klee --search=target-searcher --target-bfs=ime_prve_funkcije, ime_druge_funkcije, .., ime_nte_funkcije --target-dfs=ime_prve_funkcije, ime_druge_funkcije, .., ime_nte_funkcije --target-rps=ime_prve_funkcije, ime_druge_funkcije, .., ime_nte_funkcije  ime_fajla.bc`` <br/>  
Argument komandne linije ``--search`` nam omogućava da izaberemo koju pretragu hoćemo da koristimo. Zato tu biramo ``target-searcher``, odnosno našu vrstu pretrage.
Sledeći argumenti predstavljaju način putem kojeg definišemo koja vrsta pretrage će biti izvršena nad kojim funkcijama. Na primer ukoliko želimo neke konkretne funkcije da obiđemo DFS pretragom to činimo tako što kao argument komandne linije dodamo ``--target-dfs`` nakon čega ispisujemo listu funkcija odvojenih zarezima. Na samom kraju nalazi se ime prethodno prevedenog programa.<br/>
<a/>
Legenda za pretrage: <br/>

| Target-searcher                                       | KLEE                                                 |
|:-----------------------------------------------------:|:----------------------------------------------------:|
| --target-dfs = lista_funkcija                         | Pozivamo search=dfs za listu_funkcija                |
| --target-bfs = lista_funkcija                         | Pozivamo search=bfs za listu_funkcija                |
| --target-rs = lista_funkcija                          | Pozivamo search=random za listu_funkcija             |
| --target-rps = lista_funkcija                         | Pozivamo search=random-path za listu_funkcija        |
| --target-wrs<sup>*</sup> = lista_funkcija             | Pozivamo search=weighted-random za listu_funkcija    |

<sup>*</sup>Osim liste funkcija može se navesti i željena heuristika komandom ``--type-wrs=ime_heuristike``. Ukoliko to nije učinjeno, podrazumevana je ``MinDistToUncovered``. Osim ove heuristike moguće je odabrati sledeće: ``Depth``, ``QueryCost``, ``InstCount``, ``CPInstCount``, ``MinDistToUncovered``, ``CoveringNew``.
