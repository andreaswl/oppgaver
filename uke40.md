

(Intro)

**Begrep:** forklaring



### Oppgaver uke 40:




#### 1:

Hva slags fragmentering vil du kunne finne i virtuelt minne? Er dette et
seriøst problem? Begrunn svaret. Diskuter forholdet mellom fragmentering og
sidestørrelse.


#### 2:

Anta at vi benytter en variant av den tradisjonelle sirkulære kørutinen («round
robin») ved fordeling av prosessortid til prosesser. En prosess som fullt ut har
brukt opp sitt tidskvantum, blir plassert bakerst i køen. En prosess som
benytter halvparten av tildelt tidskvantum, blir plassert midt i køen, og en
prosess som kun bruker en fjerdedel av tildelt tidskvantum, blir plassert en
fjerdedel bak i køen fra starten av. (Det er her snakk om cirka-tall.)

1. Hvilken hensikt kan det være med en slik fordeling? Begrunn svaret
   kort.
2. Diskuter fordeler og ulemper med implementeringen av den.
3. Hvordan fungerer Linux' CPU scheduler?


#### 3:

Designeren av et nytt operativsystem som spesielt skal benyttes for
sanntids-applikasjoner har foreslått bruk av virtuelt minne håndtering
slik at systemet kan håndtere programmer som er for store til å passe
inn det begrensete minne-området som noen ganger tilbys av sanntids-
systemer.

Hva er følgene av denne avgjørelsen i forhold til den måten som 
virtuelt minne fungerer?


#### 4:

Vi tenker oss en liten datamaskin med plass til kun 4 sider i minnet.
På denne datamaskinen kjører vi et dataprogram som trenger 8 sider
minne, men som heldigvis ikke trenger alle sidene samtidig.
Datamaskinen må av og til bytte sider ut til disk
(sidekrav/swapping). Ved kjøring av programmet blir sidene referert i
denne rekkefølgen:

    0172327103

hvor 0 er første side. Ved oppstart er minnet helt tomt. Systemet bruker FIFO-
algoritmen for å bestemme hvilken side som skal ut når en ny side skal inn.

1. Hvor mange page faults vil oppstå forutsatt at ingen sider var
   i minnet ved oppstart?
2. Hvor mange page faults oppstår hvis systemet bruker LRU (Â«Least
   Resently UsedÂ»)?
3. LRU virker som en fin algoritme i teorien. Hvorfor er den så
   vanskelig å implementere i praksis?


#### 5:

Hvis en instruksjon tar `10` nanosekunder og en pagefault tar nye
`n` nanosekunder - gi en formel for effektiv instruksjonstid hvis vi
har en pagefault hver k'te instruksjon.


#### 6:

En maskin med 32.bit virtuelle addresser bruker en to-nivås page
table. De virtuelle addressene splittes opp i 9-bits top level page
table felt, et 11-bits andre-nivås page table og et offsett. Hvor
store pages er det i systemet og hvor mange pages er det i systemet?
Har det noe å si om vi i et annet system bruker 11 bit på første
nivået og 9 på det andre?


#### 7:

En maskin har 48 bits virtuelle addresser og 32 bits
fysiske. Page størrelsen er 8 KB. Hvor mange plasser trengs det i page
tabellen?


#### 8:

Bruk litt tid på å gjøre dere kjent med environment variabler i Linux.


#### 9:

I linux kan man få mye informasjon om systemet ved å se på filsystemet i `/proc`.
Bruk litt tid på å se på hva slags informasjon du kan finne her.


#### 10:

Prøv selvtesten om OS: 
http://www.ifi.uio.no/~inf1060/cgi-bin/fv.cgi?filename=Operativsystemer_1.txt




