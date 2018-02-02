#include "stdafx.h"
#include "Connection.h"
#include "Node.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

Connection::Connection(Node * fromNode, Node * toNode, int inNumber)
{
	weight = 0;
	nodeFrom = fromNode;
	nodeTo = toNode;
	innovation = inNumber;
	nextWeight = 0;

	randWeight();
}

void Connection::randWeight()
{
	srand(unsigned(time(NULL)));
	weight = ((rand()%10)/10)*.2 + .4;
}

void Connection::notifyValue()
{
	nodeTo->recieveValue();
}

void Connection::notifyInfluence()
{
	nodeFrom->recieveInfluence();
}
