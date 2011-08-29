

Denne uken blir det mere arbeid med pekere og objektorientering. Vi ser nærmere på datastrukturer, minnefeil, debugging og filer. Dette er den siste timen med grunnleggende innføring i C. Det blir antagelig god tid til spørsmål i timen.

**segfault:** Segmentation fault; en feil som oppstår når man leser eller skriver til minne man ikke skulle lest eller skrevet til.

**fifo:** First in, first out. Samme som kø.

**lifo:** Last in, first out. Samme som "stakk". "Stakk" brukes også ofte om call-stack. Dette blir det mere snakk om.

**heap:** Minnet som allokeres med `malloc` befinner seg i programmets heap. Detaljert info kommer på forelesning.

**ringbuffer:** en bestemt måte å lage en kø på. Vil bli gjennomgått.



### Oppgaver uke 37:


---

Implementer en av datastrukturene som ble beskrevet på forelesningen; kø, stakk eller lenket liste. Jeg kommer til å demonstrere hvordan man lager en kø (ringbuffer) i gruppetimen.

Finn passende funksjonsnavn (ta hensyn til at navnene er globale), og deklarer funksjonene i en header-fil, slik at forskjellige programmer kan inkludere og bruke datastrukturen.

Hvis du vil at datastrukturen skal kunne inneholde forskjellige typer elementer (som med generics i Java), kan man la elementene være void-pekere. Da bør man typecaste disse til pekere av rett type når man leser dem ut.

Ikke få panikk hvis dette høres vanskelig ut. Begrepene kan være litt nye og uhåndterlige, men når man forstår prinsippene er det ikke så vanskelig. Gå gjerne tilbake, eller arbeid med andre oppgaver som du synes at du lærer noe av.




