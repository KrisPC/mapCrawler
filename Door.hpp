#ifndef Door_hpp
#define Door_hpp


class Room;
class Door
{

private:



public:
    bool isHere;
    Room * nextRoom;
    Door(Room * nextRoom);


};

#endif