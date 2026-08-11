/* Ghidra address: 016e3fc0 */
/* Ghidra symbol: FUN_016e3fc0 */


void FUN_016e3fc0(undefined8 param_1,undefined4 param_2)

{
  undefined8 in_RAX;
  byte bVar1;
  bool bVar2;
  
  bVar1 = (char)param_2 - 8;
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar1 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    FUN_016e4030(param_1,param_2);
    FUN_016e4390(param_1,param_2);
    FUN_016e4260(param_1,param_2);
    FUN_016e4c80(param_1,param_2);
  }
  return;
}

