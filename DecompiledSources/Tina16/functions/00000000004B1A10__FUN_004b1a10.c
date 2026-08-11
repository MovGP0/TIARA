/* Ghidra address: 004b1a10 */
/* Ghidra symbol: FUN_004b1a10 */


void FUN_004b1a10(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b1870(param_1);
  if ((-1 < iVar1) && (iVar1 != param_2)) {
    FUN_0059abb0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8,iVar1,param_2);
    FUN_004b1830(param_1,1);
  }
  return;
}

