

(Kommer)



### Oppgaver uke 45:


#### 1:

Use the client and server code from the INF1060 web page (look under `Eksempelprogrammer -> client-server-example`). Download them for your tests.

Change the port number in client and server to one of your own choice. Use one terminal window to log in to `smaragd`, and another to log in to `diamant` (run `ssh smaragd` and `ssh diamant` in two terminals). Compile client and server code. Start the server on `smaragd`. after that start the client on `diamant` machine. Check whether they talk with each other.


#### 2:

Change server and client in such a way that you can give them a port number on the command line.


#### 3:

Change the client in such a way, that you can give it a server name and the server port on the command line. Try to run the server on another machine than smaragd.


#### 4:

Check the man pages of all functions that are used in the programs in exercise 1 - exercise 3, and make all of them safer, by checking their return code.


#### 5:

Assume that you have a sender that wants to send data packets to a receiver. The connection that is used is not lossless, so that some of the packets that you send are lost. Propose a method (a protocol) that sender and receiver can use to ensure that all packets arrive.

Hint: The receiver must in one way or another confirm the reception of packets.


#### 6:

Does your answer to exercise 5 guarantee that all packets arrive in the sending order? If not, how can you add that?


#### 7:

Assume that you have to send a packet of 1000 bit length over a data channel that is 2000 km long. Assume that the signal travels approximately at the speed of light, 300.000 km/s. How long does it take from the start of sending the packet to the end of receiving the packet?
  
1. the bandwidth of the data channel is 10 Mbit/s
2. the bandwidth of the data channel is 10 Gbit/s

Hint: You need time for putting the packet onto the channel, and time for moving a bit through the channel.


#### 8:

How does the answer of exercise 7 fit with the expression that the speed of the channel in example b is 1000 times bigger than the speed of the channel in example a?


#### 9:

Propose an application layer protocol on top of TCP for a distributed, turn-based game between two players, such as chess (or GO, nine men's morris, battleships, stratego, ...).


#### 10:

How would you write programs (client and server) that can be used to test the bandwidth between two machines? Explain what information your measurements gives you specifically.

Hint: Consider layer processing.


