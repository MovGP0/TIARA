/* Ghidra address: 00b2b3f0 */
/* Ghidra symbol: FUN_00b2b3f0 */


undefined8 FUN_00b2b3f0(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = FUN_00b28dc0(param_1,param_3);
  local_30 = FUN_00b28440(local_28,param_4);
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  if (*(longlong *)(local_30 + 0x28) == 0) {
    FUN_00b25840(local_20,0);
    FUN_00b25840(local_20,0);
    FUN_00b25840(local_20,0);
    FUN_00414be0(&local_40,*(undefined8 *)(local_30 + 8));
    FUN_00416430(&local_78,local_40,1,1);
    iVar2 = FUN_00416420(local_78,&DAT_00b2b7d8);
    if (iVar2 == 0) {
      local_50 = 0;
      if (local_40 != 0) {
        local_50 = *(uint *)(local_40 + -4) >> 1;
      }
      FUN_00416430(&local_40,local_40,2,local_50 - 1);
    }
    lVar1 = local_40;
    local_54 = 0;
    if (local_40 != 0) {
      local_54 = *(uint *)(local_40 + -4) >> 1;
    }
    FUN_00416430(&local_80,local_40,local_54,1);
    iVar2 = FUN_00416420(local_80,&DAT_00b2b7d8);
    if (iVar2 == 0) {
      local_58 = 0;
      if (lVar1 != 0) {
        local_58 = *(uint *)(lVar1 + -4) >> 1;
      }
      FUN_00416430(&local_40,local_40,1,local_58 - 1);
    }
    local_5c = 0;
    if (local_40 != 0) {
      local_5c = *(uint *)(local_40 + -4) >> 1;
    }
    FUN_00b25810(local_20,(undefined1)local_5c);
    FUN_00b25810(local_20,1);
    FUN_00b15100(&local_38,local_40);
    local_68 = FUN_00414df0(&local_38);
    local_60 = 0;
    if (local_38 != 0) {
      local_60 = *(undefined4 *)(local_38 + -4);
    }
    FUN_00b258a0(local_20,local_68,local_60);
    FUN_00b25840(local_20,0);
    FUN_00b25810(local_20,0);
    FUN_00b25810(local_20,2);
    FUN_00b25810(local_20,0);
    FUN_00b25810(local_20,0x1c);
    FUN_00b25810(local_20,0x17);
  }
  else {
    local_48 = *(longlong *)(local_30 + 0x28);
    local_4c = 0;
    if (local_48 != 0) {
      local_4c = *(undefined4 *)(local_48 + -4);
    }
    uVar4 = FUN_00415ab0(*(undefined8 *)(local_30 + 0x28));
    FUN_00b258a0(local_20,uVar4,local_4c);
  }
  uVar3 = (**(code **)*local_20)(local_20);
  FUN_00415d10(param_2,uVar3,0);
  FUN_004b6dc0(local_20,0);
  uVar4 = FUN_00414df0(param_2);
  uVar3 = (**(code **)*local_20)(local_20);
  FUN_00b25770(local_20,uVar4,uVar3);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  FUN_004145c0(&local_80,2);
  FUN_00414520(&local_40);
  FUN_004144d0(&local_38);
  return param_2;
}

