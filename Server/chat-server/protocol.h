#ifndef _PROTOCOL_H_
#define _PROTOCOL_H_

typedef enum
{
    EM_MSG_TYPE_UNKNOWN = 0,
    EM_MSG_TYPE_HEARTBEAT = 1000,
    EM_MSG_TYPE_LOGIN,
    EM_MSG_TYPE_REGISTER,
    EM_MSG_TYPE_MODIFYPWD,
}EM_MSG_TYPE;

typedef enum
{
    EM_ONLINE_TYPE_OFFINE = 0,   //离线
    EM_ONLINE_TYPE_PC_ONLINE,    //电脑在线
    EM_ONLINE_TYPE_PC_STRALTH,   //电脑隐身
    EM_ONLINE_TYPE_ANDROID_4G,   //3/4/5G 手机在线
    EM_ONLINE_TYPE_ANDROID_WIFI, //WiFi 手机在线
    EM_ONLINE_TYPE_IOS_4G,
    EM_ONLINE_TYPE_IOS_WIFI, //ios 在线
    EM_ONLINE_TYPE_MAC,      //mac 在线
} EM_ONLINE_TYPE;

#endif
