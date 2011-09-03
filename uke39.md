
Jeg kommer ikke til å legge ut så mange flere oppgaver i C i løpet av det som gjenstår av kurset. Vi har dekket det viktigste, og vi kommer til å arbeide videre med det. Det som gjenstår å lære om C, er spredt over de kommende forelesningene og gruppetimene, og har for det meste å gjøre med nettverk og kommunikasjon mellom prosesser. Jeg legger også ut teorioppgavene fra tidligere år. Bruk tiden der du har behov.

I plenumsgruppene fremover planlegger jeg å arbeide videre med temaer som feilsøking, strukturering av kode, arbeid med litt større problemer, og selvfølgelig repetisjon og oppklaring av de problemene som måtte dukke opp underveis. I den forbindelse kan vi jobbe litt videre med nye funksjoner for `gull`-programmet de ukene det blir tid for det.


#### Jeg kommer til å arbeide med denne oppgaven i gruppetimen:

Oppdater programmet `gull` som vi ble ferdig med å debugge [sist uke](.):

- Bruk ringbufferet fra uke 37 for å lagre gullkornene
- Lag et nytt menyvalg der brukerne kan legge til sine egne gullkorn
- Se til at programmet bruker minne på en fornuftig måte med `valgrind` eller et annet verktøy.



### Teori-oppgaver for uke 39:

#### 1:

Beskriv hva som skjer når en bruker gjør et tastetrykk på en terminal knyttet til et flerbruker-system. Svarer systemet forskjellig for preemptive eller ikke-preemptive systemer? Hvorfor eller hvorfor ikke?


#### 2:

Tidligere versjoner av Windows brukte en essensielt ikke-preemptive dispatching-teknikk som Microsoft kaller "cooperative multitasking".  Med denne teknikken, forventes det at hvert program frivillig gir fra seg CPU-en periodisk for å gi andre prosesser en sjanse til å eksekvere. Diskuter denne metoden. Hvilke potensielle vanskeligheter kan denne metoden forårsake?


#### 3:

Hvorfor er program-relokering unødvendig når virtuelt minne benyttes?
 

#### 4:

CPU schedulerings-algoritmen (i Unix) er en enkel prioritets-algoritme.  Prioriteten for en prosess beregnes som forholdet mellom CPU tiden som er brukt av prosessen og virkelig tid som har gått. Jo lavere tall jo høyere prioritet. Prioriteter re-kalkuleres hvert tiende sekund.

1. Hva slags jobber favoriseres ved denne typen algoritme?
2. Hvis det ikke utføres noe I/O, vil denne algoritmen reduseres til
   en round-robin-algoritme. Forklar hvorfor.
3. Diskuter denne algoritmen i forhold til de generelle hensiktene som
   man ønsker å oppnå med schedulering.


#### 6:

I inntrengerprogrammer finner man ofte følgende lille kodesnutt flere
steder:

    if (fork() > 0) exit(0);

Hva gjør denne kodebiten? Hvorfor brukes denne i ulovlige program?


#### 7:

Forklar konsekvensene av at en bruker utfører:

    while(1) fork();
