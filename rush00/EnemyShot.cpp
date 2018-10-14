#include "EnemyShot.hpp"

EnemyShot::EnemyShot(){}
EnemyShot::~EnemyShot(){}

void EnemyShot::pathDell(void)
{
    mvwaddstr(getWindow(), getPY(), getPX(), " ");
}

void EnemyShot::disp(void)
{
    start_color();
    init_pair(99, COLOR_MAGENTA, COLOR_BLACK);
    wattron(getWindow(), COLOR_PAIR(99));
    mvwaddstr(getWindow(), getPY(), getPX(), "-");
    wattroff(getWindow(), COLOR_PAIR(99));
    _dis = 1;
}

void EnemyShot::setEnemiesPlayer(Enemy * enemies, Player * player)
{
    _enemies = enemies;
    _player = player;
}

EnemyShot::EnemyShot(EnemyShot const &other)
{
    *this = other;
}

EnemyShot &EnemyShot::operator=(EnemyShot const &rhs)
{
    _mx = rhs._mx;
    _my = rhs._my;
    _dis = rhs._dis;
    _enemies = rhs._enemies;
    _player = rhs._player;
    return *this;
}

void EnemyShot::move(void)
{
    if (!_dis)
        return;
    this->pathDell();
    int y = getPY();
    y += 1;
    if (y > this->_my - 2)
    {
        setPY(0);
        setPX(0);
        this->disp();
        this->initObject(getWindow());
        return;
    }
    setPY(y);
    this->disp();
}

void EnemyShot::initObject(WINDOW *win)
{
    _win = win;
    _dis = false;
    getmaxyx(getWindow(), this->_my, this->_mx);
    setSX(1);
    setSY(1);
}

bool EnemyShot::getIsDisp(void)
{
    return _dis;
}

bool EnemyShot::colCheck(void)
{
    if ((_player->getPX() == this->getPX()) && (_player->getPY() == this->getPY()))
    {
        this->initObject(getWindow());
        this->pathDell();
        return(true);
    }
    if ((_player->getPX() + 1 == this->getPX()) && (_player->getPY() == this->getPY()))
    {
        this->initObject(getWindow());
        this->pathDell();
        return(true);
    }
    if ((_player->getPX() + 2 == this->getPX()) && (_player->getPY() == this->getPY()))
    {
        this->initObject(getWindow());
        this->pathDell();
        return(true);
    }
    return(false);
}

bool EnemyShot::checkLine(void)
{
    for (int i = 0; i < _enemiesNum; i++)
    {
        if ((_enemies[i].getPX()) == (_player->getPX()))
        {
            if (!this->getIsDisp())
            {
                setPX(_enemies->getPX());
                setPY(_enemies->getPY() + 1);
                disp();
            }
        }
    }
    return (false);
}