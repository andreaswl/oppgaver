

## Løsningsforslag uke 38: Oppgaver om operativsystemer


#### 11:

Noen momenter kan være:

- Abstraksjon over hardware (det meste av mange OS er drivere)
- Tilbyr en grad av interoperabilitet mellom hardware-platformer
- Fordeling av ressurser (CPU, minne og enheter)
- Tilbyr funksjoner mange programmer kan ha nytte av, så de slipper å lage disse selv

Oppgaven var ment som noe man kan tenke over. Kort sagt - OS gir oss en
rimelig enkel abstraksjon over hardware (som gjør at vi ikke trenger å
bry oss om hvordan HW fungerer på lavt nivå når vi programmerer). I
tilegg fordeler den resurser som CPU og minne til forskjellige brukere
og prosesser, så vi trenger ikke å bry oss om det heller.
 

#### 12:

Oppgaven til BIOS er å initialisere hardware og sjekke om alt er i 
orden. Hvis det er det, så skal den starte resten av programvaren ved
å lese Master Boot Record (MBR) på den første disken (som kan være HDD, 
CD/DVD, FDD, USB, osv...) og kjøre programmet som finnes der 
(bootloader). Oppgaven til bootloader er å finne og laste inn selve 
OS-et fra disken og inn i minne, og deretter kjøre det. Dermed tar OS-et over og klargjør maskinen for bruk.


#### 13:

Brukernivå:
- Alle vanlige programmer kjøres på dette nivået
- Beskyttet minne (en prosess ser ikke minnet brukt av andre prosesser)
- Ingen adgang til hardware uten å bruke OSets funksjoner (system call)

Kernelnivå:
- Bare de programmene man kan virkelig stole på (deler av OSet) kan
  kjøre her.
- Programmene kan gjøre hva de vil med hele minneområdet (til og med
  andre prosessene), HW, osv.

Når vi kaller en systemfunskjon fra brukernivå, så vil man gå fra 
bruker- til kernelnivået, kernelen vil behandle forespørselen (f.eks.
om å lese 10B fra en fil), kanskje skrive resultatet i minne pekt med
pekeren som ble sendt som argument til kallet, og deretter returnere,
nå i brukernivå, til det programmet som kalte på funksjonen.
  
  
Oppgave 4
-----------------------------------------------------------------------
Monolitiske kjerner:
+ raske
- vanskelig å vedlikeholde, kan føre til at de blir ustabile, og ikke
  nødvendigvis så raske
  
Mikro-kernele:
+ lettere å vedlikeholde og utvide
- tregere?


Oppgave 5
-----------------------------------------------------------------------
Interrupt er en signal om at noe "uventet" hendte. Uventet vil her bety
at det ikke var forventet akkurat da - man kan forvente at lesingen fra
harddisken blir etterhvert ferdig, men man vet ikke 100% presist når 
det skjer. Interrupt blir i den sammenhengen et tegn til resten av
datamaskinen at noe skjedde og at det kan kreve at OSet gjør noe med 
det.

Når et interrupt opprettes, enten av hardware eller software, så vil 
den bli sendt til kernelen, som ser på nr til interrupt, ser på 
tabellen over alle interupts og alle funskjoner som er assosierte med
dem, og deretter kjører funskjonen som passer til det nummeret.
