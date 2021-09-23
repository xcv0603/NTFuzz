#pragma once

#define FILENAME_MAXLEN (256)
#define PROGNAME_MAXLEN (256)

#define DEVICE_NAME_KERNEL     L"\\Device\\Hooker"
#define DOS_DEVICE_NAME_KERNEL L"\\DosDevices\\Hooker"
#define DEVICE_NAME_USER       L"\\\\.\\Hooker"

// XXX. Copied from ntddk.h. How include this in user application?

#define CTL_CODE( DeviceType, Function, Method, Access ) (                 \
    ((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)

#define HOOKER_IOCTL_TYPE 50000

#define IOCTL_INIT_BASE \
    CTL_CODE( HOOKER_IOCTL_TYPE, 0x900, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_INSTALL_HOOK \
    CTL_CODE( HOOKER_IOCTL_TYPE, 0x901, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_SET_TARGET \
    CTL_CODE( HOOKER_IOCTL_TYPE, 0x902, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_GET_EXEC_COUNT \
    CTL_CODE( HOOKER_IOCTL_TYPE, 0x903, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_SET_RATIO \
    CTL_CODE( HOOKER_IOCTL_TYPE, 0x904, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_SET_CONFIG \
    CTL_CODE( HOOKER_IOCTL_TYPE, 0x905, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_ADD_POISON \
    CTL_CODE( HOOKER_IOCTL_TYPE, 0x906, METHOD_NEITHER, FILE_ANY_ACCESS )