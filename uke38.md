

Denne uken blir det mer snakk om debugging, minnefeil og arbeid med filer. Vi går også over stoff og oppgaver i forbindelse med forelesningen om operativsystemer.

Noen begreper:

**segfault:** Segmentation fault; en feil som oppstår når vi prøver å arbeide med minneadresser vi egentlig ikke har noe med. Dukker gjerne opp i forbindelse med pekere.


### Oppgaver uke 38:

## Oppgaver i C:

Arbeid videre med oppgavene fra tidligere uker der det er aktuelt.

#### Oppgave 1:

Dette eksempelet vil resultere i en *Segmentation fault*::

    int main(){
         char *s = "hello world";
         *s = 'H';
    }

Bruk `gdb`, `ddd` eller `valgrind` for å se om du kan finne ut hvorfor. Valgrind er beskrevet nærmere i oppgaveteksten for neste oppgave. Se foilene for mer info om gdb og ddd.



#### 2:

Arbeidet med gullkornprogrammet `gull` har gått strålende så langt ([gull36](.), [gull37](.)). Og ringbufferen fungerer som et olja lyn ([rbuf](.)). Men jeg lånte bort floppydisken med kode til fetter Sernæs Pærnes over helga -- han skulle "legge til noe fett stæsj", men når jeg fikk floppydisken tilbake, var programmet tilsynelatende uendret. Programmet virker altså fortsatt, men jeg mistenker at det kan være ugler i mosen.

Her er en lenke til [koden jeg fikk tilbake fra fetter Pærnes](.)

Bruk programmet `valgrind` for å se om det har dukket opp noen minnefeil siden sist, og rett eventuelle feil.

Valgrind er installert på IFI sine maskiner, og kan for eksempel brukes slik:

    $ gcc cli.c -g -o gull
    $ valgrind ./gull

Valgrind viser da detaljer om hva programmet gjør med minnet underveis i kjøringen, og sier i fra hvis det skjer noe mistenkelig. Opsjonen `gcc -g` ber gcc om å ta med ekstra debugger-informasjon i det kompilerte programmet, så vi kan få mer detaljert info fra Valgrind etterpå.

#### 3:

I løpet av de siste ukene har vi brukt `printf()` mye. Noen av tingene vi har brukt `printf()` til er:

- å gi brukeren beskjeder
- å skrive ut feilmeldinger
- å debugge (rette feil i programmet, se at alt virker)

Etterhvert som programmet vokser, kan det bli rotete å la alle disse forskjellige typene beskjeder gå via samme "kanal". For eksempel kan det hende vi ønsker å kompilere to versjoner av programmet; en for testing, som informerer om verdien av variabler og lignende, og en for distribusjon, uten slik output.

Mange C-programmer håndterer debugging-output via makroer i preprosessoren, slik at debuggingen kan slås av og på, eller sendes et bestemt sted. Det finnes mange mulige løsninger. Her er en enkel variant:

    #ifdef DEBUG
        #define DLOG(args...) printf(args)
    #else
        #define DLOG(args...)
    #endif

Denne makroen kan brukes på samme måte som `printf()`:

    DLOG("Entering node number %d.\n", node_number);

Fordelen er at den bare blir med hvis programmet kompileres med opsjonen:

    gcc -DDEBUG

Implementer et slikt logging-system i ett av dine egne programmer, eller i [gull](.)-programmet vi har jobbet med i gruppetimene. Plasser gjerne makroen i en egen header `debug.h` (med include guards), så den kan inkluderes der det er bruk for den.


## Oppgaver om operativsystemer:

#### 11:

Hvorfor har vi operativsystemer? Hvorfor trenger vi å forstå hvordan
de fungerer?


#### 12:

Hva er hovedoppgavene til BIOS og bootstrap? Beskriv enkelt hva skjer fra vi skrur på maskinen til den er klar til bruk.


#### 13:

Hva menes med bruker- og kernel-nivå? Hva er poenget med dette skillet? Hva avgjør om noe bør kjøres på bruker- eller kernel-nivå? Hva skjer når vi kaller en systemfunksjon (f.eks. read) fra brukernivå?


#### 14:

Finn noen fordeler og ulemper med monolittiske kjerner i forhold til micro-kernels. Undersøk hvordan de mest populære operativsystemene (Windows, Linux, MacOS) er bygget, med tanke på kjernetype.


#### 15:

Interrupts brukes til mye forskjellig. Noen eksempler er:

- Lesing fra harddisk
- Å drepe prosesser
- Å kommunisere gjennom nettverket

Hva er en interrupt? Hvordan er interrupts nyttige? Hva skjer når et interrupt blir opprettet?
