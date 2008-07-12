#ifndef W580_R8BE001
#error W580_R8BE001 configuration needed for this header!
#else
#ifndef _W580_R8BE001_
#define _W580_R8BE001_

#define EXT_TABLE 0x45AC9708
#define RUN_CHECK 0x44EBB1ED
#define HELPER_SIG 0x6FF0

#define PATH_AUDIO_INT 0x45717240
#define PATH_AUDIO_EXT 0x45717584
#define PATH_IMAGE_INT 0x457172E4
#define PATH_IMAGE_EXT 0x457175F0
#define PATH_VIDEO_INT 0x45717390
#define PATH_VIDEO_EXT 0x45717694
#define PATH_THEME_INT 0x45717370
#define PATH_THEME_EXT 0x4571767C
#define PATH_OTHER_INT 0x45717308
#define PATH_OTHER_EXT 0x45717648

#define PATH_ELF_ROOT_INT     (L"/tpa/user/other/ZBin")
#define PATH_ELF_ROOT_EXT     (L"/card/other/ZBin")
#define PATH_ELF_INT          (L"/tpa/user/other/ZBin")
#define PATH_ELF_EXT          (L"/card/other/ZBin")
#define PATH_ELF_DAEMONS_INT  (L"/tpa/user/other/ZBin/Daemons")
#define PATH_ELF_DAEMONS_EXT  (L"/card/other/ZBin/Daemons")
#define PATH_ELF_CONFIG_INT   (L"/tpa/user/other/ZBin/Config")
#define PATH_ELF_CONFIG_EXT   (L"/card/other/ZBin/Config")
#define PATH_INI              (L"/tpa/user/other/ini")
#define PATH_DEFAULT          (L"/tpa/user/other")

#define ELF_RUN_PAGE_PREVIOUS_EVENT  0x44EBA579
#define ELF_RUN_PAGE_ACCEPT_EVENT    0x44EBA575
#define ELF_RUN_PAGE_CANCEL_EVENT    0x44EBA589
#define ELF_RUN_PAGE_PAGE_EXIT_EVENT 0x44EB2FB1

#define DB_CMD_SETSMALLICON 0x3B
#define DB_CMD_SETTHUMBNAILICON 0x3C
#define DB_DB_EXT_C1 0x2EC

#endif
#endif