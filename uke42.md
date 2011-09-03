

Denne uken skal vi se nærmere på kommunikasjon mellom prosesser. Hovedbegrepene er `fork()`, pipes, signaler og pid-er.


**fork:** et systemkall som "splitter" kjøringen av programmet i to; en foreldreprosess og en barneprosess, med hver sin tilstand.

**pid:** "process id" - et tall som identifiserer en prosess.

**pipe:** et fildeskriptor-par som fungerer som et fifo (kø); vi kan skrive til den ene enden, og lese dataene ut igjen fra den andre enden. Pipes brukes ofte for å kommunisere mellom prosesser.



### Oppgaver uke 42:



#### 1:

Skriv et program som starter åtte barneprosesser, som hver skriver ut `123` i terminalen. Når barneprosessene er ferdig, skal foreldreprosessen skrive ut et linjeskift.


#### 2:

Skriv et program som åpner en pipe, forker en barneprosess, sender en beskjed fra barneprosessen gjennom pipe-en, og leser beskjeden fra barneprosessen i foreldreprosessen. Skriv log-meldinger til terminalen om det som skjer.

#### 3:

Skriv et program som forker en barneprosess som venter på et _signal_ før den skriver ut en beskjed og avslutter. Send dette signalet fra foreldreprosessen, ett sekund etter at barneprosessen ble forket ut. Log det som skjer til terminalen.



