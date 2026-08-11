/* Ghidra address: 01aa0d10 */
/* Ghidra symbol: FUN_01aa0d10 */


undefined8 FUN_01aa0d10(undefined8 param_1,ulonglong param_2,uint param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 local_1e0 [88];
  undefined1 local_188 [168];
  undefined1 local_e0 [103];
  byte local_79 [81];
  
  local_79[0] = 0;
  do {
    uVar2 = param_2 & 0xffffffff;
    param_2 = uVar2 / 0x10;
    FUN_01aa0c50(local_e0,uVar2 % 0x10);
    FUN_00414ff0(local_188,local_e0);
    FUN_00415110(local_188,local_79,0xa0);
    FUN_00415020(local_79,local_188,0x50);
  } while ((int)param_2 != 0);
  if (param_4 == '\0') {
    param_3 = param_3 / 4;
  }
  if ((local_79[0] < param_3) && ((uint)local_79[0] <= param_3 - 1)) {
    iVar1 = ((param_3 - 1) - (uint)local_79[0]) + 1;
    do {
      FUN_00414ff0(local_1e0,&LAB_01aa0e40);
      FUN_00415110(local_1e0,local_79,0x51);
      FUN_00415020(local_79,local_1e0,0x50);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00415020(param_1,local_79,0x50);
  return param_1;
}

