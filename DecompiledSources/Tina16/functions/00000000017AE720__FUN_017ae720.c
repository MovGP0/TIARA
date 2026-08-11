/* Ghidra address: 017ae720 */
/* Ghidra symbol: FUN_017ae720 */


void FUN_017ae720(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = FUN_00498310(param_2,param_3);
  local_30 = FUN_017ae4e0(param_1,&local_50);
  local_50 = FUN_00498310(param_4,param_5);
  local_38 = FUN_017ae4e0(param_1,&local_50);
  local_50 = FUN_00498310(param_6,param_7);
  local_40 = FUN_017ae4e0(param_1,&local_50);
  local_50 = FUN_00498310(param_8,param_9);
  uVar5 = FUN_017ae4e0(param_1,&local_50);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  local_48._0_4_ = (int)uVar5;
  iVar3 = iVar1 + (int)local_48;
  local_48._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = *(int *)(param_1 + 0x18) + local_48._4_4_;
  local_48 = uVar5;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
            (*(longlong **)(param_1 + 8),DAT_01fa23a8 * (iVar1 + (int)local_30),
             DAT_01fa23ac * (iVar2 + local_30._4_4_),DAT_01fa23a8 * (iVar1 + (int)local_38) + 1,
             DAT_01fa23ac * (iVar2 + local_38._4_4_) + 1,DAT_01fa23a8 * (iVar1 + (int)local_40),
             DAT_01fa23ac * (iVar2 + local_40._4_4_),DAT_01fa23a8 * iVar3,DAT_01fa23ac * iVar4);
  return;
}

