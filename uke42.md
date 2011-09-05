
Denne uken er temaet kommunikasjon mellom prosesser.

**fork:** et systemkall som "splitter" kjøringen av programmet i to; en foreldreprosess og en barneprosess, med hver sin tilstand.

**pid:** *process id* - et tall som identifiserer en prosess.

**pipe:** et fildeskriptor-par som fungerer som en fifo (kø); vi kan skrive til den ene, og lese dataene ut igjen fra den andre. Pipes kan brukes brukes for å kommunisere mellom prosesser.

**signal:** en måte å gi en beskjed til et program på. Brukes særlig til å håndtere predefinerte beskjeder for OS-et, som for eksempel "avslutt, er du snill", eller "avslutt nå!".


### Oppgaver uke 42:


Ta en titt på [eksempelprogrammene](http://heim.ifi.uio.no/~inf1060/programs/) på kurssiden.


#### 1:

Skriv et program som starter åtte barneprosesser, som hver skriver ut `123` i terminalen. Når barneprosessene er ferdig, skal foreldreprosessen skrive ut et linjeskift.


#### 2:

Skriv et program som åpner en pipe, forker en barneprosess, sender en beskjed fra barneprosessen gjennom pipe-en, og leser beskjeden fra barneprosessen i foreldreprosessen. Skriv log-meldinger til terminalen om det som skjer.

#### 3:

Skriv et program som forker en barneprosess som venter på et _signal_ før den skriver ut en beskjed og avslutter. Send dette signalet fra foreldreprosessen, ett sekund etter at barneprosessen ble forket ut. Logg det som skjer til terminalen.



