/* Ghidra address: 004238f0 */
/* Ghidra symbol: FUN_004238f0 */


undefined8 * FUN_004238f0(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00423b50(param_2,-*param_2,-param_2[1]);
  iVar1 = *param_3;
  iVar2 = param_3[1];
  FUN_00423b50(param_2,(longlong)((param_3[2] - iVar1) - (param_2[2] - *param_2)) / 2 & 0xffffffff,
               (longlong)((param_3[3] - iVar2) - (param_2[3] - param_2[1])) / 2 & 0xffffffff);
  FUN_00423b50(param_2,iVar1,iVar2);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  return param_1;
}

