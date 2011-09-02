

### Løsningsforslag, uke 48

#### 1:

Linjesvitsjing er en teknikk som tradisjonelt har vært i bruk i telefon-nettet, 
men som nå også benyttes for dataoverføring. Bruken av en linjesvitsjet 
forbindelse foregår i tre faser: 1. Oppsett av linje: ved oppkall blir en 
”fysisk” linje blir satt opp mellom sender og mottager vha.  mekaniske eller 
elektroniske svitsjer.  2. Linja brukes (for tale eller dataoverføring).  3.  
Nedkopling Fordelen ved linjesvitsjing er at man får en ”egen” fysisk 
forbindelse som ingen andre bruker.  Moderne datanett benytter imidlertid 
fortrinnsvis pakkesvitsjing som muliggjør deling av de fysiske linjene. 
   
Pakkesvitsjing innebærer at dataene som skal sendes først stykkes opp i pakker 
som sendes ut på de fysiske linjene. Hver pakke inneholder et ”hode” og en 
”hale” i tillegg til de informasjonsbærende dataene. Hodet inneholder blant 
annet adresseinformasjon som er nødvendig for å rute pakken fram til mottager.  
Prinsippet er at pakker med data blir sendt ut på et nett og dirigert (svitsjet) 
til riktig sted via de pakkesvitsjene som finnes i nettet. Når en pakke kommer 
inn i en svitsj, avgjør svitsjen hvilken linje denne pakken skal sendes ut på ut 
ifra hva som ser best ut på det tidspunktet pakken prosesseres i svitsjen. Ulike 
pakker kan således bli sendt forskjellige veier mellom A og B. En fordel med 
pakkesvitsjing er at flere sendere og mottagere som utveksler data kan dele de 
samme fysiske linjene.  Passer bra for asynkron trafikk (f.eks. e-post). En 
annen fordel er at pakkesvitsjing gir mulighet for å rute trafikk utenom linjer 
som er nede eller går ned.


B
~~~~

Forbindelsorientert overføring kan sammenlignes med det å kople opp en 
telefonsamtale eller en TCP-forbindelse; Oppkopling - bruk - nedkopling av 
forbindelsen Forbindelsesfri overføring kan sammenliknes med å sende et brev i 
det vanlige postsystemet. En pakke (datagram) utstyres med en fullstendig 
adresse som gjøre det mulig å rute pakken fram til mottageren uten at det settes 
opp noen forbindelse på forhånd.


C
~~~~
Multipleksere er innretninger i telenettet som gjør det mulig for flere linjer 
med lav bitrate å dele en linje med høy bitrate. Dataoverføringskapasiteten på 
den sistnevnte linja vil for en enkel type multiplekser, være større eller lik 
summen av bitratene for hver av lavkapasitets-linjene. 



Oppgave 2
-------------------------------------------------------------------------------


A
~~~~

*Punkt-til-punkt* nett muliggjør dataoverføring mellom én avsender og én
mottager av gangen. Nettet består av mange forbindelser mellom individuelle par 
av maskiner. For å komme fra kilde til destinasjon, kan en pakke i denne typen 
nett måtte gå innom mange mellomliggende maskiner (svitsjer). Det er viktig å 
finne en optimal rute gjennom nettet. Siden det her dreier seg om en sender og 
en mottager, kalles denne typen overføring gjerne ”unikast”.

*Kringkastingsnett* har gjerne en felles kommunikasjonskanal som deles av alle
maskinene på nettet. Når en maskin sender en pakke ut på nettet, vil denne 
derfor mottas av alle de andre maskinene, men bare den eller de maskinene som 
pakken er adressert til, vil lese den inn i sin hukommelse.  Pakker som ikke er 
adressert til en bestemt maskin, blir ignorert av denne maskinen.  
Kringkastingsnett muliggjør to nyttige kommunikasjonsmåter som kalles 
”kringkasting” og ”multikasting”. Kringkasting betyr at en pakke som blir sendt 
ut på nettet, blir plukket opp og prosessert av alle de andre maskinene på 
nettet; Multikasting betyr at en pakke som sendes ut på nettet, blir plukket opp 
av et subsett av alle maskinene som er tilknyttet.  



