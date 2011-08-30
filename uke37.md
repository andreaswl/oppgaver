

Denne uken blir det mere arbeid med pekere og objektorientering. Vi ser nærmere på datastrukturer, minnefeil, debugging og filer. Dette er den siste timen med grunnleggende innføring i C. Det er viktig å forstå det vi har tatt opp i løpet av disse første tre gruppetimene for å ha et godt fundament i C.

Fortvil ikke hvis noen ting fortsatt er uklare eller uforståelige. Vi kommer til å ta oss tid til repetisjon av det som er uklart. Det er derfor viktig at jeg får vite hva dere synes er lett og hva som er vanskelig. Hvis det er behov for det kan vi kanskje sette av tid til å gå over noe av det grunnleggende på nytt. Følg med på gruppesiden for info om hva jeg planlegger å ta opp hver time.

Noen begreper:

**Buffer:** et *mellomlager* for informasjon. Brukes for eksempel når vi leser fra en fil, for å oppbevare dataene frem til vi gjør noe med dem.

**Fifo:** First in, first out. Samme som kø.

**Lifo:** Last in, first out. Samme som "stakk". "Stakk" brukes også ofte om call-stack. Dette blir det mere snakk om.

**Heap:** Minnet som allokeres med `malloc` befinner seg i programmets heap. Detaljert info kommer på forelesning.

**Ringbuffer:** en bestemt måte å lage en kø på. Vil bli gjennomgått.



### Oppgaver uke 37:

#### 1:

Programmet `gull` trenger å lese en fil linje for linje, og ta vare på hver linje i en cstring. Vi skal derfor skrive funksjonen `File_get_line(FILE* file, int maxlen)`, som leser en linje fra filen, og returnerer en `char *` til linjen. Funksjonen skal:

- allokere en buffer med størrelse `maxlen + 1`
- lese en linje fra filen til bufferen
- allokere nok minne til å oppbevare linjen
- kopiere linjen fra bufferen til det allokerte området (se `man strcpy`)
- deallokere bufferen
- returnere en peker til den allokerte linjen.

Hvis det ikke er flere linjer igjen å lese, skal funksjonen returnere `NULL`.

Ekstraspørsmål: Hvorfor allokerer vi bufferen til `maxlen + 1` og ikke bare `maxlen`?


#### 2:

Implementer en av datastrukturene som ble beskrevet på forelesningen; kø, stakk eller lenket liste. Finn passende funksjonsnavn (ta hensyn til at navnene er globale), og deklarer funksjonene i en header-fil, slik at forskjellige programmer kan inkludere og bruke datastrukturen. Bruk strukter og pekere, slik vi snakket om i timen. Skriv et program som tester at alt fungerer som forventet. Lag funksjoner som kan lese og skrive datastrukturen til og fra disk hvis den for eksempel inneholder cstrings.

Ikke få panikk hvis dette høres vanskelig ut. Arbeid heller med de andre oppgavene litt lenger. Det er mange nye begreper å forholde seg til i begynnelsen, men det faller på plass etterhvert. Prøv å danne overblikk, og løs ett steg om gangen. Man kan få verdifull trening av å jobbe med denne typen oppgave, der man må gjøre mange overveielser.

Som eksempel kommer jeg til å løse denne oppgaven med en kø (ringbuffer) i neste gruppetime. Dette er funksjonene jeg kommer til å implementere:

    TODO

Jeg følger her den objektorienterte stilen fra sist uke, med funksjoner som arbeider med strukt-pekere.

Hvis du vil at datastrukturen skal kunne inneholde forskjellige typer elementer (som med generics i Java), kan man la elementene være void-pekere. Da bør man i så fall typecaste disse til pekere av rett type når man leser dem ut.

Send gjerne inn spørsmål via gruppesiden.

