/* Ghidra address: 0068d820 */
/* Ghidra symbol: FUN_0068d820 */


void FUN_0068d820(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x490) != '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_0068bd10(param_1,iVar2,1);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

