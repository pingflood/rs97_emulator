CC=mipsel-linux-gcc
CFLAGS=-Wall -D_REENTRANT -O3 -funroll-loops -fexpensive-optimizations
LDFLAGS= -lSDL
OBJ=	main.o \
	particle.o \
	font.o \
	sprite.o \
	bonus.o \
	enemy.o \
	enemy_greeter.o \
	enemy_curver.o \
	enemy_crusher.o \
	enemy_cube.o \
	enemy_drager.o \
	enemy_eyefo.o \
	enemy_xev.o \
	enemy_mine.o \
	enemy_rwingx.o \
	enemy_cir.o \
	enemy_zatak.o \
	enemy_badguy.o \
	enemy_proball.o \
	enemy_plasmaball.o \
	enemy_ming.o \
	enemy_boss01.o \
	enemy_boss02.o \
	enemy_boss03.o \
	enemy_gametext.o \
	support.o \
	intro.o \
	thegame.o \
	loadlv.o \
	score.o \
	player.o \
	menu.o \
	startintro.o \
	gameover.o \
	hiscore.o \
	fps.o \
	bg.o

ketm: $(OBJ)
	$(CC) $(CFLAGS) -o ketm $^ $(LDFLAGS)

clean:
	rm -f *.o ketm
