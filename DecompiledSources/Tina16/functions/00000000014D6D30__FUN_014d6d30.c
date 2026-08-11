/* Ghidra address: 014d6d30 */
/* Ghidra symbol: FUN_014d6d30 */


void FUN_014d6d30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
    FUN_014d0c00(lVar1 + 8,param_2,param_3,param_4);
    if (*(char *)(lVar1 + 6) != '\0') {
      FUN_014d0c00(lVar1 + 0x128,param_2,param_3,param_4);
    }
    if (*(char *)(lVar1 + 4) != '\0') {
      FUN_014d5cc0(lVar1 + 0xb8,param_2,param_3,param_4);
    }
  }
  return;
}

