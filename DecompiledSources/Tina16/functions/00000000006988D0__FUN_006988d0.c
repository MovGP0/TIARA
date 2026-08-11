/* Ghidra address: 006988d0 */
/* Ghidra symbol: FUN_006988d0 */


undefined8 * FUN_006988d0(undefined8 *param_1,int *param_2,ulonglong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  ulonglong uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_00423b50(param_2,-*param_2,-param_2[1]);
  iVar1 = FUN_004230c0(&local_38);
  iVar2 = FUN_004230c0(param_2);
  FUN_00423b50(param_2,0,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff);
  FUN_00423b50(param_2,local_38 & 0xffffffff,local_38._4_4_);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  return param_1;
}

