/* Ghidra address: 0064fe10 */
/* Ghidra symbol: FUN_0064fe10 */


void FUN_0064fe10(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x90) = iVar1;
  iVar2 = param_2[1];
  *(int *)(param_1 + 0x94) = iVar2;
  *(int *)(param_1 + 0x98) = param_2[2] - iVar1;
  *(int *)(param_1 + 0x9c) = param_2[3] - iVar2;
  FUN_0064c920(param_1);
  FUN_00652660(param_1);
  return;
}

