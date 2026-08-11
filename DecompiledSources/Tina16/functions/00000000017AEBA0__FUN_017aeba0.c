/* Ghidra address: 017aeba0 */
/* Ghidra symbol: FUN_017aeba0 */


void FUN_017aeba0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = FUN_00498310(param_2,param_3);
  uVar5 = FUN_017ae4e0(param_1,local_40);
  local_30._0_4_ = (int)uVar5;
  iVar2 = (int)local_30;
  local_30._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
  iVar3 = local_30._4_4_;
  iVar6 = *(int *)(param_1 + 0x14) + (int)local_30;
  iVar7 = *(int *)(param_1 + 0x18) + local_30._4_4_;
  local_30 = uVar5;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))
            (*(longlong **)(param_1 + 8),DAT_01fa23a8 * iVar6,DAT_01fa23ac * iVar7);
  if (*(char *)(param_1 + 0x10) != '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    uVar4 = FUN_005fd4d0(plVar1[0xf]);
    (**(code **)(*plVar1 + 0x40))
              (plVar1,DAT_01fa23a8 * (*(int *)(param_1 + 0x14) + iVar2),
               DAT_01fa23ac * (*(int *)(param_1 + 0x18) + iVar3),uVar4);
  }
  return;
}

