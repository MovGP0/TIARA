/* Ghidra address: 00b95310 */
/* Ghidra symbol: FUN_00b95310 */


int FUN_00b95310(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = -1, iVar2 < *(int *)(param_1 + 0x10) &&
         (iVar1 = iVar2, *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8) != param_2)
         )) {
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}

