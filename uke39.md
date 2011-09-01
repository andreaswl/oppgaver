






**Begrep:** forklaring



### Oppgaver uke 39:




#### 1:

Beskriv hva som skjer når en bruker gjør et tastetrykk på en terminal knyttet
til et flerbruker-system. Svarer systemet forskjellig for preemptive eller
ikke-preemptive systemer? Hvorfor eller hvorfor ikke?


#### 2:

Tidligere versjoner av Windows brukte en essensielt ikke-preemptive 
dispatching-teknikk som Microsoft kaller "cooperative multitasking".  
Med denne teknikken, forventes det at hvert program frivillig gir fra 
seg CPU-en periodisk for å gi andre prosesser en sjanse til å
eksekvere. Diskuter denne metoden. Hvilke potensielle vanskeligheter 
kan denne metoden forårsake?


#### 3:

Hvorfor er program-relokering unødvendig når virtuelt minne benyttes?
 

#### 4:

CPU schedulerings-algoritmen (i Unix) er en enkel prioritets-algoritme.
Prioriteten for en prosess beregnes som forholdet mellom CPU tiden som 
er brukt av prosessen og virkelig tid som har gått. Jo lavere tall jo 
høyere prioritet. Prioriteter re-kalkuleres hvert tiende sekund.

1. Hva slags jobber favoriseres ved denne typen algoritme?
2. Hvis det ikke utføres noe I/O, vil denne algoritmen reduseres til
   en round-robin-algoritme. Forklar hvorfor.
3. Diskuter denne algoritmen i forhold til de generelle hensiktene som
   man ønsker å oppnå med schedulering.


#### 5:

A
~~~~
Vi vil beregne 1+2+3+...+3000, og ønsker å gjøre dette i parallell.
Lag et program som starter tre barneprosesser som:

    - beregner henholdsvis summene 1-1000, 1001-2000 og 2001-3000.
    - venter i en tilfeldig antall sekunder (mellom 0 og 5).
    - skriver svaret til hver sin fil.

Foreldreprosessen skal vente til alle tre barna er ferdige, så kan den 
lese tallene på de tre filene og summere dem.

B
~~~~
Oppdater programmet slik at barneprosessene returnerer mellomverdiene i 
status feltet til wait() istedenfor å skrive til fil.


#### 6:


I inntrengerprogrammer finner man ofte følgende lille kodesnutt flere
steder:

    if (fork() > 0) exit(0);

Hva gjør denne kodebiten? Hvorfor brukes denne i ulovlige program?


#### 7:

Forklar konsekvensene av at en bruker utfører:

    while(1) fork();
