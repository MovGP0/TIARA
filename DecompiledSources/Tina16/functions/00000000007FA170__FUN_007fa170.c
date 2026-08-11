/* Ghidra address: 007fa170 */
/* Ghidra symbol: FUN_007fa170 */


bool FUN_007fa170(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_007fa0c0(param_1,0,0);
  return iVar1 < *(int *)(param_1 + 0x18);
}

