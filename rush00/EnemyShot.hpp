#ifndef ENEMSHOT_HPP
#define ENEMSHOT_HPP

#include <iostream>

#include "Player.hpp"
#include "Objects.hpp"
#include "Enemy.hpp"

class EnemyShot : public Objects
{
    public:
        EnemyShot(void);
        EnemyShot(EnemyShot const &other);
        ~EnemyShot(void);

        EnemyShot &operator=(EnemyShot const &rhs);

        void move(void);
        void disp(void);
        void pathDell(void);

        void initObject(WINDOW *win);

        bool getIsDisp(void);
        bool checkLine(void);
        bool colCheck(void);
        
        void setEnemiesPlayer(Enemy * enemies, Player * player);
        
    private:
        int _mx;
        int _my;
        bool _dis;
        Enemy * _enemies;
        Player * _player;
};

#endif
