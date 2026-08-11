/* Ghidra address: 00dfe160 */
/* Ghidra symbol: FUN_00dfe160 */


void FUN_00dfe160(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  uint local_40 [2];
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28 [4];
  uint local_24;
  undefined1 local_20 [4];
  uint local_1c;
  
  local_30 = 0;
  local_48 = 0;
  *(undefined1 *)(param_2 + 0x92) = 2;
  *(undefined8 *)(param_2 + 0x34) = 0x7869727943;
  *(undefined2 *)(param_2 + 0x3c) = 0;
  FUN_00dfc120(param_1,0x80000000,0,&local_1c,local_20,local_20,local_20);
  if (local_1c == 0) {
    FUN_00dfc150(param_1,param_2,param_3);
    bVar1 = *(byte *)(param_2 + 0xc);
    if (bVar1 == 4) {
      pcVar4 = "Cyrix MediaGX";
      puVar3 = (undefined8 *)(param_2 + 0x3e);
      for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar3 = puVar3 + 1;
      }
    }
    else if (bVar1 == 5) {
      if (*(char *)(param_2 + 0xe) == '\x02') {
        puVar3 = &DAT_00dfe562;
        puVar5 = (undefined8 *)(param_2 + 0x3e);
        for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      else if (*(char *)(param_2 + 0xe) == '\x04') {
        puVar3 = &DAT_00dfe592;
        puVar5 = (undefined8 *)(param_2 + 0x3e);
        for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
      }
    }
    else if (bVar1 == 6) {
      pcVar4 = "6x86MX";
      puVar3 = (undefined8 *)(param_2 + 0x3e);
      for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      local_40[0] = (uint)bVar1;
      local_38 = 0;
      FUN_00442f70(&local_30,L"%dx86",local_40,0);
      FUN_00415dd0(&local_48,local_30,0);
      FUN_004425e0(param_2 + 0x3e,local_48);
    }
  }
  else {
    *(undefined1 *)(param_2 + 10) = 1;
    if (0x80000000 < local_1c) {
      FUN_00dfc120(param_1,0x80000001,0,&local_24,local_28,local_20,param_2 + 0x14);
      *(char *)(param_2 + 0xb) = (char)((local_24 & 0xf000) >> 0xc);
      *(byte *)(param_2 + 0xc) = (byte)(local_24 >> 8) & 0xf;
      *(char *)(param_2 + 0xe) = (char)((local_24 & 0xf0) >> 4);
      *(byte *)(param_2 + 0x10) = (byte)local_24 & 0xf;
    }
    if (0x80000001 < local_1c) {
      FUN_00dfc120(param_1,0x80000002,0,param_2 + 0x3e,param_2 + 0x42,param_2 + 0x46,param_2 + 0x4a)
      ;
    }
    if (0x80000002 < local_1c) {
      FUN_00dfc120(param_1,0x80000003,0,param_2 + 0x4e,param_2 + 0x52,param_2 + 0x56,param_2 + 0x5a)
      ;
    }
    if (0x80000003 < local_1c) {
      FUN_00dfc120(param_1,0x80000004,0,param_2 + 0x5e,param_2 + 0x62,param_2 + 0x66,param_2 + 0x6a)
      ;
    }
    if (0x80000004 < local_1c) {
      *(undefined1 *)(param_2 + 9) = 1;
      FUN_00dfc120(param_1,0x80000005,0,local_20,param_2 + 0x98,param_2 + 0x94,local_20);
    }
  }
  FUN_004144d0(&local_48);
  FUN_00414480(&local_30);
  return;
}

