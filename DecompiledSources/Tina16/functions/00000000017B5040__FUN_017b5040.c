/* Ghidra address: 017b5040 */
/* Ghidra symbol: FUN_017b5040 */


void FUN_017b5040(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  uVar1 = *param_2;
  local_20._0_4_ = (int)uVar1;
  iVar2 = (int)local_20 - *(int *)(param_1 + 0x18);
  local_20._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  iVar3 = local_20._4_4_ - *(int *)(param_1 + 0x1c);
  local_20 = uVar1;
  local_30[0] = FUN_00498310(iVar2,iVar3);
  FUN_017b4f80(param_1,local_30,0);
  return;
}

