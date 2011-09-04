
Denne uken kommer vi til å se på disk og filsystemer. Hvis det blir tid, og er interesse for det, kan jeg gå igjennom et eksempel der jeg implementerer filoperasjoner i programmet gull, som vi har jobbet med i de tidligere gruppetimene.

Dette er oppgaveteksten for oppgaven jeg kommer til å løse, for de som er interessert:

Utvid [den nyeste versjonen av programmet "gull"](.), som vi har jobbet med tidligere, slik at gullkornene lagres til disk når programmet avsluttes, og leses når det starter. Når vi leser gullokornene kan vi dra nytte av funksjonen `File_get_line` som vi skrev da vi løste i oppgave 1, uke 37.



Relevante begreper:

**Systemkall:** funksjoner som tilbys av operativsystemet overfor programmer (programmerere) for å utføre nyttige oppgaver, som programmet ellers ikke hadde hatt tilgang til. To eksempler er `fopen()` og `fork()`;



### Oppgaver uke 41:



#### 1:

Vi har en disk med 100 spor (*tracks*), nummerert fra 0 til 99.  Anta at på et bestemt tidspunkt leser disken en sektor fra spor 50. Etter denne forespørselen ligger følgende forespørsler i køen (hvert tall henviser til hvilket spor den forespurte blokken ligger i, og ordningen viser i hvilken rekkefølge forespørselene ankom systemet, med forespørselen lengst til høyre, dvs. 2, som første):

    99 55 43 78 4 11 89 67 1 98 45 88 60 30 77

A)

Vis i en grafisk figur hvordan diskhodet beveger seg over de 
forskjellige sporene hvis vi bruker henholdsvis 
*First-Come-First-Serve* (FCFS) og SCAN (diskhodet er på vei fra
lavt-nummererte spor til høyt-nummererte spor).

B)

Anta i tillegg at:

1. det å flytte hodet tar 10 ms per spor/track (konstant  tid per spor),
2. disken roterer  7500 ganger i minuttet.
3. det å lese en blokk tar 1 ms per blokk.

Ut i fra denne informasjonen skal du beregne tiden det tar før hele køen av forespørsler er utført, hvis vi antar en gjennomsnittlig rotasjonsforsinkelse per forespørsel for FCFS og SCAN schedulerene.  

#### 2:

Du har lagt merke til at lasting av programmer fra en av dine floppy- disker synes å ta lenger tid enn det pleide å gjøre. En venn foreslår å kopiere filene fra din disk, en etter en, til en new floppy-disk. Du gjør dette, og oppdager at programmene lastes mye raskere nå. Hva hendte?


#### 3:
Forklar hvorfor en **flytt** operasjon fra et utstyr til et annet krever manipulasjon av filen selv, mens en **flytt** operasjon fra et sted til et annet pÃ¥ samme utstyret innebærer bare manipulasjon av katalogen.


#### 4:

List et antall filtyper som du vil anta blir aksesert sekvensielt.  Gjør det samme for filer som du vil forvente krever random aksess.  

#### 5:

Hva er fordelene med å partisjonere en disk istedenfor å bruke hele disken som en partisjon?  

#### 6:

Hva er hensikten med/hva gjør open og close operasjonene? 


#### 7:

Lag et program som åpner samme fil for skriving (write) fra to ulike prosesser ved hjelp av `fork()`. Hva skjer? Hvorfor?  

#### 8:

Lag et program som skriver beskjeden *hello world* til fil ved hjelp av lav-nivå I/O (unix filesystem interface) kallene ``open()`` og ``write()``.



