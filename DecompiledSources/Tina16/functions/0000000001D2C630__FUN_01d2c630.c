/* Ghidra address: 01d2c630 */
/* Ghidra symbol: FUN_01d2c630 */


void FUN_01d2c630(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x48);
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar2 * 8);
      *piVar1 = *piVar1 + param_2;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar2 * 8);
      *piVar1 = *piVar1 + param_3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

