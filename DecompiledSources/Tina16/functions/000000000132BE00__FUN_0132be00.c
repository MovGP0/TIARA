/* Ghidra address: 0132be00 */
/* Ghidra symbol: FUN_0132be00 */


void FUN_0132be00(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_007fd7d0(param_1[0xe1]);
  iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
  FUN_00806af0(param_1,(((iVar1 + *(int *)(param_1[0xe1] + 0x98)) - iVar2) - (int)param_1[0x13]) +
                       -7);
  iVar1 = FUN_007fd800(param_1[0xe1]);
  FUN_00806b40(param_1,iVar1 + 0x1a);
  return;
}

