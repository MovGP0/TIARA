/* Ghidra address: 01a5ec60 */
/* Ghidra symbol: FUN_01a5ec60 */


void FUN_01a5ec60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  
  uVar1 = *param_3;
  local_40._0_4_ = (int)uVar1;
  local_50 = (int)local_40;
  local_40._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_4c = local_40._4_4_;
  local_40 = uVar1;
  local_48 = FUN_01a5ee60(param_1,param_4);
  local_48 = (int)local_40 + local_48;
  local_44 = FUN_01a5eed0(param_1,param_4);
  local_44 = local_4c + local_44;
  FUN_01a8dcd0(param_2,&local_50,*(longlong *)(param_1 + 0x88) + 0x98);
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (((plVar2 != (longlong *)0x0) &&
      (*(double *)(param_1 + 0xb0) <= 1e+30 && *(double *)(param_1 + 0xb0) != 1e+30)) &&
     (*(double *)(param_1 + 0xb8) <= 1e+30 && *(double *)(param_1 + 0xb8) != 1e+30)) {
    (**(code **)(*plVar2 + 0xf0))
              (plVar2,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),&local_54,
               &local_58);
    uVar7 = (int)local_40 - local_54;
    uVar8 = (int)uVar7 >> 0x1f;
    iVar3 = FUN_01a5ee60(param_1,param_4);
    uVar5 = ((int)local_40 + iVar3) - local_54;
    uVar6 = (int)uVar5 >> 0x1f;
    iVar3 = (int)local_40;
    if ((int)((uVar5 ^ uVar6) - uVar6) <= (int)((uVar7 ^ uVar8) - uVar8)) {
      iVar3 = FUN_01a5ee60(param_1,param_4);
      iVar3 = (int)local_40 + iVar3;
    }
    uVar7 = local_40._4_4_ - local_58;
    uVar8 = (int)uVar7 >> 0x1f;
    iVar4 = FUN_01a5eed0(param_1,param_4);
    uVar5 = (local_40._4_4_ + iVar4) - local_58;
    uVar6 = (int)uVar5 >> 0x1f;
    iVar4 = local_40._4_4_;
    if ((int)((uVar5 ^ uVar6) - uVar6) <= (int)((uVar7 ^ uVar8) - uVar8)) {
      iVar4 = FUN_01a5eed0(param_1,param_4);
      iVar4 = local_40._4_4_ + iVar4;
    }
    local_50 = FUN_00b905f0(iVar3,local_54);
    local_4c = FUN_00b905f0(iVar4,local_58);
    local_48 = FUN_00b905e0(iVar3,local_54);
    local_44 = FUN_00b905e0(iVar4,local_58);
    FUN_01a8dcd0(param_2,&local_50,*(longlong *)(param_1 + 0x88) + 0x98);
  }
  return;
}

