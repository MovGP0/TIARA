/* Ghidra address: 007ff300 */
/* Ghidra symbol: FUN_007ff300 */


void FUN_007ff300(longlong param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  *param_2 = *param_2 & 0xfff4ffff;
  *param_3 = *param_3 & 0xfffffbff;
  bVar2 = *(byte *)(param_1 + 0x4d1);
  if (*(char *)(param_1 + 0x4d6) == '\x01') {
    if (bVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_4 >> 8),1) << (bVar2 & 0x1f) & 9U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      bVar2 = 2;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x4d0);
  if (bVar2 == 0) {
    bVar1 = 0;
  }
  else if (bVar2 == 3) {
    bVar1 = bVar1 & 9;
  }
  else if ((byte)(bVar2 - 4) < 2) {
    bVar1 = bVar1 & 1;
  }
  if ((bVar2 < 8 && (1 << (bVar2 & 0x1f) & 7U) != 0) &&
     ((*(char *)(param_1 + 0x4d6) != '\x01' || ((bVar1 & 1) != 0)))) {
    if ((bVar1 & 2) != 0) {
      *param_2 = *param_2 | 0x20000;
    }
    if ((bVar1 & 4) != 0) {
      *param_2 = *param_2 | 0x10000;
    }
  }
  if ((bVar1 & 1) != 0) {
    *param_2 = *param_2 | 0x80000;
  }
  if ((bVar1 & 8) != 0) {
    *param_3 = *param_3 | 0x400;
  }
  return;
}

