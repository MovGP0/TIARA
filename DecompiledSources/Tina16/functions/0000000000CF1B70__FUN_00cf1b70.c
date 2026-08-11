/* Ghidra address: 00cf1b70 */
/* Ghidra symbol: FUN_00cf1b70 */


longlong FUN_00cf1b70(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  int local_44;
  longlong local_40;
  int local_34;
  longlong local_30;
  int local_24;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_50 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_68 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_00cf1730(param_1,&local_58);
  local_30 = local_58;
  local_34 = 0;
  if (local_58 != 0) {
    local_34 = *(int *)(local_58 + -4);
  }
  local_20 = (longlong)local_34;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_40 = *(longlong *)(param_1 + 0x48);
    local_44 = 0;
    if (local_40 != 0) {
      local_44 = *(int *)(local_40 + -4);
    }
    if (local_44 < 1) {
      local_20 = local_20 + 2;
    }
    else {
      local_24 = FUN_00874bb0(*(undefined8 *)(param_1 + 0x30),&PTR_u_7bit_01eb1c30,4,0);
      if (local_24 < 1) {
        FUN_008745f0(&local_60);
        local_24 = (**(code **)(*local_60 + 0x30))(local_60,*(undefined8 *)(param_1 + 0x48));
        local_20 = local_20 + 2 + (longlong)local_24;
      }
      else if ((local_24 == 1) || (local_24 == 2)) {
        FUN_008b05c0(&local_68,*(undefined8 *)(param_1 + 0x20));
        local_24 = (**(code **)(*local_68 + 0x30))(local_68,*(undefined8 *)(param_1 + 0x48));
        local_20 = local_20 + 2 + (longlong)local_24;
      }
      else {
        local_18 = (undefined8 *)FUN_00410e60(&PTR_FUN_0086f5e8,1);
        if (local_24 == 3) {
          FUN_008b05c0(&local_70,*(undefined8 *)(param_1 + 0x20));
          FUN_00cdb400(&PTR_FUN_00ceea48,*(undefined8 *)(param_1 + 0x48),local_18,local_70);
          lVar1 = (**(code **)*local_18)(local_18);
          local_20 = local_20 + lVar1;
        }
        else {
          FUN_008b05c0(&local_78,*(undefined8 *)(param_1 + 0x20));
          FUN_00cdb400(&PTR_FUN_00cdc838,*(undefined8 *)(param_1 + 0x48),local_18,local_78);
          lVar1 = (**(code **)*local_18)(local_18);
          local_20 = local_20 + 2 + lVar1;
        }
        FUN_00410f20(local_18);
      }
    }
  }
  else {
    local_24 = FUN_00874bb0(*(undefined8 *)(param_1 + 0x30),&PTR_u_7bit_01eb1c30,4,0);
    if (local_24 < 3) {
      lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x40))(*(undefined8 **)(param_1 + 0x40));
      local_20 = local_20 + 2 + lVar1;
    }
    else {
      local_18 = (undefined8 *)FUN_00410e60(&PTR_FUN_0086f5e8,1);
      local_10 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x40));
      if (local_24 == 3) {
        FUN_00cdb810(&PTR_FUN_00ceea48,*(undefined8 *)(param_1 + 0x40),local_18,0xffffffff);
        lVar1 = (**(code **)*local_18)(local_18);
        local_20 = local_20 + lVar1;
      }
      else {
        FUN_00cdb810(&PTR_FUN_00cdc838,*(undefined8 *)(param_1 + 0x40),local_18,0xffffffff);
        lVar1 = (**(code **)*local_18)(local_18);
        local_20 = local_20 + 2 + lVar1;
      }
      FUN_004b6dc0(*(undefined8 *)(param_1 + 0x40),local_10);
      FUN_00410f20(local_18);
    }
  }
  FUN_00417840(&local_78,&DAT_0086ea00,4);
  FUN_00414480(&local_58);
  return local_20;
}

