

Denne uken blir det mer arbeid med pekere og objektorientering. Vi ser også nærmere på datastrukturer, minnefeil, debugging og filer. I løpet av disse tre første ukene skal vi ha dekket de viktigste områdene av C. Det er mye stoff -- og det er helt naturlig om man ikke henger helt med. De fleste av temaene vil bli tatt opp igjen senere.

Gi likevel beskjed om hva som er vanskelig; snakk med meg, send meg en epost (josteibe AT ifi DOT uio DOT no), eller stem via gruppesiden.

Denne uken er oppgavene litt vanskeligere. Ikke få panikk. Jeg venter ikke at dere nødvendigvis klarer å løse dem. Men ta en titt likevel; og løs gjerne oppgaver fra de forrige to ukene helt til du føler deg stødig nok til å se nærmere på disse.

Altså: Ikke få panikk; løs heller oppgaver far de siste to ukene.

Noen begreper denne uken:

**Buffer:** et *mellomlager* for informasjon. Brukes for eksempel når vi leser fra en fil, for å oppbevare dataene frem til vi gjør noe med dem.

**Fifo:** First in, first out. Samme som kø.

**Lifo:** Last in, first out. Samme som "stakk". "Stakk" brukes også ofte om call-stack. Dette blir det mere snakk om.

**Heap:** Minnet som allokeres med `malloc` befinner seg i programmets heap. Detaljert info kommer på forelesning.

**Ringbuffer:** en bestemt måte å lage en kø på. Vil bli gjennomgått.



### Oppgaver uke 37:

#### 1:

Programmet `gull` skal utvides, og vi trenger i den forbindelse å lese en fil linje for linje, slik at hver linje oppbevares for seg (en cstring for hver). Vi skal derfor skrive funksjonen `File_get_line(FILE* file, int maxlen)`, som leser en linje fra en åpnet fildeskriptor, og returnerer en `char *` til linjen som ble lest. Funksjonen skal:

- allokere en buffer med størrelse `maxlen + 1`
- lese en linje fra filen til bufferen
- allokere nok minne til å oppbevare linjen
- kopiere linjen fra bufferen til det allokerte området (se `man strcpy`)
- deallokere bufferen
- returnere en peker til den allokerte linjen.
- returnere `NULL` hvis det ikke er flere linjer igjen å lese

Ekstraspørsmål: Hvorfor allokerer vi bufferen til `maxlen + 1` og ikke bare `maxlen`?


#### 2:

Implementer en av datastrukturene som ble beskrevet på forelesningen; kø, stakk eller lenket liste. Finn passende funksjonsnavn (ta hensyn til at navn i C er globale), og deklarer funksjonene i en header-fil, slik at forskjellige programmer kan inkludere og bruke datastrukturen. Skriv funksjoner som arbeider med pekere til strukter, slik vi snakket om i timen. Skriv et program som tester at alt fungerer som forventet. Lag funksjoner som kan lese og skrive datastrukturen til og fra disk hvis den for eksempel inneholder cstrings.

NB: Denne oppgaven er relativt vanskelig. Den kombinerer det meste vi har arbeidet med til nå, og gir rom for mange egne valg. Jeg har tatt den med som en prøvesmak på noe litt mer omfattende, som det også kan være gøy å bryne seg på.

Det er mange nye begreper å forholde seg til i begynnelsen, men det faller på plass etterhvert. Prøv å danne overblikk, og løs ett steg om gangen. Det er god trening i å jobbe med denne typen oppgave, der man må gjøre mange overveielser.

Jeg planlegger å se nærmere på denne oppgaven i en gruppetime. Jeg vil da implementere en kø (i form av en ringbuffer). Ringbuffere skal ha blitt nevnt på forelesning. Dette er funksjonene jeg planlegger å implementere:

    TODO

Jeg følger her den objektorienterte stilen fra sist uke, med funksjoner som arbeider med strukt-pekere.

Hvis du vil at datastrukturen skal kunne inneholde forskjellige typer elementer (som med generics i Java), kan man la elementene være void-pekere. Da bør man i så fall typecaste disse til pekere av rett type når man leser dem ut.

Send gjerne inn spørsmål via gruppesiden.

