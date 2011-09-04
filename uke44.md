


Denne uken skal vi se på litt mer avanserte servere, som kan håndtere flere forbindelser samtidig. Vi tar for oss skillet mellom `fork`- og `select`-baserte servere, og ser nærmere på noen eksempler.




### Oppgaver uke 44:



#### 1:

The applications running on your computer can only send messages
to applications running on another computer when the Internet
address of that computer is known. We prefer to use names instead
of these addresses, e.g. the name *fimm.ifi.uio.no* instead of the
address *129.240.65.205*, but sometimes we need the address.

You can use the programs ``host`` and ``nslookup`` to find names for
addresses and addresses for names. If they are not installed on
your computer, log in to *login.ifi.uio.no* to test the commands.

What interesting things do you find out when you try, for example,
*www.ifi.uio.no* and *login.ifi.uio.no*?


#### 2:

When you program distributed applications, your programs will
usually use the services of the transport layer. The layer
makes use of the lower layers, including the network layer,
The program traceroute (often */sbin/traceroute*) can be used to
show you the path that messages from your computer to another
computers take. To do this, it lists the names and addresses of
the routers between the two end systems.

How many routers are used to forward packets to *www.ifi.uio.no*,
*www.uio.no*, *www.usit.no*, *www.ntnu.no*, *www.kth.se*, *www.fokus.gmd.de*,
*www.cmu.edu*?

Which other information does traceroute give you? (check the man pages)


#### 3:

Why are network functions organized in layers?


#### 4:

1. Which layers do we distinguish in the Internet?
2. What are the tasks of these layers?


#### 5:

1. Which additional layers exist in the OSI model?
2. What additional services do they offer?
3. How are these services offered in the Internet?


#### 6:

How would you characterize the differences between circuit switching
and packet switching?


#### 7:

Each unit on one layer of the protocol stack adds a header to
messages that are sent to another unit of the same layer.

	- Why is this necessary?
	- Why is it typical to add it at the front of the packet?