B
~~~~

Det som først og fremst kjennetegner Internet, er at det består av en meget stor 
samling med autonome nett, dvs. nett som i utgangspunktet er laget for å betjene 
en gruppe brukere (f.eks. lokalnettet ved UiO). Hvert av disse (sub-)nettene 
fungerer uavhengig av alle andre autonome nett i verden, men er knyttet sammen 
vha. ulike typer langdistansenett eller rene høyhastighets forbindelser.  

Internet-protokollen (IP) binder alle de autonome nettene sammen til det vi 
kaller Internet ved bl.a. å tilby en adresserings- mekanisme som er universell.  
Dette betyr i praksis at hvert enkelt subnett, tildeles et sett av Internet- 
adresser, som er unike ift. alle andre Internet- adresser og derved gjør det 
mulig for en maskin på ett subnett å kunne nå en hvilken som helst maskin på et 
annet subnett.  Sentrale funksjoner som det må tas hånd om er bl.a.:

    - Ruting på Internet nivå mellom subnett (globale Internet-adresser).
    - Ruting på subnett nivå mellom *lokale* maskiner (lokale subnett-adresser).
    - Fragmentering og reassemblering.


C
~~~~

Bus
    Alle maskinene er koplet til en lineær kabel (dvs. endene er ikke koplet 
    sammen). Benyttes for Ethernet-baserte lokalnett; denne protokollen tar 
    høyde for at det vil oppstå kollisjoner på kabelen når to eller flere 
    maskiner prøver å sende samtidig.
Ring
    Kabelen som maskinene tilknyttes utgjør en sluttet ring (kan også være mer 
    enn én fysisk ring). LAN protokoller som benytter ring-topologi har sikre 
    mekanismer som hindrer at kollisjoner oppstår (eks.  Token ring, FDDI).
Stjerne
    Maskinene er tilknyttet en felles enhet (svitsj) som sørger for at de når 
    riktig mottager hvis denne maskinen/nettet også er koplet på svitsjen (eks.  
    Ethernet svitsj) 



Oppgave 3
-------------------------------------------------------------------------------

A
~~~~

båndbredde (bandwidth)
    Her skal man passe på at begrepet båndbredde benyttes ulikt ettersom det er 
    snakk om digtale eller analoge systemer. Dersom det er snakk om analoge 
    systemer, har båndbredden måleenheten Hertz (Hz). En analog telefonlinje har 
    f.eks. ca.  3kHz bånbredde. Dersom man snakker om digitale systemer, mener 
    man vanligvis kapasiteten til en link målt i bit pr.sekund.  Andre 
    betegnelser på sistnevnte er bitrate, overføringshastighet, transmisjonsrate 
    mv.
gjennomstrømning (throughput)
    Den datamengden vi faktisk får over en link pr.  sekund (bit/s).  Den 
    teoretiske båndbredden er ofte ikke mulig å oppnå pga.  pakketap, flere 
    brukere, for langsom maskin med hensyn til programvaren som eksekveres ift.  
    hastigheten man ønsker å sende med osv.


B
~~~~

Forsinkelsen oppstår flere steder:
    - Fra applikasjonen som sender pakken, må pakken gå nedover i 
      protokollstacken hvor det er mange buffere mellom lagene. Her er det 
      viktig å unngå å kopiere pakkene, men heller flytte pekere.  Kopiering tar 
      tid. Hver protokoll har sine regler og funksjoner, dvs. at en pakke kan 
      bli oppdelt i flere rammer som igjen legges i buffer.
    - *Propagation delay*; selve mediet som det overføres på introduserer også 
      forsinkelse: elektroner bruker tid på å forflytte seg i en kopperledning;
      det samme gjelder fotoner i et fiber.
    - *Prosesseringstid*: Ute i nettverket vil det være mange rutere som pakken 
      må passere; disse bruker tid på å få sendt pakker videre.
    - Tid for å sende en pakke: Dette avhenger av kapasiteten på linken.  En 
      linje med 1Mbps og en pakkestørrelse 10 kb vil trenge 10 ms for å få hele 
      pakken ut på linja.
    - Retransmisjon av pakker fører selvfølgelig til forsinkelse.
    - *Ved bit-feil*: Noen ganger vil enkeltbit bli feiltolket, men som oftest 
      vil feil opptre i ”burst”, dvs.  feil i flere bit etter hverandre.  Dette 
      blir vanligvis forårsaket av elektrisk interferens, f.eks.  lynnedslag.
    - *En node i nettet kan være nede*. Pakken kan da eventuelt rutes rundt, men 
      dette vil ikke alltid være mulig. Programvaren i en ruter kan dessuten 
      bruke gale/ikke oppdaterte rutingtabeller, og derved framsende pakker i 
      feil retning. 



