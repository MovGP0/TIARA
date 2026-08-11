/* Ghidra address: 00dfe9b0 */
/* Ghidra symbol: FUN_00dfe9b0 */


void FUN_00dfe9b0(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint local_34;
  undefined1 local_30 [4];
  uint local_2c;
  
  *(undefined1 *)(param_2 + 0x92) = 4;
  builtin_strncpy((char *)(param_2 + 0x34),"Transmet",8);
  ((char *)(param_2 + 0x3c))[0] = 'a';
  ((char *)(param_2 + 0x3c))[1] = '\0';
  if (param_3 != 0) {
    FUN_00dfc120(param_1,1,0,&local_34,local_30,local_30,param_2 + 0x14);
    *(char *)(param_2 + 0xb) = (char)((local_34 & 0x3000) >> 0xc);
    *(byte *)(param_2 + 0xc) = (byte)(local_34 >> 8) & 0xf;
    *(char *)(param_2 + 0xe) = (char)((local_34 & 0xf0) >> 4);
    *(byte *)(param_2 + 0x10) = (byte)local_34 & 0xf;
  }
  FUN_00dfc120(param_1,0x80000000,0,&local_2c,param_2 + 0x3e,param_2 + 0x46,param_2 + 0x42);
  if (local_2c == 0) {
    pcVar2 = "Crusoe";
    puVar3 = (undefined8 *)(param_2 + 0x3e);
    for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *(undefined8 *)pcVar2;
      pcVar2 = pcVar2 + 8;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    *(undefined1 *)(param_2 + 10) = 1;
    if (0x80000000 < local_2c) {
      FUN_00dfc120(param_1,0x80000001,0,local_30,local_30,local_30,param_2 + 0x94);
    }
    if (0x80000001 < local_2c) {
      FUN_00dfc120(param_1,0x80000002,0,param_2 + 0x3e,param_2 + 0x42,param_2 + 0x46,param_2 + 0x4a)
      ;
    }
    if (0x80000002 < local_2c) {
      FUN_00dfc120(param_1,0x80000003,0,param_2 + 0x4e,param_2 + 0x52,param_2 + 0x56,param_2 + 0x5a)
      ;
    }
    if (0x80000003 < local_2c) {
      FUN_00dfc120(param_1,0x80000004,0,param_2 + 0x5e,param_2 + 0x62,param_2 + 0x66,param_2 + 0x6a)
      ;
    }
    if (0x80000004 < local_2c) {
      *(undefined1 *)(param_2 + 9) = 1;
      FUN_00dfc120(param_1,0x80000005,0,local_30,param_2 + 0x9a,param_2 + 0x9c,param_2 + 0xa0);
    }
    if (*(char *)(param_2 + 9) != '\0') {
      *(uint *)(param_2 + 0x70) = (uint)*(byte *)(param_2 + 0x9f);
      *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)(param_2 + 0x9c);
      *(undefined1 *)(param_2 + 0x75) = *(undefined1 *)(param_2 + 0x9e);
      *(uint *)(param_2 + 0x78) = (uint)*(byte *)(param_2 + 0xa3);
      *(undefined1 *)(param_2 + 0x7c) = *(undefined1 *)(param_2 + 0xa0);
      *(undefined1 *)(param_2 + 0x7d) = *(undefined1 *)(param_2 + 0xa2);
      *(undefined1 *)(param_2 + 0x84) = *(undefined1 *)(param_2 + 0xa4);
      *(byte *)(param_2 + 0x85) = (byte)(*(uint *)(param_2 + 0xa4) >> 0xc) & 0xf;
      *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0xa4) >> 0x10;
    }
    if (0x80000005 < local_2c) {
      FUN_00dfc120(param_1,0x80000006,0,local_30,local_30,param_2 + 0xa4,local_30);
    }
  }
  FUN_00dfc120(param_1,0x80860000,0,&local_2c,local_30,local_30,local_30);
  if (local_2c != 0) {
    if (0x80860000 < local_2c) {
      FUN_00dfc120(param_1,0x80860001,0,local_30,param_2 + 0xa8,param_2 + 0xac,param_2 + 0xbc);
    }
    if (0x80860001 < local_2c) {
      FUN_00dfc120(param_1,0x80860002,0,local_30,param_2 + 0xb4,param_2 + 0xb8,local_30);
    }
    if (0x80860002 < local_2c) {
      FUN_00dfc120(param_1,0x80860003,0,param_2 + 0xc0,param_2 + 0xc4,param_2 + 200,param_2 + 0xcc);
    }
    if (0x80860003 < local_2c) {
      FUN_00dfc120(param_1,0x80860004,0,param_2 + 0xd0,param_2 + 0xd4,param_2 + 0xd8,param_2 + 0xdc)
      ;
    }
    if (0x80860004 < local_2c) {
      FUN_00dfc120(param_1,0x80860005,0,param_2 + 0xe0,param_2 + 0xe4,param_2 + 0xe8,param_2 + 0xec)
      ;
    }
    if (0x80860005 < local_2c) {
      FUN_00dfc120(param_1,0x80860006,0,param_2 + 0xf0,param_2 + 0xf4,param_2 + 0xf8,param_2 + 0xfc)
      ;
    }
    if ((0x80860006 < local_2c) && ((*(uint *)(param_2 + 0xbc) & 2) != 0)) {
      FUN_00dfc120(param_1,0x80860007,0,param_2 + 0x108,param_2 + 0x104,param_2 + 0x10c,local_30);
    }
  }
  *(bool *)(param_2 + 1) = (*(uint *)(param_2 + 0x14) & 0x800000) != 0;
  return;
}

