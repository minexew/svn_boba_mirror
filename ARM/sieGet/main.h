/*
  ������ SieGet Downloader
                          */

#ifndef _MAIN_H_
#define _MAIN_H_

#define color(x) (char *)(&(x))
#define allpoints(a) a.x, a.y, a.x2, a.y2

typedef struct
{
  char r;
  char g;
  char b;
  char a;
} RGBA;

void onFocus();
void RenderString(RECT *rc, char *str, int font, int t_attr, char *Pen, char *Brush);
int onStart(char *exename, char *fname);
void onCreate();
void onClose();
void onExit();
void onRedraw(void);

#endif
