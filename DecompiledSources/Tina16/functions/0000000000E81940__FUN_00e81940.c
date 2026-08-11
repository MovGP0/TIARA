/* Ghidra address: 00e81940 */
/* Ghidra symbol: FUN_00e81940 */


void FUN_00e81940(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x90),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x98,param_2);
    if (*(char *)(param_1 + 0x400b4) == '\0') {
      FUN_00bd1700(&local_10,*(undefined8 *)(param_1 + 0x98));
      FUN_00414ad0(param_1 + 0x90,local_10);
    }
    else {
      FUN_00414ad0(param_1 + 0x90,*(undefined8 *)(param_1 + 0x98));
    }
    *(undefined1 *)(param_1 + 0x400c0) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_00414480(&local_10);
  return;
}

