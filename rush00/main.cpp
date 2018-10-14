#include <iostream>
#include <string>
#include <ncurses.h>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

#include "Objects.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Shot.hpp"
#include "Asteroids.hpp"
#include "Stars.hpp"
#include "EnemyShot.hpp"

static int ENEM_NUM = 150;
static int ASTEROIDS_NUM = 50;
static int SHOTS_NUM = 100;
static int STARS_NUM = 500;

void ft_draw_borders(WINDOW *win)
{
	int x;
	int y;

	getmaxyx(win, y, x);

	start_color();
	init_pair(3, COLOR_WHITE, COLOR_WHITE);
	wattron(win, A_REVERSE);
	wattron(win, COLOR_PAIR(3));
	for (int i = 0; i < (y); i++)
	{
		mvwprintw(win, i, 0, " ");
		mvwprintw(win, i, x - 1, " ");
	}
	for (int i = 0; i < (x); i++)
	{
		mvwprintw(win, 0, i, " ");
		mvwprintw(win, y - 1, i, " ");
	}
	wattroff(win, COLOR_PAIR(3));
	wattroff(win, A_REVERSE);
}

int main(void)
{
	int			yMax;
	int			xMax;
	int			time = 0;
	int			phase = 0;
	int			ahase = 0;
	int			sthase = 0;
	int			msecs = 0;
	int			esc;
	int			button;

	initscr();
	noecho();
	cbreak();
	curs_set(0);
	nodelay(stdscr, true);
	keypad(stdscr, true);
	getmaxyx(stdscr, yMax, xMax);

	WINDOW		*playerwin = newwin(yMax - 1, xMax - (xMax * 0.3), 0, 0);
	Enemy		w[ENEM_NUM];
	Asteroids	a[ASTEROIDS_NUM];
	Stars		star[STARS_NUM];
	Shot		s[SHOTS_NUM];
	EnemyShot	enemshot[SHOTS_NUM];
	Player		p(playerwin, w, a, star);

	for(int i = 0; i < ENEM_NUM; i++)
		w[i].initObject(playerwin);
	for(int i = 0; i < ASTEROIDS_NUM; i++)
		a[i].initObject(playerwin);
	for(int i = 0; i < SHOTS_NUM; i++)
		s[i].initObject(playerwin);
	for(int i = 0; i < STARS_NUM; i++)
		star[i].initObject(playerwin);

	for (int i = 0; i < SHOTS_NUM; i++)
	{
		enemshot[i].setEnemiesPlayer(w, &p);
		enemshot[i].initObject(playerwin);
	}
	p.setShots(s);

	while (42)
	{
		if (!p.isAlive())
			break ;
		ft_draw_borders(playerwin);
		mvprintw(2, xMax * 0.8 + 2, "Time: %d\n", time);
		mvprintw(3, xMax * 0.8 + 2, "Lives: %d\n", p.getLives());
		mvprintw(4, xMax * 0.8 + 2, "Score: %d\n", s->getScore());
		p.disp();
		wrefresh(playerwin);

		if (!(msecs % 2))
			for (int i = 0; i < SHOTS_NUM; i++)
					s[i].move();

		for (int i = 0; i < SHOTS_NUM; i++)
			enemshot[i].move();	

		for (int i = 0; i < SHOTS_NUM; i++)
			if (enemshot[i].colCheck())
			{
				p.setLives(p.getLives() - 1);
				enemshot[i].setPY(-999);
				break ;
			}

		for (int i = 0; i < (ENEM_NUM); i++)
			if (w[i].getIsDisp())
				if (w[i].getPX() == p.getPX() || w[i].getPX() == p.getPX() + 1 || w[i].getPX() == p.getPX() + 2)
					for (int a = 0; a < SHOTS_NUM; a++)
						if (!enemshot[a].getIsDisp())
						{
							enemshot[a].setPX(w[i].getPX());
							enemshot[a].setPY(w[i].getPY() + 1);
							enemshot[a].disp();
						}

		if (!(msecs % 25))
		{
			for (int i = 0; i < (ENEM_NUM / (yMax / 2)); i++)
			{
				int n = phase + i;
				w[n].disp();
			}
			phase += ENEM_NUM / (yMax / 2);
			if (phase >= ENEM_NUM)
				phase = 0;
		}

		if (!(msecs % 5))
		{
			for (int i = 0; i < ENEM_NUM; i++)
				w[i].dwnmv();
			for (int i = 0; i < ASTEROIDS_NUM; i++)
				a[i].dwnmv();
		}

		if (!(msecs % 15)) {
			for (int i = 0; i < (ASTEROIDS_NUM / (yMax / 2)); i++)
			{
				int k = ahase + i;
				a[k].disp();
			}
			ahase += ASTEROIDS_NUM / (yMax / 2);
			if (ahase >= ASTEROIDS_NUM)
				ahase = 0;
		}

		if (!(msecs % 20))
			time++;

		if (!(msecs % 40))
		{
			for (int i = 0; i < (STARS_NUM / (yMax / 2)); i++)
			{
				int l = sthase + i;
				star[l].disp();
			}
			sthase += STARS_NUM / (yMax / 2);
			if (sthase >= STARS_NUM)
				sthase = 0;
			for (int i = 0; i < STARS_NUM; i++)
				star[i].dwnmv();
			msecs = 0;
		}

		button = p.getmv();
		if (button == (int)'x' || button == 27)
			break ;
		else if (button == 32)
		{
			system("afplay laser.aiff &");
			p.shot();
		}

		for(int i = 0; i < SHOTS_NUM; i++)
			s[i].colCheck(w, a);

		msecs++;
		while ((esc = getch()) > -1 && esc != 27 && esc != ' ');
		usleep(50000);
	}
	refresh();
	wrefresh(playerwin);
	if (button == (int)'x' || button == 27)
		exit(1);
	while (1)
	{
		ft_draw_borders(playerwin);
		mvprintw(2, xMax * 0.7 + 2, "Game over!", time);
		mvprintw(3, xMax * 0.7 + 2, "Please, try again", time);
		mvprintw(4, xMax * 0.7 + 2, "X or ESC to quit", time);
		button = p.getmv();
		if (button == (int)'x' || button == 27)
			exit(1);
		while ((esc = getch()) > -1 && esc != 27 && esc != ' ');
	}
	endwin();

	return(0);
}
