#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

static float rLopte = 0.15;
static float wZida = 0.1;
static float hZida = 0.5;
static float lStaza = 4.0;
static float wStaza = 2.0;
static int brStaza = 6;
static float laneOffset = 3.5;

static int brBoja = 8; // 8 max
extern GLfloat bojeRgb[3][3];
extern GLfloat bojeOstalo[8][3];
extern int running;

extern float laneCoord;
extern int lane;
extern int ballSpeed;


extern int scoreMulti, noObstacles, score;;

extern float loptaR, loptaG, loptaB;

typedef struct{
	GLfloat pBoja[3][3];
} boje;

boje *listaBoja;

static float pi = 3.141592653589793;

float animation_parameter;

extern void on_keyboard(unsigned char key, int x, int y);
extern void lopta();
extern void boost();
extern void segment(GLfloat* p1Boja, GLfloat* p2Boja, GLfloat* p3Boja);
extern void pocetneBoje();
extern void shift();
extern void on_timer(int value);

