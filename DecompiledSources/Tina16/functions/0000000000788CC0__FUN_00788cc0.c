/* Ghidra address: 00788cc0 */
/* Ghidra symbol: FUN_00788cc0 */


void FUN_00788cc0(longlong param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == *(int *)(param_1 + 0x44)) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = param_2 != *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) + 0x28);
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *(int *)(param_1 + 0x44) = param_2;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_005fdab0(*(longlong *)(param_1 + 0x38));
    }
  }
  return;
}

