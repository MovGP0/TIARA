/* Ghidra address: 01c18370 */
/* Ghidra symbol: FUN_01c18370 */


void FUN_01c18370(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_88 [24];
  int local_70 [2];
  int local_68;
  int local_64;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  undefined8 local_40;
  int local_38 [3];
  undefined4 local_2c;
  
  FUN_00423b10(param_2,1,1);
  lVar1 = param_1[0x62];
  plVar2 = (longlong *)FUN_00781840();
  uVar3 = FUN_005ffa40(lVar1);
  (**(code **)(*plVar2 + 0x158))(plVar2,local_88,0x12);
  FUN_00778dc0(plVar2,uVar3,local_88,param_2,0,0);
  uVar3 = FUN_005ffa40(lVar1);
  (**(code **)(*plVar2 + 0x158))(plVar2,local_88,0x14);
  FUN_00779130(plVar2,uVar3,local_88,1,&local_50,0);
  uVar3 = FUN_005ffa40(lVar1);
  (**(code **)(*plVar2 + 0x158))(plVar2,local_88,0x1b);
  FUN_00779130(plVar2,uVar3,local_88,0,local_60,0);
  uVar3 = FUN_005ffa40(lVar1);
  (**(code **)(*plVar2 + 0x158))(plVar2,local_88,0x14);
  FUN_00779290(plVar2,uVar3,local_88,1,&local_68,0);
  uVar3 = FUN_005ffa40(lVar1);
  (**(code **)(*plVar2 + 0x158))(plVar2,local_88,0x1b);
  FUN_00779290(plVar2,uVar3,local_88,1,local_70,0);
  uVar3 = (**(code **)(*param_1 + 0x210))(param_1);
  local_40._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
  if (local_64 < local_40._4_4_) {
    local_64 = local_40._4_4_;
  }
  local_40._0_4_ = (int)uVar3;
  if (local_68 < (int)local_40) {
    local_68 = (int)local_40;
  }
  local_38[0] = local_50 + local_4c + local_68;
  local_38[1] = 0;
  local_38[2] = local_38[0] + local_70[0];
  local_2c = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_40 = uVar3;
  uVar3 = FUN_005ffa40(lVar1);
  (**(code **)(*plVar2 + 0x158))(plVar2,local_88,0x1b);
  FUN_00778dc0(plVar2,uVar3,local_88,local_38,0,0);
  return;
}

