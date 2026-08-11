/* Ghidra address: 017b35d0 */
/* Ghidra symbol: FUN_017b35d0 */


void FUN_017b35d0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = FUN_00498310(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),
                          *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
  if (*param_2 == 0x7fffffff) {
    uVar1 = FUN_00498310(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x250) / 2,
                         *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x254) / 2);
    *(undefined8 *)param_2 = uVar1;
  }
  local_30 = FUN_00498310(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x250) / 2,
                          *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x254) / 2);
  uVar1 = FUN_017ad6c0(&local_30,param_2);
  local_20._0_4_ = (int)uVar1;
  iVar2 = (int)local_20 - *(int *)(param_1 + 0x250) / 2;
  local_20._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  iVar3 = local_20._4_4_ - *(int *)(param_1 + 0x254) / 2;
  local_20 = uVar1;
  uVar1 = FUN_00498310(iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00498310(*(int *)(param_1 + 0x18) - (int)local_28,
                       *(int *)(param_1 + 0x1c) - local_28._4_4_);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

