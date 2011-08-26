

## Oppgaver uke 35

Denne uken er målet å komme i gang med C. Vi begynner med det som er mest naturlig når man kommer fra Java. Først noen begreper:

*Kommandolinjeargument: * Argumenter/parametere til programmet når det kjøres. F.eks. er `hello.c` et argument til programmet `gcc` når vi kjører:

    ~$ gcc hello.c

*Man-side:* `man` er et program i linux (og andre operativsystemer) som brukes for å lese dokumentasjon og manualer. Det finnes mye informasjon om C, CPP, gcc &amp; co i `man`. For å få hjelp med printf kan du for eksempel kjøre:

    $ man 3 printf

For å finne ut hvilke `man` sider som inneholder info om et betemt tema, kan kommandoene `apropos` og `whatis` brukes. Prøv for eksempel:
        
    ~$ whatis printf

Det forteller oss at det finnes flere *tema* som heter *printf*, og ved 
hjelp av litt prøving og feiling finner vi ut at ``man 3 printf`` 
er C-funksjonen vi leter etter. Merk at alle standard C funksjoner 
er i *seksjon 3*. Man kan også finne de fleste man sider via Google.

*cstring:* `cstring` er standardmåten å representere en streng på i C. Når man skriver "hallo", i et C-program, er det en cstring. En cstring er en char-array, der slutten markeres med en byte som har verdien null ("\0"). Derfor sier man at en cstring er en null-terminert char array. Dette blir det mer snakk om senere.
    

### Oppgavene:

Her er noen forslag til oppgaver for å komme i gang. Det står også mange gode oppgaveforslag i “The C Programming Language” (se anbefalt litteratur). Vi kommer til å snakke mer om oppgavene i gruppetimen.



#### 1:

I Fibonacci-rekken er hele tiden neste tall lik summen av de to foregående:

    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

A) Lag et program som skriver ut alle fibonacci-tallene (går evig).
B) Lag et program som skriver ut Fibonacci-tallet på en gitt plass. For eksempel:

    $ gcc -o fib fibonacci.c
    $ fib 7
    13



#### 2:

Programmet "repeat" tar to kommandolinje-argumenter; et heltall og en beskjed. Når det kjøres skriver det ut beskjeden så mange ganger, adskilt av mellomrom. Eksempel:

    $ gcc -o repeat repeat.c
    $ ./repeat 3 Hurra!
    Hurra! Hurra! Hurra!

Hint:

- Se man-siden til atoi (man 3 atoi)
- main(int arc, char *argv[])


#### 3:

Skriv et C-program som leser mål i tommer og skriver det ut i fot og
tommer. (Det er 12 tommer i en fot.) Programmet bør helst håndtere uventede verdier på en god måte.

Eksempel på kjøring::

    $ ./fot 10
    10 inches is 0 foot and 10 inches.
    $ ./fot 76
    76 inches is 6 foot and 4 inches.
    $ ./fot apekatt
    Bad input. You must provide a number.

(oppdatert 26.aug)


#### 4:

A)
Skriv programmet “abbr”, som tar en setning som parameter, og skriver ut den første bokstaven i hvert ord. For enkelhets skyld sier vi at ord er bokstaver som kommer etter mellomrom. Eksempel:

    $ ./abbr "det var en stormfull aften"
    dvesa

B)
Utvid programmet med en ekstra parameter som angir hvor mange bokstaver som skal plukkes med fra hvert ord. Pass på at du ikke leser for langt og inn i neste ord når ordene er korte. Eksempel:

    $ ./abbr 3 "ti fugler i fuglebadet"
    tifugifug


#### 5:

A)
Skriv programmet "gull", som har et kommandolinjegrensesnitt der man kan taste en bokstav og trykke enter for å kjøre en kommando. Kommandoen 'g' gir tilbake et gullkorn, og 'a' avslutter. Gullkornene kan implementeres fritt etter fantasien. Eksempel:

    $ gull
    [g]ullkorn [a]vslutt > g
    Ti fugler på taket..
    [g]ullkorn [a]vslutt > a
    (programmet avslutter)

Hint: Se `man getchar`. `switch` er også kjekt.

B) Se hvilke funksjoner du har delt koden inn i, og drøft med deg selv: Er det ryddig? Har funksjonene forståelige, gode navn? Hva med variablene?


#### 6:

Lag en enkel Makefile som kompilerer programmene du har skrevet.


#### 7:

A)
Følgende program::

    #include <stdio.h>

    int main(){
        short a, b, sum;

        a = 20000;  b = 20000;  sum = a+b;
        printf("%d + %d = %d\n", a, b, sum);
    }

gir dette resultatet når det kjøres:

    20000 + 20000 = -25536

Hvorfor skjer det?

B)
Utvid programmet slik at det oppdager problemet og 
gir en feilmelding når `sum` blir feil.


#### 8:

I C bruker vi tallet `0` for å bety false, mens alle andre tall er true. Definer en makro `#define BOOL2S(a) ...` som blir til cstring-en "true" eller "false" avhengig av om argumentet er null eller ikke.

Hint: Google etter "ternary operation"?


#### 9:


A) Skriv funksjonen::

    int ishex(unsigned char c)

Som sjekker om `c` er et hex-tegn:

    `'0'-'9'`, `'a'-'f'` eller `'A'-'F'`


B) Skriv funksjonen:

    int hexval(unsigned char c)

som konverterer et hex-tegn til sin desimalverdi 0-15. Bruk 
funksjonen fra *A* til å sjekke om `c` har en gyldig verdi. Prøv å 
finne en bra måte å håndtere feil på som også kan brukes i andre 
funksjoner.


#### 10:

Standardfunksjonen `int strcmp` sammenligner to tekster og returnerer et tall som betegner sorteringsrekkefølgen:

    int strcmp (unsigned char s1[], unsigned char s2[])

Verdiene som returneres er:

    | <0 om `s1` kommer før `s2`
    | =0 om `s1` og `s2` er like
    | >0 om `s1` kommer etter `s2`

Skriv en ny funksjon kalt `strcmpx` i C, som gjør det samme, uten å bruke strcmp. Skriv også et testprogram som sammenligner de to metodene. Sørg for å teste med forskjellige typer strenger.


#### Hvis du vil:

Gå inn på gruppesiden og registrer eventuelle spørsmål du gjerne vil ha tatt opp i gruppetimen.
