

(Intro)

**Begrep:** forklaring



### Oppgaver uke 41:




#### 1:

Vi har en disk som har 100 spor (*tracks*), nummerert fra 0 til 99.  
Anta at pÃ¥ et bestemt tidspunkt leser disken en sektor fra spor 50.  
Etter denne forespÃ¸rselen ligger det fÃ¸lgende forespÃ¸rsler i kÃ¸en 
(hvert tall henviser til hvilket spor den forespurte blokken ligger 
pÃ¥, og ordningen viser i hvilken rekkefÃ¸lge forespÃ¸rselene ankom 
systemet med forespÃ¸rselen lengst til hÃ¸yre,
dvs. 2, som fÃ¸rste)::

   99 55 43 78 4 11 89 67 1 98 45 88 60 30 77

A
~~~~
Vis i en grafisk figur hvordan diskhodet beveger seg over de 
forskjellige sporene hvis vi bruker henholdsvis 
*First-Come-First-Serve* (FCFS) og SCAN (diskhodet er pÃ¥ vei fra
lavt-nummererte spor til hÃ¸yt-nummererte spor).

B
~~~~
Anta i tillegg at:

	1. det Ã¥ flytte hodet tar 10 ms per spor/track (konstant  tid per spor),
	2. disken roterer  7500 ganger i minuttet.
	3. det Ã¥ lese en blokk tar 1 ms per blokk.

Ut i fra denne informasjonen skal du beregne tiden det tar fÃ¸r hele kÃ¸en
av forespÃ¸rsler er utfÃ¸rt hvis vi antar en gjennomsnittlig
rotasjonsforsinkelse per forespÃ¸rsel for FCFS og SCAN schedulerene.


#### 2:

Du har lagt merke til at lasting av programmer fra en av dine floppy-
disker synes Ã¥ ta lenger tid enn det pleide Ã¥ gjÃ¸re. En venn foreslÃ¥r 
Ã¥ kopiere filene fra din disk, en etter en, til en new floppy-disk. Du
gjÃ¸r dette, og oppdager at programmene lastes mye raskere nÃ¥. Hva hendte?


#### 3:

Forklar hvorfor en **flytt** operasjon fra et utstyr til et annet 
krever manipulasjon av filen selv, mens en **flytt** operasjon fra et 
sted til et annet pÃ¥ samme utstyret innebÃ¦rer bare manipulasjon av 
katalogen.


#### 4:

List et antall filtyper som du vil anta blir aksesert sekvensielt.
GjÃ¸r det samme for filer som du vil forvente krever random aksess.


#### 5:

Hva er fordelene med Ã¥ partisjonere en disk istedenfor Ã¥ bruke hele
disken som en partisjon?


#### 6:

Hva er hensikten med/hva gjÃ¸r open og close operasjonene? 


#### 7:

Lag et program som Ã¥pner samme fil for skriving (write) fra to ulike 
prosesser ved hjelp av ``fork()``. Hva skjer? Hvorfor?


#### 8:

Lag et program som skriver beskjeden *hello world* til fil ved hjelp 
av lav-nivÃ¥ I/O (unix filesystem interface) kallene ``open()`` og 
``write()``.