Oppgave 4
-------------------------------------------------------------------------------

A
~~~~

Oppgaven til lag 1 er å klokke ut og ta i mot bit, multipleksing / 
demultipleksing, koding av bit i basisbånd, modulasjon av bit inn på en 
bærebølge (amplitude, frekvens og fase modulasjon).  


B
~~~~

twisted pair
    mest brukt i telefonnettverk, billig og det mest brukte transmisjonsmediet.  
    Brukbar for kabling i bygninger.
coaxialkabel
    brukes til overføring av TV-signaler og i localnettverk. 50 omh (data) og 75 
    omh (tv-signaler).  Brukes til kortere avstander. Kan bære mange slags 
    signaler samtidig (data, TV osv.).
optisk fiber
    brukes omtrent over alt. Fiber har mange fordeler:
        - stor kapasistet - høy båndbredde
        - mindre størrelse og lettere enn kobberledninger (twisted pair)
        - lavere demping av signalstyrke, og dempingen er konstant over en 
          lengre rekkevidde
        - elektromagnetisk isolasjon - påvirkes ikke av andre elektromagnetiske 
          kilder (pga.  bruk av lys, vanskelig å avlytte eller å bryte).
        - større avstander mellom repeatere (eks. på 318 km uten repeatere).
terrestrial mikrobølge
    alternativ til coax eller fiber.  Brukes i områder hvor det er vanskelig å 
    legge kabel. Sender og mottaker må ha *øyekontakt*.
satelitt mikrobølge
    brukes til TV, telefoner og private organisasjoner (egne linker). Ypperlig 
    til distribuering pga. stort footprint.
broadcast radio
    radiobølger vi kjenner fra vanlig radio og TV. I motsetning til 
    satelittsignaler, krever ikke radiosignaler rettede antenner.
infrarød
    sender og mottaker må ha *øyekontakt*, og infrarøde stråler går ikke 
    igjennom vegger. Altså bedre sikkerhet og ingen interferensproblemer (slik 
    som for mikrobølger). Det finnes heller ikke frekvensallokering infrarøde 
    stråler. Brukes mellom apparater som står nær hverandre (fjernkontroll, 
    mobiltelefon og PC). 



Oppgave 5
-------------------------------------------------------------------------------

A
~~~~

- Legge på en mottaker- og avsender-adresse.
- For å skille virkelige data fra støy o.l. på linjen.
- Oppdage feil (eks. CRC), rette feil (eks. FEC).
- Legge på flytkontroll.


B
~~~~

Man kan bruke både start- og sluttmerke på rammene, eller bare startmerke, 
variabel eller fast lengde (variabel krever vel sluttmerke eller angitt lengde i 
header, ettersom man vanskelig kan kreve at det skal gå en jevn strøm av pakker, 
slik at man kunne brukt startmerket på neste som sluttmerke). Se forøvrig 
forrige spørsmål.


C
~~~~

Flytkontroll regulerer trafikken over en kanal, og går ut på å gjøre det mulig 
for mottaker å regulere hvor mye data den til enhver tid er i stand til å motta.  
Dette kan oppnås ved at mottaker sender en egen melding som ber avsender slutte 
å sende (eller bremse på sendehastigheten). Glidene vindu mekanismen kan også 
benyttes for å løse dette ved at mottager lar være å sende kvitteringer (ACK) 
når den ikke kan motta for øyeblikket. Den siste metoden innebærer unødige 
retransmisjoner, men dette spiller ingen rolle siden linken likevel ikke kan 
brukes til noe annet når mottaker-noden ikke kan motta.  



