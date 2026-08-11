/* Ghidra address: 0068b9b0 */
/* Ghidra symbol: FUN_0068b9b0 */


void FUN_0068b9b0(longlong param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x4c0) != param_2) {
    if ((*(int *)(param_1 + 0x4c0) == 0) || (param_2 == 0)) {
      *(int *)(param_1 + 0x4c0) = param_2;
      FUN_00655b90(param_1);
    }
    else {
      *(int *)(param_1 + 0x4c0) = param_2;
      cVar1 = FUN_0065be20(param_1);
      if (cVar1 != '\0') {
        FUN_0068b940(param_1);
      }
    }
  }
  return;
}

