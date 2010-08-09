#ifndef W600_R7CA017
#error W600_R7CA017 configuration needed for this header!
#else
#ifndef _W600_R7CA017_
#define _W600_R7CA017_

#define EXT_TABLE 0x444507E0
#define HELPER_SIG 0x6FF0

#define PATH_AUDIO_INT (wchar_t*)0x445AD9EA
#define PATH_AUDIO_EXT (wchar_t*)0x445AD9EA
#define PATH_IMAGE_INT (wchar_t*)0x445ADA6A
#define PATH_IMAGE_EXT (wchar_t*)0x445ADA6A
#define PATH_VIDEO_INT (wchar_t*)0x445ADB46
#define PATH_VIDEO_EXT (wchar_t*)0x445ADB46
#define PATH_THEME_INT (wchar_t*)0x445ADB30
#define PATH_THEME_EXT (wchar_t*)0x445ADB30
#define PATH_OTHER_INT (wchar_t*)0x445ADAF8
#define PATH_OTHER_EXT (wchar_t*)0x445ADAF8

#define PATH_ELF_ROOT_INT        (L"/usb/other/ZBin")
#define PATH_ELF_ROOT_EXT        (L"/usb/other/ZBin")
#define PATH_ELF_INT             (L"/usb/other/ZBin")
#define PATH_ELF_EXT             (L"/usb/other/ZBin")
#define PATH_ELF_DAEMONS_INT     (L"/usb/other/ZBin/Daemons")
#define PATH_ELF_DAEMONS_EXT     (L"/usb/other/ZBin/Daemons")
#define PATH_ELF_CONFIG_INT      (L"/usb/other/ZBin/Config")
#define PATH_ELF_CONFIG_EXT      (L"/usb/other/ZBin/Config")
#define PATH_INI                 (L"/usb/other/ini")
#define PATH_DLL                 (L"/usb/other/ZBin/DLL")
#define PATH_DEFAULT             (L"/usb/other")

#define PATH_USER_INT            (L"/usb")
#define PATH_USER_EXT            (L"/usb")

#define DB_CMD_SETSMALLICON 0x36

#define PAGE_ENTER_EVENT 5
#define PAGE_EXIT_EVENT 6
#define ACCEPT_EVENT 0x0F
#define PREVIOUS_EVENT 0x10
#define CANCEL_EVENT 0x11

#endif
#endif

