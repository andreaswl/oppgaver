
Denne uken er noen av hovedtemaene minne og pekere, headere `cstring`-er, mer avanserte Make-filer, og programmer som er spredt over flere filer. Jeg anbefaler at de som ikke har sett på forrige ukes oppgaver titter litt på dem og.

**Header:** En fil vi kan inkludere for å få tilgang til funksjoner, makroer etc. Når vi skriver `#include <stdio.h>` er `stdio.h` en header.

**Peker:** Kort fortalt en minneadresse. Brukes mye i C. Se forelesningsfoilene. Vil også blir grundig repetert i timen.

**Objektfil:** C-kode kan kompileres til objektfiler, som senere kan *lenkes* sammen med andre objektfiler for sammen å danne et komplett program. Dette gjør det for eksempel mulig å lenke mot biblioteker som allerede er kompilert.



### Oppgaver uke 36:

#### 1:

A) Skriv funksjonen `sum` som tar summen av `a` og `b`, og legger resultatet inn i `result`. Resultatet skal altså skrives på det stedet i minnet som result "peker" på.

    void sum(int a, int b, int *result);

B) I dette tilfellet hadde det kanskje vært bedre å få resultatet via funksjonens returverdi. Prøv å finne noen eksempler på situasjoner der det faktisk kan lønne seg å bruke pekere.


#### 2:


A)
Lag en funksjonen `tulloc`:

    char * tulloc(size_t size);

Den skal allokere `size * 4 + 1` bytes med minne, og fylle dette området med gjentagelser av ordet "tull". Den siste byten skal være lik `'\0'` (som alle andre vanlige, nullterminerte cstring-er). Funksjonen skal returnere en peker til minneområdet.


#### 3:

Vi har denne `for`-løkken:

    int i;
    short arr[] = {2, 1, -1, 10, 22, 21};
    int arrlen = 6;

    for(i=0; i<arrlen; i++)
        printf("[%d]: %d\n", i, arr[i]);

Hvordan kan vi endre kroppen til løkken slik at den bruker pekeroperasjoner istedenfor vanlige array-indekser (slik som `arr[i]`)?

Hint: Man kan gjøre regneoperasjoner, slik som `+` med pekere, for å flytte seg fremover eller bakover i minnet. Se evt. foilene.


#### 4:

Skriv programmet `wordcount`, som leser en fil og teller antall forekomster av et ord. Det kan kalles med to parametre; for eksempel:

    wordcount eple brev.txt

Sørg for å lukke fildeskriptoren før programmet avsluttes, og håndter eventuelle feil som kan oppstå.


#### 5:

Skriv funksjonen `chop_string`, som tar en cstring som parameter, reduserer lengden dens til omtrent halvparten, og returnerer en `char *` til den siste halvdelen, som ble “kappet av”. Det er ikke nødvendig å allokere minne.


#### 6:

Denne oppgaven handler om å spre koden over flere filer. Forrige uke laget vi programmet `gull`, som var en kommandolinje for gullkorn ([løsningsforslag](https://github.com/INF1060H11/oppgaver/tree/master/uke35forslag/gull)). Nå skal vi jobbe litt videre med dette programmet.


A)
Del programmet i to filer; `gem.c` og `cli.c`, der `gem.c` kun inneholder kode som har å gjøre med gullkorn, og `cli.c` implementerer kommandolinjen. Tanken er at `gem.c` etterhvert kan brukes av flere forskjellige gullkorn-relaterte programmer.

B)
Skriv en header `gem.h` som deklarerer funksjonen(e) i `gem.c`, slik at vi enkelt kan importere dem andre steder. Bruk "include guards" for å sikre mot at headeren inkluderes flere ganger.

C)
Oppdater `cli.c` så den inkluderer `gem.h` og bruker funksjoner derifra for å få fatt på gullkorn.

D)
Skriv en Makefile som kan kompilere objekt-filene, og lenke de sammen for å få et kjørbart program. Definer handlingen `make clean`, som rydder opp (sletter de kompilerte filene). Definer handlingen `make all`, som kompilerer alt (så langt bare cli-et og objektfilene).

E)
I make-filer kan man bruke ordet .. for å referere til ... Et eksempel:

    TODO

Oppdater make-filen og for å dra nytte av dette.

F)
Vi kan også definere grupper av filer ett sted i Makefilen, for enkelt å kunne refere til disse filene igjen senere. Syntaksen er:

    TODO

Oppdater makefilen for å dra nytte av dette.


#### 7:

Vi skal nå prøve å skrive objektorientert kode i C. Vi skal skrive et program som arbeider med et personregister. Da må vi først finne ut hvordan vi skal representere personene i registeret. Hver person har et navn (`char *`) og en alder (`short int`). Disse kan lagres i en person-struct.

Ettersom vi ikke har klasser i C, må objektorienteringen gjøres på en litt annen måte. Vi kan for eksempel allokere minne til en person-strukt, og gi pekeren til funksjoner som bearbeider strukten på forskjellige måter.

A)
Skriv strukten `person_s`, på denne formen:

    typedef struct {
    ...
    } person_s;

B)
Skriv funksjonen `person_s* Person_new(short age, char* name)`, som allokerer minne for en person, skriver verdiene, og returnerer en peker til personen.

C)
Skriv funksjonen `void Person_birthday(person_s* person)` som gjør personen et år eldre.

D)
Skriv funksjonen `void Person_inspect(person_s* person)` som skriver ut personen i terminalen med navn og alder.

E)
Skriv funksjonen `void Person_free(person_s* person)` som frigir minnet som ble brukt av personen.

F)
Hva synes du om funksjons-navnene som er foreslått her?

G)
Hvordan kan vi håndtere eventuelle feil som oppstår i disse funksjonene? Implementer feilhåndtering hvis du har lyst.

H)
Skriv personregisteret, med kommandolinje, der man kan..

- Legge til personer
- Fjerne personer
- Se en liste over alle personer
- Skrive registeret til en fil
- Lese registeret fra en fil
- Avslutte

---

Send gjerne inn spørsmål via gruppesiden.

