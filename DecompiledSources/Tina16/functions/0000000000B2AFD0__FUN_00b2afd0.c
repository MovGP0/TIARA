/* Ghidra address: 00b2afd0 */
/* Ghidra symbol: FUN_00b2afd0 */


undefined8 FUN_00b2afd0(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  int local_2c;
  longlong local_28;
  longlong *local_20;
  
  local_80 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  local_28 = 0;
  local_38 = FUN_00b28dc0(param_1,param_3);
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  if (*(char *)(local_38 + 0x20) == '\0') {
    if (*(char *)(local_38 + 0x21) == '\0') {
      if (*(longlong *)(local_38 + 0x28) == 0) {
        uVar1 = FUN_00b286f0(local_38);
        FUN_00b25840(local_20,uVar1);
        FUN_00b27970(&local_28,*(undefined8 *)(local_38 + 8));
        local_4c = 0;
        if (local_28 != 0) {
          local_4c = *(int *)(local_28 + -4);
        }
        FUN_00b25840(local_20,(longlong)local_4c / 2 & 0xffffffff);
        FUN_00b25810(local_20,1);
        local_58 = FUN_00414df0(&local_28);
        local_50 = 0;
        if (local_28 != 0) {
          local_50 = *(undefined4 *)(local_28 + -4);
        }
        FUN_00b258a0(local_20,local_58,local_50);
        iVar2 = FUN_00b286f0();
        local_2c = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_00b28670(local_38,&local_88,local_2c);
            local_60 = local_88;
            local_64 = 0;
            if (local_88 != 0) {
              local_64 = *(uint *)(local_88 + -4) >> 1;
            }
            FUN_00b25840(local_20,(undefined2)local_64);
            FUN_00b25810(local_20,1);
            FUN_00b28670(local_38,&local_90,local_2c);
            FUN_00b15100(&local_28,local_90);
            local_70 = FUN_00414df0(&local_28);
            local_68 = 0;
            if (local_28 != 0) {
              local_68 = *(undefined4 *)(local_28 + -4);
            }
            FUN_00b258a0(local_20,local_70,local_68);
            local_2c = local_2c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        FUN_00414c70(&local_28,*(undefined8 *)(local_38 + 0x28));
        local_48 = FUN_00414df0(&local_28);
        local_40 = 0;
        if (local_28 != 0) {
          local_40 = *(undefined4 *)(local_28 + -4);
        }
        FUN_00b258a0(local_20,local_48,local_40);
      }
    }
    else {
      FUN_00b25840(local_20,1);
      FUN_00b25810(local_20,1);
      FUN_00b25810(local_20,0x3a);
    }
  }
  else {
    uVar1 = FUN_00b286f0(local_38);
    FUN_00b25840(local_20,uVar1);
    FUN_00b25810(local_20,1);
    FUN_00b25810(local_20,4);
  }
  uVar1 = (**(code **)*local_20)(local_20);
  FUN_00415d10(param_2,uVar1,0);
  FUN_004b6dc0(local_20,0);
  uVar3 = FUN_00414df0(param_2);
  uVar1 = (**(code **)*local_20)(local_20);
  FUN_00b25770(local_20,uVar3,uVar1);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  FUN_004145c0(&local_90,2);
  FUN_004144d0(&local_28);
  return param_2;
}

