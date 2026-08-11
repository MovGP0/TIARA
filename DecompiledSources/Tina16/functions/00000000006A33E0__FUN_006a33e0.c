/* Ghidra address: 006a33e0 */
/* Ghidra symbol: FUN_006a33e0 */


void FUN_006a33e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x31) != '\0') &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10), 1 < iVar1)) {
    FUN_006a3500(param_1,0,iVar1 + -1,param_2);
  }
  return;
}

