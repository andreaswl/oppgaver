

Denne uken blir det mer snakk om debugging, minnefeil og arbeid med filer. Vi går også over stoff og oppgaver i forbindelse med forelesningen om operativsystemer.

Noen begreper:

**segfault:** Segmentation fault; en feil som oppstår når man prøver å arbeide med minneadresser man egentlig ikke har noe med.



### Oppgaver uke 38:

## Oppgaver om C:

#### 1:

Dette eksempelet vil resultere i en *Segmentation fault*::

    int main(){
         char *s = "hello world";
         *s = 'H';
    }

Bruk ``gdb`` og ``ddd`` til å finne ut hvorfor.


#### 2:

Hittil har dere vært vant til å bruke printf() for å:

    - gi brukeren beskjeder.
    - skrive ut debug-informasjon.
    - skrive ut feilmeldinger.

Problemet er at det ofte er vanskelig å skille mellom disse tre. En 
vanlig måte å håndtere denne situasjonen på er å ha et system hvor man 
forteller noe om *hvor viktig* det man skriver ut er i tillegg til 
beskjeden som skal vises. Dette kan for eksempel se slik ut::

    log_msg(DEBUG, "The value of a is 10.");
    log_msg(ERROR, "Something is wrong here!");
    log_msg(INFO, "Hello world:)");

Implementer et slikt system.


#### 3:

Arbeidet med gullkornprogrammet `gull` og ringbufferen sist uke har gått strålende ([gull36](.), [gull37](.), [rbuf](.)). Jeg lånte bort floppydisken med kode til fetter Sernæs Pærnes, som skulle "legge inn noen fete funksjoner", men når jeg fikk programmet tilbake, var det ugler i mosen.

Her er en lenke til [koden jeg fikk tilbake fra fetter Pærnes](.)

Bruk programmet `valgrind` for å se om det har dukket opp noen minnefeil siden sist, og rett eventuelle feil. Valgrind er installert på IFI sine maskiner, og kan for eksempel brukes slik:

    $ gcc cli.c -g -o gull
    $ valgrind ./gull

Valgrind viser da detaljer om hva programmet gjør med minnet underveis i kjøringen, og sier i fra hvis det skjer noe mistenkelig. Opsjonen `gcc -g` ber gcc om å ta med ekstra debugger-informasjon i det kompilerte programmet, så vi kan få mer detaljert info fra Valgrind.



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
