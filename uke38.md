
I plenumsgruppen denne uken har jeg tenkt å fortelle mer om debugging;
 altså hvordan man oppdager og retter feil i programmene man skriver. Jeg legger ut noen relevante oppgaver i C nedenfor. Jeg kommer også til å legge ut teoretiske oppgaver fra tidligere semestre; denne uken er temaet operativsystemer.

Begreper:

**segfault:** Segmentation fault; en feil som oppstår når vi prøver å lese eller modifisere minnet på en måte som ikke er tillatt. Dukker gjerne opp i forbindelse med pekere.


### Oppgaver uke 38:

## Oppgaver i C:

Arbeid videre med oppgavene fra tidligere uker der det er behov.

#### Oppgave 1:

Dette eksempelet vil resultere i en *Segmentation fault*:

    int main(){
         char *s = "hello world";
         *s = 'H';
    }

Bruk `gdb`, `ddd` eller `valgrind` for å se om du kan finne ut hvorfor. Valgrind er beskrevet nærmere i oppgaveteksten for neste oppgave. Se foilene for mer info om `gdb` og `ddd`.



#### 2:

[Ringbufferen vi skrev sist uke](https://github.com/INF1060H11/oppgaver/tree/master/uke37forslag) har fungert strålende så langt. Jeg lånte bort floppydisken med programkode til fetter Sernæs Pærnes over helga -- han skulle "legge til noen fete greier", men når jeg fikk floppydisken tilbake, var programmet tilsynelatende uendret. Programmet virker altså fortsatt, men jeg mistenker at fetter Pærnes har ødelagt noe. Her er [koden jeg fikk tilbake fra fetter Pærnes](https://github.com/INF1060H11/oppgaver/tree/master/uke38forslag/ringbuffer_med_feil).

Bruk programmet `valgrind` for å se om det har dukket opp noen minnefeil siden sist, og rett eventuelle feil.

Valgrind er installert på IFI sine maskiner, og kan for eksempel brukes slik:

    $ gcc rbuftest.c -g -o rbuftest
    $ valgrind ./rbuftest

Valgrind viser da detaljer om hva programmet gjør med minnet underveis i kjøringen, og sier i fra hvis det skjer noe mistenkelig. Opsjonen `gcc -g` ber gcc om å ta med ekstra debugger-informasjon i det kompilerte programmet, så vi kan få mer detaljert info fra Valgrind etterpå (f.eks. linjenummer).

#### 3:

I løpet av de siste ukene har vi brukt `printf()` mye. Noen av tingene vi har brukt `printf()` til er:

- å gi brukeren beskjeder
- å skrive ut feilmeldinger
- å debugge (oppdage og rette feil i programmet, f.eks. skrive ut verdien av variabler)

Etterhvert som programmet vokser, kan det bli rotete å la alle disse forskjellige typene beskjeder gå via samme "kanal". For eksempel kan det hende vi ønsker å kompilere to versjoner av programmet; en for testing, som informerer om verdien av variabler og lignende, og en for distribusjon, uten slike meldinger.

Mange C-programmer håndterer debugging-output via makroer i preprosessoren, slik at debuggingen kan slås av og på, eller sendes et bestemt sted. Det finnes mange mulige løsninger. Her er en enkel og populær variant:

    #ifdef DEBUG
        #define DLOG(args...) printf(args)
    #else
        #define DLOG(args...)
    #endif

Denne makroen kan brukes på samme måte som `printf()`:

    DLOG("Entering node number %d.\n", node_number);

Fordelen er at meldingene bare blir med når programmet kompileres med opsjonen:

    gcc -DDEBUG

Implementer et slikt logging-system i ett av dine egne programmer, eller i [gull](https://github.com/INF1060H11/oppgaver/tree/master/uke37forslag)-programmet vi har jobbet med i gruppetimene. Plasser gjerne makroen i en egen header `debug.h` (med include guards), så den kan inkluderes der det er behov for debugging.


## Oppgaver om operativsystemer:

#### 11:

Hvorfor har vi operativsystemer? Hvorfor trenger vi å forstå hvordan
de fungerer?


#### 12:

Hva er hovedoppgavene til BIOS og bootstrap? Beskriv enkelt hva som skjer fra vi skrur på maskinen til den er klar for bruk.


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
