/* Ghidra address: 00b3e030 */
/* Ghidra symbol: FUN_00b3e030 */


void FUN_00b3e030(int *param_1,undefined8 param_2)

{
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  
  local_1c[0] = *param_1;
  local_20 = param_1[1];
  local_24 = param_1[2];
  local_28 = param_1[3];
  FUN_00b3df80(&local_68,param_2,0x40);
  FUN_00b3de80(local_1c,local_20,local_24,local_28,local_68,7,0xd76aa478);
  FUN_00b3de80(&local_28,local_1c[0],local_20,local_24,local_64,0xc,0xe8c7b756);
  FUN_00b3de80(&local_24,local_28,local_1c[0],local_20,local_60,0x11,0x242070db);
  FUN_00b3de80(&local_20,local_24,local_28,local_1c[0],local_5c,0x16,0xc1bdceee);
  FUN_00b3de80(local_1c,local_20,local_24,local_28,local_58,7,0xf57c0faf);
  FUN_00b3de80(&local_28,local_1c[0],local_20,local_24,local_54,0xc,0x4787c62a);
  FUN_00b3de80(&local_24,local_28,local_1c[0],local_20,local_50,0x11,0xa8304613);
  FUN_00b3de80(&local_20,local_24,local_28,local_1c[0],local_4c,0x16,0xfd469501);
  FUN_00b3de80(local_1c,local_20,local_24,local_28,local_48,7,0x698098d8);
  FUN_00b3de80(&local_28,local_1c[0],local_20,local_24,local_44,0xc,0x8b44f7af);
  FUN_00b3de80(&local_24,local_28,local_1c[0],local_20,local_40,0x11,0xffff5bb1);
  FUN_00b3de80(&local_20,local_24,local_28,local_1c[0],local_3c,0x16,0x895cd7be);
  FUN_00b3de80(local_1c,local_20,local_24,local_28,local_38,7,0x6b901122);
  FUN_00b3de80(&local_28,local_1c[0],local_20,local_24,local_34,0xc,0xfd987193);
  FUN_00b3de80(&local_24,local_28,local_1c[0],local_20,local_30,0x11,0xa679438e);
  FUN_00b3de80(&local_20,local_24,local_28,local_1c[0],local_2c,0x16,0x49b40821);
  FUN_00b3dec0(local_1c,local_20,local_24,local_28,local_64,5,0xf61e2562);
  FUN_00b3dec0(&local_28,local_1c[0],local_20,local_24,local_50,9,0xc040b340);
  FUN_00b3dec0(&local_24,local_28,local_1c[0],local_20,local_3c,0xe,0x265e5a51);
  FUN_00b3dec0(&local_20,local_24,local_28,local_1c[0],local_68,0x14,0xe9b6c7aa);
  FUN_00b3dec0(local_1c,local_20,local_24,local_28,local_54,5,0xd62f105d);
  FUN_00b3dec0(&local_28,local_1c[0],local_20,local_24,local_40,9,0x2441453);
  FUN_00b3dec0(&local_24,local_28,local_1c[0],local_20,local_2c,0xe,0xd8a1e681);
  FUN_00b3dec0(&local_20,local_24,local_28,local_1c[0],local_58,0x14,0xe7d3fbc8);
  FUN_00b3dec0(local_1c,local_20,local_24,local_28,local_44,5,0x21e1cde6);
  FUN_00b3dec0(&local_28,local_1c[0],local_20,local_24,local_30,9,0xc33707d6);
  FUN_00b3dec0(&local_24,local_28,local_1c[0],local_20,local_5c,0xe,0xf4d50d87);
  FUN_00b3dec0(&local_20,local_24,local_28,local_1c[0],local_48,0x14,0x455a14ed);
  FUN_00b3dec0(local_1c,local_20,local_24,local_28,local_34,5,0xa9e3e905);
  FUN_00b3dec0(&local_28,local_1c[0],local_20,local_24,local_60,9,0xfcefa3f8);
  FUN_00b3dec0(&local_24,local_28,local_1c[0],local_20,local_4c,0xe,0x676f02d9);
  FUN_00b3dec0(&local_20,local_24,local_28,local_1c[0],local_38,0x14,0x8d2a4c8a);
  FUN_00b3df00(local_1c,local_20,local_24,local_28,local_54,4,0xfffa3942);
  FUN_00b3df00(&local_28,local_1c[0],local_20,local_24,local_48,0xb,0x8771f681);
  FUN_00b3df00(&local_24,local_28,local_1c[0],local_20,local_3c,0x10,0x6d9d6122);
  FUN_00b3df00(&local_20,local_24,local_28,local_1c[0],local_30,0x17,0xfde5380c);
  FUN_00b3df00(local_1c,local_20,local_24,local_28,local_64,4,0xa4beea44);
  FUN_00b3df00(&local_28,local_1c[0],local_20,local_24,local_58,0xb,0x4bdecfa9);
  FUN_00b3df00(&local_24,local_28,local_1c[0],local_20,local_4c,0x10,0xf6bb4b60);
  FUN_00b3df00(&local_20,local_24,local_28,local_1c[0],local_40,0x17,0xbebfbc70);
  FUN_00b3df00(local_1c,local_20,local_24,local_28,local_34,4,0x289b7ec6);
  FUN_00b3df00(&local_28,local_1c[0],local_20,local_24,local_68,0xb,0xeaa127fa);
  FUN_00b3df00(&local_24,local_28,local_1c[0],local_20,local_5c,0x10,0xd4ef3085);
  FUN_00b3df00(&local_20,local_24,local_28,local_1c[0],local_50,0x17,0x4881d05);
  FUN_00b3df00(local_1c,local_20,local_24,local_28,local_44,4,0xd9d4d039);
  FUN_00b3df00(&local_28,local_1c[0],local_20,local_24,local_38,0xb,0xe6db99e5);
  FUN_00b3df00(&local_24,local_28,local_1c[0],local_20,local_2c,0x10,0x1fa27cf8);
  FUN_00b3df00(&local_20,local_24,local_28,local_1c[0],local_60,0x17,0xc4ac5665);
  FUN_00b3df40(local_1c,local_20,local_24,local_28,local_68,6,0xf4292244);
  FUN_00b3df40(&local_28,local_1c[0],local_20,local_24,local_4c,10,0x432aff97);
  FUN_00b3df40(&local_24,local_28,local_1c[0],local_20,local_30,0xf,0xab9423a7);
  FUN_00b3df40(&local_20,local_24,local_28,local_1c[0],local_54,0x15,0xfc93a039);
  FUN_00b3df40(local_1c,local_20,local_24,local_28,local_38,6,0x655b59c3);
  FUN_00b3df40(&local_28,local_1c[0],local_20,local_24,local_5c,10,0x8f0ccc92);
  FUN_00b3df40(&local_24,local_28,local_1c[0],local_20,local_40,0xf,0xffeff47d);
  FUN_00b3df40(&local_20,local_24,local_28,local_1c[0],local_64,0x15,0x85845dd1);
  FUN_00b3df40(local_1c,local_20,local_24,local_28,local_48,6,0x6fa87e4f);
  FUN_00b3df40(&local_28,local_1c[0],local_20,local_24,local_2c,10,0xfe2ce6e0);
  FUN_00b3df40(&local_24,local_28,local_1c[0],local_20,local_50,0xf,0xa3014314);
  FUN_00b3df40(&local_20,local_24,local_28,local_1c[0],local_34,0x15,0x4e0811a1);
  FUN_00b3df40(local_1c,local_20,local_24,local_28,local_58,6,0xf7537e82);
  FUN_00b3df40(&local_28,local_1c[0],local_20,local_24,local_3c,10,0xbd3af235);
  FUN_00b3df40(&local_24,local_28,local_1c[0],local_20,local_60,0xf,0x2ad7d2bb);
  FUN_00b3df40(&local_20,local_24,local_28,local_1c[0],local_44,0x15,0xeb86d391);
  *param_1 = *param_1 + local_1c[0];
  param_1[1] = param_1[1] + local_20;
  param_1[2] = param_1[2] + local_24;
  param_1[3] = param_1[3] + local_28;
  FUN_00b3e010(&local_68,0,0x40);
  return;
}

