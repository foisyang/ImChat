#pragma once

enum MSG_TYPE
{
    msg_type_unknow = 0,
    msg_type_heartbeat = 1000,
    msg_type_login,
    msg_type_register,
    msg_type_
};

enum ONLINE_TYPE
{
    online_type_offline = 0,                //离线
    online_type_pc_online,                  //电脑在线
    online_type_pc_stealth,                 //电脑隐身
    online_type_mobile_android_cellular,    //3/4/5G 手机在线
    online_type_mobile_android_WiFi,        //WiFi 手机在线
    online_type_ios,                        //ios 在线
    online_type_mac                         //mac 在线
};
