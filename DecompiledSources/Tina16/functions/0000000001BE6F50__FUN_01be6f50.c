/* Ghidra address: 01be6f50 */
/* Ghidra symbol: FUN_01be6f50 */


int * FUN_01be6f50(longlong *param_1,int *param_2)

{
  int iVar1;
  
  FUN_0065bab0(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,0);
  *param_2 = *param_2 + iVar1;
  return param_2;
}

