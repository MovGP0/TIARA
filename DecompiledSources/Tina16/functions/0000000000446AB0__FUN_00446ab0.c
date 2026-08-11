/* Ghidra address: 00446ab0 */
/* Ghidra symbol: FUN_00446ab0 */


void FUN_00446ab0(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (*(int *)(*(longlong *)(param_1 + 0x60) + 0x94) < *(int *)(param_1 + 0x3c)) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    }
    else {
      FUN_004469c0(param_1,0x30);
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_00446a50(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    while (0 < iVar1) {
      FUN_00446a50(param_1);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      iVar1 = *(int *)(param_1 + 0x30);
    }
    FUN_00446a50(param_1);
  }
  return;
}

