/* Ghidra address: 0083da60 */
/* Ghidra symbol: FUN_0083da60 */


void FUN_0083da60(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)*param_1;
  }
  FUN_0083d910(param_1,iVar1,param_2 - iVar1,param_3);
  return;
}