Oppgave 6
-------------------------------------------------------------------------------

A
~~~~

Hovedoppgaven til nettlaget er å transportere rammer fra SAP på toppen av 
nettlaget hos avsender, gjennom nettet og til SAP på toppen av nettlaget hos 
mottager. Ofte vil rammer måtte passere mange rutere på sin vei fra avsender til 
mottager. 
 
Nettlaget er det laveste laget som tar seg av ende til ende transmisjon, i 
motsetning til link laget som tar seg av det å flytte rammer fra en ende av en 
link til en den andre. Nett-tjenesten kan være forbindelsesorientert eller 
forbindelsesfri. Uavhengig av dette er oppgavene til nettlaget adressering og 
ruting. 
 
Dersom nett-tjenesten er er forbindelsesorientert må nettlaget i tillegg sørge 
for glidende vindu, flytkontroll og metningskontroll.


B
~~~~

Forbindelsesorientert:

    - Pålitelig.
    - Teleselskaper har 100 års erfaring med telefonsystemer.
    - Medfører overhead i forbindelse med oppsettting av virtuell rute.
    - All kompleksitet i nettverksdelen, medfører mindre fleksibilitet.
    - Nettverkslaget skal sørge for rimelig pålitelig overføring. oppsetting av 
      forbindelser og forhandling av parametere som kostnader og pris.
    - Bedre egnet for konferanse aktig trafikk som er avhengig av kort forsinkelse. 
 
Forbindelsesfri:

    - Upålitelig og forbindelsesløs representert ved Internet.
    - ca. 30 års erfaring.
    - Nettverkslaget er upålitelig uansett. Derfor vil hostene uansett 
      oppdage/korrigere for feil og sørge for flytkontroll.
    - Kompleksiteten legges i transportlaget, men det gjør ikke så mye da 
      regnekraft har blitt veldig billig.


Oppgave 7
-------------------------------------------------------------------------------


A
~~~~

Datagrammer:
    Hver pakke inneholder den komplette adressen til destinasjonen.  
    Switchen/ruteren benytter så denne informasjonen til å bestemme hvor pakken 
    skal videre. 
 
Virtuelle forbindelser (Virtual Circuit, VC):
    En VC vil si at alle pakker fra en bestemt node, A, går samme vei til en 
    bestemt node, B. For at en VC skal virke må det først opprettes en 
    forbindelse, dette gjøres ved at den hosten som vil opprette en VC, sender 
    ut en *setup-message*.  Denne spesielle pakken vil da traversere nettet og 
    sette av resurser i de forskjellige ruterene den er innom.  Hver ruter som 
    kan tilby VC’er, må vedlikeholde en tabell over de VC’er den har.



B
~~~~

Datagrammer:
    Datagrammer er veldig enkle å sende, de kan sendes til enhver tid til enhver 
    node. Dette gjør at avsender ikke trenger å bekymre seg med hvilken vei 
    pakken tar. Datagrammer er imidlertid ikke garantert å nå mål, de kan gå 
    tapt på veien, og avsender har ingen måte å finne ut av dette. En annen 
    effekt av datagrammer, som til tider ikke er ønsket, er at de kan komme frem 
    i en anne rekkefølge enn de ble sendt. Dette kommer av at datagrammer kan ta 
    forskjellige veier.  Datagrammer tilfører en del kompleksitet til ruterene.  
    Ruterene må kunne bygge ruting-tabeller, og dette er ikke alltid en dans på 
    roser. Et siste draw-back med datagrammer er at hver pakke må inneholde 
    destinasjonsadressen.
Virtuelle forbindelser:
    VC’er har den fordelen at hver pakke som sendes kun trenger å inneholde VCI, 
    noe som er en del mindre enn en hel adresse. VC sørger også for at alle 
    pakker ankommer i den rekkefølge de blir sendt, noe som er en klar fordel i 
    enkelte applikasjoner.  VC’er er på den annen side sårbare for brudd i 
    *kretsen*. Skulle en ruter gå ned, må hele kretsen etableres på nytt. 


