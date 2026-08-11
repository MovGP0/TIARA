/* Ghidra address: 017aec60 */
/* Ghidra symbol: FUN_017aec60 */


void FUN_017aec60(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = FUN_00498310(param_2,param_3);
  uVar1 = FUN_017ae4e0(param_1,local_30);
  local_20._0_4_ = (int)uVar1;
  iVar2 = *(int *)(param_1 + 0x14) + (int)local_20;
  local_20._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  iVar3 = *(int *)(param_1 + 0x18) + local_20._4_4_;
  local_20 = uVar1;
  (**(code **)(**(longlong **)(param_1 + 8) + 200))
            (*(longlong **)(param_1 + 8),DAT_01fa23a8 * iVar2,DAT_01fa23ac * iVar3);
  return;
}

