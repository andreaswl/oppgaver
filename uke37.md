
Obligen nærmer seg. Jeg kommer derfor til å dele timen som kommer i to:

*Del 1:* Spørsmål og svar  
*Del 2:* Gjennomgang av litt mer krevende oppgaver. Lage et ringbuffer.

Det blir bare to oppgaver denne uken, men de er mer krevende, og er ment som en utfordring. Særlig oppgave to forutsetter god forståelse av resten av stoffet, og fungerer som en oppsummering av mange av temaene så langt. Gå derfor gjerne tilbake, og vent litt med denne ukens oppgaver hvis det er vanskelig.

Det har vært mye stoff, og jeg tror de fleste kan ha glede av å se mer på oppgavene fra de første to ukene. Det blir ikke så *veldig* mange flere gruppeoppgaver i C fremover, og det blir tid til å utdype og repetere stoffet fra de siste ukene.

Her er noen ting dere bør begynne å beherske:

- pekere
- arrays
- strukter
- objektfiler
- headere
- Makefiles (gjør livet enklere)
- fildeskriptorer

Si i fra til meg om hva som kan trenge repetisjon. Jeg setter av tid til det når jeg vet at noen har glede av det. Send meg en epost (josteibe AT ifi DOT uio DOT no), eller stem via gruppesiden.

Noen begreper denne uken:

**Buffer:** et *mellomlager* for informasjon. Brukes for eksempel når vi leser fra en fil, for å oppbevare dataene frem til vi gjør noe med dem.

**Fifo:** First in, first out. Samme som kø.

**Lifo:** Last in, first out. Samme som "stakk". "Stakk" brukes også ofte om call-stack.

**Heap:** Minnet som allokeres med `malloc` befinner seg i programmets heap. Detaljert info kommer på forelesning.

**Ringbuffer:** en bestemt måte å lage en kø på. Vil bli gjennomgått.



### Oppgaver uke 37:

#### 1:

Programmet `gull` skal utvides, og vi trenger i den forbindelse å lese en fil linje for linje, slik at hver linje oppbevares for seg (en cstring for hver). Vi skal derfor skrive funksjonen `char *File_get_line(FILE *file, int maxlen)`, som leser en linje fra en åpen fildeskriptor, og returnerer en `char *` til linjen som ble lest. Funksjonen skal:

- allokere en buffer med størrelse `maxlen + 1`
- lese en linje fra filen, til bufferen (se `man 3 getline`)
- allokere nok minne til å oppbevare linjen (bruk `malloc()`)
- kopiere linjen fra bufferen til det allokerte området (se `man 3 strcpy`)
- deallokere bufferen (bruk `free()`)
- returnere `char`-pekeren (`char *`) til den allokerte linjen
- returnere `NULL` hvis det ikke er flere linjer igjen å lese.

Ekstraspørsmål:

- Hvorfor allokerer vi bufferen med størrelse `maxlen + 1` og ikke bare `maxlen`?
- Hva er fordelene og ulempene med å allokere bufferen hver gang funksjonen kalles?



#### 2:

Implementer en av datastrukturene som ble beskrevet på forelesningen; kø, stakk eller lenket liste. Finn passende funksjonsnavn (ta hensyn til at navn i C er globale), og deklarer funksjonene i en header-fil, slik at forskjellige programmer kan inkludere og bruke datastrukturen. Det kan lønne seg å bruke objektorientert kodestil (se [løsningsforslag for siste oppgave, uke 36](https://github.com/INF1060H11/oppgaver/blob/master/uke36forslag/07_object_orientation.c) for et eksempel).

Skriv et program som tester at alt fungerer som forventet. Lag funksjoner som kan lese og skrive datastrukturen til og fra disk hvis den for eksempel inneholder cstrings.

Merk:

Denne oppgaven kombinerer det meste vi har arbeidet med til nå, og gir rom for mange egne valg. Den kan være ganske vanskelig, og _må_ ikke løses. Den er med som en prøvesmak og utfordring.

Det er mange nye begreper å forholde seg til i begynnelsen, men det faller på plass etterhvert. Prøv å danne overblikk, og ta ett steg om gangen. Det ligger god trening i å jobbe med denne typen oppgave, der man må gjøre mange overveielser, og tenke strukturert.

Jeg planlegger å se nærmere på denne oppgaven i en gruppetime. Jeg vil da implementere en kø (i form av et ringbuffer). Ringbuffere skal ha blitt nevnt på forelesning. Dette er funksjonene jeg planlegger å implementere for ringbufferet:

    rbuf_t *Rbuf_new(int);
    void    Rbuf_free(rbuf_t *);
    void    Rbuf_put(rbuf_t *, void *);
    void   *Rbuf_get(rbuf_t *);
    void   *Rbuf_peek(rbuf_t *, int);
    void   *Rbuf_random(rbuf_t *);

Jeg følger her den objektorienterte stilen som ble beskrevet sist uke, med funksjoner som arbeider med strukt-pekere.

Void-pekere brukes ofte for å bety pekere av en hvilken som helst type. Her bruker jeg void-pekere fordi ringbufferet kan inneholde (pekere til) en hvilken som helst type elementer.

Hvis du vil at datastrukturen din skal kunne inneholde forskjellige typer elementer (som med generics i Java), kan man altså la elementene være void-pekere. Man bør man i så fall typecaste disse til pekere av rett type når man leser dem ut.


