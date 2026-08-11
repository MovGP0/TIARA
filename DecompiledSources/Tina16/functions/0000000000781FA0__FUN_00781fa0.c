/* Ghidra address: 00781fa0 */
/* Ghidra symbol: FUN_00781fa0 */


undefined8 FUN_00781fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  int local_bc;
  short *local_b8;
  int local_ac;
  short *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [16];
  short *local_80;
  longlong local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [40];
  
  local_d0 = auStack_118;
  local_d8 = 0;
  FUN_00417580(local_70,&DAT_0075cb10);
  FUN_00417580(local_90,&DAT_0075cb10);
  FUN_00417580(local_38,&DAT_0075cb10);
  local_40 = (longlong *)FUN_00799090(&PTR_FUN_00772890,1,DAT_02012580);
  do {
    local_98 = local_40;
    *(int *)(local_40 + 2) = (int)local_40[2] + 1;
    if (*(int *)(local_40[1] + 0x10) <= (int)local_40[2]) {
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + -0x20))(local_40,1);
      }
      local_e0 = 0x11;
      local_f8 = (undefined1 *)((ulonglong)local_f8._4_4_ << 0x20);
      local_e8 = param_3;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_020015f0,&local_e8);
      FUN_004134c0(uVar2);
      goto LAB_00782249;
    }
    FUN_00417740(local_38,&DAT_0075cb10);
    local_a0 = local_40[1];
    FUN_00417c40(local_38,*(longlong *)(local_a0 + 8) + (longlong)(int)local_40[2] * 0x20,
                 &DAT_0075cb10);
    FUN_00417c40(local_70,local_38,&DAT_0075cb10);
    FUN_00417740(local_38,&DAT_0075cb10);
    FUN_00780e40(param_1,local_90,local_60,2);
  } while (local_78 == 0);
  local_a8 = local_80;
  local_ac = 0;
  if (local_80 != (short *)0x0) {
    local_ac = *(int *)(local_80 + -2);
  }
  if ((local_ac < 2) || (*local_80 != 0x23)) {
    local_50 = FUN_00416740(local_80);
  }
  else {
    local_b8 = local_80;
    local_bc = 0;
    if (local_80 != (short *)0x0) {
      local_bc = *(int *)(local_80 + -2);
    }
    FUN_00416dc0(&local_d8,local_80,2,local_bc + -1);
    iVar1 = FUN_0043fc00(local_d8);
    local_50 = (longlong)iVar1;
  }
  local_f8 = local_90;
  local_48 = FUN_00780b50(param_1,param_2,param_3,local_50);
  FUN_007822c0(0,local_d0);
LAB_00782249:
  FUN_00414480(&local_d8);
  FUN_00417840(local_90,&DAT_0075cb10,2);
  FUN_00417740(local_38,&DAT_0075cb10);
  return local_48;
}

