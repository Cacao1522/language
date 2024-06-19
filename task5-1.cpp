#include <stdio.h>

#include <string>
class Room
{
private:
    int seat;
    int desk;
    int projector;
    int blackboard;

public:
    void show() { printf("座席数：%d 机数：%d プロジェクター数：%d 黒板数：%d\n", seat, desk, projector, blackboard); }
    Room() {}
    Room(int seat_, int desk_, int projector_, int blackboard_)
    {
        seat = seat_;
        desk = desk_;
        projector = projector_;
        blackboard = blackboard_;
    }
};
int main()
{
    Room r(15, 10, 3, 2);
    r.show();
    return 0;
}