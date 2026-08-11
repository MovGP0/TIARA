/* Ghidra address: 006dd6f0 */
/* Ghidra symbol: FUN_006dd6f0 */


int FUN_006dd6f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) == param_1) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x20);
  }
  else {
    cVar1 = FUN_006ddea0(param_1);
    if (cVar1 == '\0') {
      iVar2 = -1;
      for (; param_1 != 0; param_1 = FUN_006dd6a0(param_1)) {
        iVar2 = iVar2 + 1;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

