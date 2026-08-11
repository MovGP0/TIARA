/* Ghidra address: 00445ca0 */
/* Ghidra symbol: FUN_00445ca0 */


void FUN_00445ca0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong local_20;
  
  local_20 = 0;
  if (*(int *)(param_1 + 0xc0) < 5) {
    iVar1 = *(int *)(param_1 + 0xc0);
  }
  else {
    iVar1 = 0;
  }
  iVar2 = *(short *)(param_1 + 0x54) + -1;
  FUN_00445a20(param_1,0x45);
  if (*(char *)(param_1 + 0x57) == '\0') {
    if (*(char *)(param_1 + 0xb0) != '\0') {
      FUN_00445a20(param_1,DAT_01dc04d6);
    }
    iVar2 = 0;
  }
  else if (iVar2 < 0) {
    iVar2 = -iVar2;
    FUN_00445a20(param_1,DAT_01dc04d4);
  }
  else if (*(char *)(param_1 + 0xb0) != '\0') {
    FUN_00445a20(param_1,DAT_01dc04d6);
  }
  FUN_0043f750(&local_20,iVar2);
  iVar2 = 0;
  if (local_20 != 0) {
    iVar2 = *(int *)(local_20 + -4);
  }
  for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    FUN_00445a20(param_1,DAT_01dc04d8);
  }
  FUN_00445a70(param_1,local_20);
  FUN_00414480(&local_20);
  return;
}

