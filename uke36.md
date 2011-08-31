
Hovedtemaene denne uken er minne, pekere, headere, cstrings, bedre Make-filer, og hvordan man kan fordele koden over flere filer. Hvis du ikke har sett på forrige ukes oppgaver, kan det være greit å ta en titt. Jeg legger forresten ut ganske mange oppgaver i år. Det kan derfor være lurt å bla litt frem og tilbake, og bruke tiden der du synes det er behov.

Noen begreper denne uken:

**Header:** En fil vi kan inkludere for å få tilgang til funksjoner, makroer etc. Når vi skriver `#include <stdio.h>` er `stdio.h` en header-fil vi inkluderer fra standardbiblioteket.

**Peker:** Grovt og enkelt kan vi si at en peker er en minneadresse, som "peker" på en eller flere verdier, et eller annet sted i minne. Pekere står sentralt i C, og blir grundig gjennomgått i plenumsgruppen.

**Objektfil:** C-kode kan kompileres til objektfiler, som senere kan *lenkes* sammen med andre objektfiler, og sammen danne en kjørbar programfil. Dette gjør det for eksempel mulig å lenke mot *biblioteker* som allerede er kompilert på maskinen.


### Oppgaveforslag uke 36:

#### 1:

A) Skriv funksjonen `sum` som tar summen av `a` og `b`, og legger resultatet inn i `result`. Resultatet skal altså skrives til det stedet i minnet som result "peker" på.

    void sum(int a, int b, int *result);

B) I dette tilfellet hadde det kanskje vært bedre å gi tilbake resultatet via funksjonens returverdi. Prøv å tenke deg eksempler på situasjoner der det faktisk kan lønne seg å bruke pekere.


#### 2:


A)
Skriv funksjonen `char * tulloc(size_t size)`. Den skal allokere `size * 4 + 1` bytes med minne, og fylle dette området med gjentagelser av ordet "tull". Den siste byten skal være lik `'\0'` (som alle andre vanlige, nullterminerte cstring-er). Funksjonen skal returnere en peker til minneområdet.


#### 3:

Vi har denne kodebiten med en `for`-løkke:

    int i;
    short arr[] = {2, 1, -1, 10, 22, 21};
    int len = 6;

    for (i=0; i<len; i++)
        printf("[%d]: %d\n", i, arr[i]);

Hvordan kan vi endre kroppen til løkken slik at den bruker pekeroperasjoner istedenfor vanlige array-indekser (slik som `arr[i]`)?

Hint: Man kan gjøre regneoperasjoner, slik som `+` med pekere, for å flytte seg fremover eller bakover i minnet. Se evt. foilene.


#### 4:

Skriv programmet `wordcount`, som leser en fil og teller antall forekomster av et gitt ord. Programmet skal kunne kalles med to parametre, for eksempel:

    wordcount eple brev.txt

Sørg for å lukke fildeskriptoren før programmet avsluttes, og håndter eventuelle feil som kan oppstå.


#### 5:

Skriv funksjonen `chop_string`, som tar en cstring som parameter, reduserer lengden dens til omtrent halvparten, og returnerer en `char *` til den siste halvdelen, som ble “kappet av”. Det er ikke nødvendig å allokere minne.


#### 6:

Denne oppgaven handler om å strukturere koden og spre den over flere filer. Forrige uke laget vi programmet `gull`, som var en kommandolinje for gullkorn ([løsningsforslag](https://github.com/INF1060H11/oppgaver/tree/master/uke35forslag/gull)). Vi skal nå jobbe videre med dette programmet.


A)
Del programmet i to filer; `gem.c` og `cli.c`, der `gem.c` kun inneholder kode som har å gjøre med gullkorn, og `cli.c` implementerer kommandolinjen. Tanken er at `gem.c` etterhvert kan brukes av flere forskjellige gullkorn-relaterte programmer.

B)
Skriv en header `gem.h` som deklarerer funksjonen(e) i `gem.c`, slik at vi enkelt kan importere dem andre steder. Bruk "include guards" for å sikre mot at headeren inkluderes flere ganger.

C)
Oppdater `cli.c` så den inkluderer `gem.h` og bruker funksjoner derfra for å få fatt på gullkorn.

D)
Skriv en Makefile som kan kompilere objekt-filene, og lenke dem sammen for å få et kjørbart program. Definer handlingen `make clean`, som rydder opp (sletter de kompilerte filene). Definer handlingen `make all`, som kompilerer alt (foreløpig bare cli-et og objektfilene).

E)
Det ligger mye info om Make ute på nettet. [Siden om Make på Wikipedia][wpmake] kan være verdt et besøk. Eksperimenter litt med eksemplene og se om det er noe du kan ha nytte av i dine egne Make-filer. Vi kommer til å lage en mer avansert og fleksibel Makefile for `gull` i gruppetimen. 


#### 7:

Vi skal nå prøve å skrive mer objektorientert kode i C. Eksempelet vi tar utgangspunkt i er et personregister. Hver person har et navn (`char *`) og en alder (`short int`). Da hadde det jo vært praktisk med person-objekter..

C har ingen støtte for klasser eller objekter i samme forstand som Java eller Python, så objektorienteringen må gjøres på en litt annen måte. Vi kan for eksempel allokere minne for en person-strukt, og gi pekeren til funksjoner som bearbeider strukten på forskjellige måter.

A)
Skriv strukten `person_s` (med navn og alder, som angitt), på denne formen:

    typedef struct {
    ...
    } person_s;

B)
Skriv funksjonen `person_s* Person_new(char* name, short age)`, som allokerer minne for en person, skriver verdiene, og returnerer en peker til personen.

C)
Skriv funksjonen `void Person_birthday(person_s* person)` som gjør en person et år eldre.

D)
Skriv funksjonen `void Person_inspect(person_s* person)` som skriver ut en person i terminalen med navn og alder.

E)
Skriv funksjonen `void Person_free(person_s* person)` som frigir minnet som ble brukt av personen.

F)
Skriv et testprogram for å se at funksjonene du har skrevet fungerer.

G)
Hva synes du om funksjons-navnene som er foreslått her?

H)
Hvordan kan vi håndtere eventuelle feil som oppstår i disse funksjonene? Implementer feilhåndtering hvis du har lyst.

I)
Skriv personregisteret, med en kommandolinje der man kan..

- Legge til personer
- Fjerne personer
- Vise en liste over alle personer
- Skrive registeret til en fil
- Lese registeret fra en fil
- Avslutte

---

Send gjerne inn spørsmål via gruppesiden.

[wpmake]: http://en.wikipedia.org/wiki/Make_(software)
