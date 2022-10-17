#ifndef FRIENDLYINTERFACE_H
#define FRIENDLYINTERFACE_H


#include <string>

/**
 *  @brief Target Interface
 */
class FriendlyInterface
{
public:
    /**
     * @brief Virtual function
     */
    virtual std::string sayHello() = 0;
};

#endif // FRIENDLYINTERFACE_H
