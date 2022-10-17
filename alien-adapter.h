#ifndef ALIENADAPTER_H
#define ALIENADAPTER_H

#include <friendly-interface.h>
#include <alien.h>

class AlienAdapter : public Alien, public FriendlyInterface
{
public:
    std::string sayHello();
};

#endif // ALIENADAPTER_H
