/* Ghidra address: 01bd4760 */
/* Ghidra symbol: FUN_01bd4760 */


void FUN_01bd4760(longlong *param_1)

{
  int iVar1;
  
  FUN_01bd3410(param_1);
  iVar1 = (**(code **)(*param_1 + 0x280))(param_1);
  FUN_0064cbf0(param_1,(int)param_1[0x13] + iVar1);
  return;
}

