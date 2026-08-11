/* Ghidra address: 00dfc150 */
/* Ghidra symbol: FUN_00dfc150 */


void FUN_00dfc150(undefined8 param_1,longlong param_2,uint param_3)

{
  bool bVar1;
  undefined4 local_34;
  undefined1 local_30 [4];
  uint local_2c [3];
  
  if (param_3 != 0) {
    FUN_00dfc120(param_1,1,0,local_2c,local_30,&local_34,param_2 + 0x14);
    *(char *)(param_2 + 0xb) = (char)((local_2c[0] & 0x3000) >> 0xc);
    *(byte *)(param_2 + 0xc) = (byte)(local_2c[0] >> 8) & 0xf;
    *(char *)(param_2 + 0xe) = (char)((local_2c[0] & 0xf0) >> 4);
    *(byte *)(param_2 + 0x10) = (byte)local_2c[0] & 0xf;
    *(byte *)(param_2 + 0xf) = (byte)(local_2c[0] >> 0x10) & 0xf;
    *(char *)(param_2 + 0xd) = (char)((local_2c[0] & 0xff00000) >> 0x14);
    if (*(char *)(param_2 + 0x92) == '\x01') {
      *(undefined4 *)(param_2 + 0xac) = local_34;
      *(undefined1 *)(param_2 + 0xa8) = local_30[0];
      *(char *)(param_2 + 0xa9) = local_30[1];
      *(char *)(param_2 + 0xaa) = local_30[3];
      bVar1 = (*(uint *)(param_2 + 0x14) & 0x10000000) != 0;
      *(bool *)(param_2 + 0x91) = bVar1;
      if ((bVar1) && (*(char *)(param_2 + 0x8f) = local_30[2], local_30[2] == '\0')) {
        *(undefined1 *)(param_2 + 0x8f) = 1;
      }
      if (1 < param_3) {
        *(undefined1 *)(param_2 + 9) = 1;
        FUN_00dfc120(param_1,2,0,param_2 + 0x98,param_2 + 0x9c,param_2 + 0xa0,param_2 + 0xa4);
      }
    }
  }
  return;
}

