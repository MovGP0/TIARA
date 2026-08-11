/* Ghidra address: 014d8ee0 */
/* Ghidra symbol: FUN_014d8ee0 */


void FUN_014d8ee0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 in_RAX;
  byte bVar2;
  bool bVar3;
  
  lVar1 = *param_1;
  bVar2 = (char)param_4 - 8;
  if (bVar2 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar2 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    if (*(char *)(lVar1 + 5) == '\0') {
      FUN_014d2fb0(*param_1 + 8,param_2,param_3,param_4);
    }
    else {
      FUN_014d4e20(*param_1 + 8,param_2,param_3,param_4);
    }
    if (*(char *)(lVar1 + 6) != '\0') {
      FUN_014d1db0(*param_1 + 0x138,param_2,param_3,param_4);
    }
    if (*(char *)(lVar1 + 4) != '\0') {
      FUN_014d66a0(*param_1 + 200,param_2,param_3,param_4);
    }
  }
  return;
}

