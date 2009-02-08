#ifndef _KRNL_H
#define _KRNL_H


#define MAX_PATH		0x100
#define MAX_EXT			8

typedef struct
{
	short id;
	int	ftype;
        short attr;
	unsigned int size;
	unsigned int csize;
	unsigned int time;
	int	uccnt;
	int	inited;
	wchar_t* ws_name;
	wchar_t* ws_showname;
        wchar_t icon;
	STRID ws_attr;
	STRID ws_size;
	STRID ws_time;
	STRID ws_ratio;
	STRID ws_short;
        STRID sid_name;
	void* next;
} FILEINF;

extern int progr_stop;
extern int progr_act;
extern int progr_max;
extern int progr_cur;
extern int progr_start;
extern int progrsp_max;
extern int progrsp_cur;
extern int progrsp_start;

wchar_t* MCFilePath(const wchar_t* sfile);
void AddFile(int tab, int findex, const wchar_t *fname, unsigned int fsize, short fattr,
				  unsigned int ftime, int fcsize, int ftype);
void DelFiles(int tab);
int InitTab(int tab);
void FreeTab(int tab);

void initprogr(int act);
void incprogr(int inc);
void incprogrsp(int inc);
void endprogr();
void endprogrsp();

extern void DoErrKey();
extern wchar_t mcpath[MAX_PATH];
extern wchar_t pathbuf[MAX_PATH];
extern wchar_t zippathbuf[MAX_PATH];
extern char msgbuf[256];

void FillFileInfo(FILEINF *file);
void _cd_tab(int tab, int drv, wchar_t *dname);
int SetTabDrv(int tab, int num);
void SetTabIndex(int tab, int num, int slide);
wchar_t* CurFullPath(wchar_t* sfile);
void SetCurTabIndex(int num, int slide);
int DoRefresh();
void UpdateAll();
int GetCurTabFileIndex(wchar_t* fname);

extern wchar_t in_open_path[MAX_PATH];
extern const wchar_t keys_file[];
void ExitFromZip();

typedef int (*ENUM_FILES_PROC) (int param);
typedef int (*ENUM_SEL_PROC) (FILEINF *file, int param);
int EnumChk(ENUM_SEL_PROC EnumProc, int param);
int EnumSel(ENUM_SEL_PROC EnumProc, int param);

void DoSwapTab();
void DoPrvDrv();
void DoNxtDrv();
void DoUp();
void DoDwn();
void DoSortN();
void DoSortE();
void DoSortS();
void DoSortD();
void DoSetSort();
void DoSortR();
void DoOpen();
void DoSysOpen();
void DoBackK();
void DoChk();
void DoChkAll();
void DoUnCAll();
void DoInvChk();
void DoDel();
void DoMenu();
void DoExit();
void DoPaste();
void DoCopy();
#endif
