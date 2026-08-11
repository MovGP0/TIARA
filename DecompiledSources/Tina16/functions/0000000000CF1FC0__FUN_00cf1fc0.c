/* Ghidra address: 00cf1fc0 */
/* Ghidra symbol: FUN_00cf1fc0 */


undefined8 FUN_00cf1fc0(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  int local_24;
  undefined8 local_18;
  
  local_40 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_18 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_30 = *(longlong *)(param_1 + 0x48);
    local_34 = 0;
    if (local_30 != 0) {
      local_34 = *(int *)(local_30 + -4);
    }
    puVar1 = auStack_98;
    if (0 < local_34) {
      local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      local_24 = FUN_00874bb0(*(undefined8 *)(param_1 + 0x30),&PTR_u_7bit_01eb1c30,4,0);
      if (local_24 < 1) {
        FUN_008745f0(&local_48);
        FUN_00878900(local_18,*(undefined8 *)(param_1 + 0x48),local_48);
        local_78 = 0;
        FUN_00878970(local_18,&LAB_00cf23d0,0xffffffff,1);
      }
      else if ((local_24 == 1) || (local_24 == 2)) {
        FUN_008b05c0(&local_50,*(undefined8 *)(param_1 + 0x20));
        FUN_00878900(local_18,*(undefined8 *)(param_1 + 0x48),local_50);
        local_78 = 0;
        FUN_00878970(local_18,&LAB_00cf23d0,0xffffffff,1);
      }
      else if (local_24 == 3) {
        FUN_008b05c0(&local_58,*(undefined8 *)(param_1 + 0x20));
        FUN_00cdb400(&PTR_FUN_00ceea48,*(undefined8 *)(param_1 + 0x48),local_18,local_58);
      }
      else {
        FUN_008b05c0(&local_60,*(undefined8 *)(param_1 + 0x20));
        FUN_00cdb400(&PTR_FUN_00cdc838,*(undefined8 *)(param_1 + 0x48),local_18,local_60);
        local_78 = 0;
        FUN_00878970(local_18,&LAB_00cf23d0,0xffffffff,1);
      }
      FUN_004b6dc0(local_18,0);
      *param_2 = 1;
      puVar1 = local_40;
    }
  }
  else {
    local_40 = auStack_98;
    FUN_004b6dc0(*(longlong *)(param_1 + 0x40),0);
    local_24 = FUN_00874bb0(*(undefined8 *)(param_1 + 0x30),&PTR_u_7bit_01eb1c30,4,0);
    if (local_24 < 3) {
      local_18 = *(undefined8 *)(param_1 + 0x40);
      puVar1 = local_40;
    }
    else {
      local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      if (local_24 == 3) {
        FUN_00cdb810(&PTR_FUN_00ceea48,*(undefined8 *)(param_1 + 0x40),local_18,0xffffffff);
      }
      else {
        FUN_00cdb810(&PTR_FUN_00cdc838,*(undefined8 *)(param_1 + 0x40),local_18,0xffffffff);
        local_78 = 0;
        FUN_00878970(local_18,&LAB_00cf23d0,0xffffffff,1);
      }
      FUN_004b6dc0(local_18,0);
      *param_2 = 1;
      puVar1 = local_40;
    }
  }
  local_40 = puVar1;
  FUN_00417840(&local_60,&DAT_0086ea00,4);
  return local_18;
}