Oppgave 8
-------------------------------------------------------------------------------


A
~~~~

To hovedproblemer: Heterogenitet og skalering. 
    
    Heterogenitet:
        Brukere av forskjellige typer nettverk skal ha mulighet til å 
        kommunisere med hverandre, til tross for at nettene har forskjellige 
        medium aksessteknologi, tjenestemodeller og adresseringsskjema.
    Skalering:
        Internett ekspanderer med en nærmest utrolig hastighet. Denne veksten 
        resulterer i følgende delproblemer:

            Ruting:
                hvordan finne en effektiv sti i et nettverk av flere millioner 
                noder?
            Adressering:
                Hvordan identifisere alle nodene i nettet? 


B
~~~~

- Heterogene subnett skal kommunisere og opptre som ett operativt system.
- Sub-autonomitet: det skal ikke kreves endringer i subnettene.
- Størst mulig adaptivitet overfor kabelbrudd, node- kræsj og trafikkbelastning.
- Gjøre minst mulige forutsetninger om underliggende teknologi.
- Skal utnytte ulike nett- og transmisjonsteknologier (konvergensteknologi).
- Endesystemene skal håndtere påliteligheten.


C
~~~~

Se *sammenkobling av store nett* figuren. Når man sammenkobler nett vha TCP/IP 
må man alltid opp på IP laget før pakkene kan sendes videre på en fysisk link.

.. figure:: ../../exercises/sammenkobling_av_store_nett.png
   :scale: 80

   Sammenkobling av store nett.


D
~~~~

Transporten av pakker skjer på raskest mulig måte. Vi har derfor ingen garanti 
for  vellykket overføring. En “best effort” overføring betyr at:

- pakker kan bli borte.
- pakker kan ankomme i feil rekkefølge.
- pakker kan dupliseres.
- pakker kan bli unormalt forsinket.
- det settes en øvre grense for pakkestørrelsen.



Oppgave 9
-------------------------------------------------------------------------------

A
~~~~

Transportlaget er det første laget med ende til ende kontroll. Lagene fra 
transport- laget og over finnes typisk bare i endesystemene og ikke i rutere og 
switcher. Over transportlaget finner vi protokoller som understøtter samvirke 
mellom distribuerte applikasjoner; disse protokollene beskjeftiger seg ikke med 
selve overføringen av data, men forutsetter at dette ivaretas av underliggende 
lag. Under transportlaget har vi det fysiske nettet, med rammer og ruting. Disse 
lagene (Fysiske, link, nett, transport) har det kollektive ansvaret for 
overføring av data mellom sender og mottaker, og at kvaliteten på overføringen 
tilsvarer applikasjonens behov. 


B
~~~~

Hvis vi ønsker å oppnå/garantere full pålitelighet i Transportlaget, må vi ha: 
- Pålitelig oppkobling av forbindelser.
- Pålitelig overføring av data, dvs: 

   - alle meldinger kommer fram 
   - ingen meldinger dupliseres 
   - meldinger bytter ikke rekkefølge 
   - meldingene inneholder ikke feil (feilsjekk ende-til-ende) 

- Pålitelig nedkobling av forbindelser uten tap av datapakker (graceful close).   


C
~~~~

Valget mellom TCP og UDP gjøres når man skal implementere en applikasjon. Mer 
spesielt velger man det når man oppretter f.eks en socket, som kan ta parameter 
TCP eller UDP. Man velger den protokollen man tror best vil oppfylle sine behov 
til netteverks- kommunikasjon effektivitet/hastighet/sikkerhet. Det vil vel ofte 
ende opp med ett kompromiss, og man bruker den protokollen som har flest av de 
egenskapene man trenger. UDP vil typisk være velegnet for å sende mange spredte 
små pakker, eller lyd/bilde strømmer, interaktiv bruk, hvor det ikke er 
vesentlig om alle pakker kommer frem. TCP er velegnet til store filoverføringer 
o.l.

