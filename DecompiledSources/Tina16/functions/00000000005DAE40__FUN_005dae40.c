/* Ghidra address: 005dae40 */
/* Ghidra symbol: FUN_005dae40 */


void FUN_005dae40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 *local_40;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  undefined8 *local_20;
  
  local_40 = auStack_78;
  local_28 = 0;
  local_30 = 0;
  lVar4 = (**(code **)*param_4)(param_4);
  lVar5 = FUN_004b6da0(param_4);
  FUN_004169f0(&local_28,(lVar4 - lVar5) * 2);
  local_34 = 0;
  if (local_28 != 0) {
    local_34 = *(int *)(local_28 + -4);
  }
  if (0 < local_34) {
    cVar1 = FUN_004113d0(param_4,&PTR_FUN_0047d028);
    local_20 = param_4;
    if (cVar1 == '\0') {
      local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047d028,1);
    }
    if (local_20 != param_4) {
      lVar4 = (**(code **)*param_4)(param_4);
      lVar5 = FUN_004b6da0(param_4);
      FUN_004b8ba0(local_20,param_4,lVar4 - lVar5);
      FUN_004b6dc0(local_20,0);
    }
    lVar4 = (**(code **)*local_20)(local_20);
    FUN_00419260(&local_30,&DAT_00406578,1,lVar4 * 2);
    uVar2 = FUN_004b6da0(local_20);
    iVar3 = (**(code **)*local_20)(local_20);
    local_58 = FUN_004b6da0(local_20);
    local_58 = iVar3 - local_58;
    FUN_004c8560(local_20[5],uVar2,&local_30,0);
    FUN_0045bd00(&local_28,local_30);
    if (param_4 != local_20) {
      FUN_00410f20(local_20);
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,local_28);
  FUN_00419430(&local_30,&DAT_00406578);
  FUN_00414480(&local_28);
  return;
}

