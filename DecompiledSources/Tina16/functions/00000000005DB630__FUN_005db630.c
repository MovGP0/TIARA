/* Ghidra address: 005db630 */
/* Ghidra symbol: FUN_005db630 */


void FUN_005db630(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00598040(*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) + 8);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

