#include "inc\mc.h"
#include "inc\mui.h"

void KillTextInput()
{
  FREE_GUI(MCBook->textinp);
}


void OkTextInput(BOOK *,wchar_t * string,int len)
{
  wstrncpy(wsbuf,string,MAXELEMS(wsbuf)-1);
  if (!MCBook->tstname || TestFileName(wsbuf))
  {
    MCBook->retproc(wsbuf);
    FREE_GUI(MCBook->textinp);
  }
  else
  {
    MsgBoxError(muitxt(ind_err_badname));
    CorFileName(wsbuf);
    STRID txt=Str2ID(wsbuf,0,SID_ANY_LEN);
    StringInput_DispObject_SetText(GUIObj_GetDISPObj(MCBook->textinp),txt);
  }
}


void TextInput(wchar_t *prmpt, int TestFileName, const wchar_t *wsname, IFN_RET_PROC retproc)
{
  STRID pr, str;
  pr=Str2ID(prmpt,0,SID_ANY_LEN);
  str=Str2ID(wsname,0,SID_ANY_LEN);
  MCBook->tstname=TestFileName;
  MCBook->retproc=retproc;
  MCBook->textinp=CreateStringInput(0,
                                    VAR_PREV_ACTION_PROC(KillTextInput),
                                    VAR_LONG_BACK_PROC(KillTextInput),
                                    VAR_BOOK(MCBook),
                                    VAR_OK_PROC(OkTextInput),
                                    VAR_STRINP_FIXED_TEXT(pr),
                                    VAR_STRINP_TEXT(str),
                                    VAR_STRINP_MIN_LEN(0),
                                    VAR_STRINP_MAX_LEN(MAX_PATH),
                                    0);
  
}