/* Ghidra address: 014b5b50 */
/* Ghidra symbol: FUN_014b5b50 */


void FUN_014b5b50(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_40 = auStack_e8;
  local_48 = 0;
  uVar1 = FUN_0065b870(param_1);
  uVar1 = FUN_007f94c0(uVar1);
  *(undefined8 *)(param_1 + 0x880) = uVar1;
  if (*(char *)(*(longlong *)(param_1 + 0x7a0) + 0x80) == '\0') {
    local_30 = 0;
  }
  else {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x838) + 0x4a0);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = *(undefined8 *)(param_1 + 0x878);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = local_30;
  local_68 = 0;
  local_60 = &local_31;
  local_58 = &local_31;
  local_50 = &local_31;
  FUN_00ee4600(1,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x4e8),
               *(undefined8 *)(param_1 + 0x8b0),0);
  FUN_007f95c0(*(undefined8 *)(param_1 + 0x880));
  FUN_00414480(&local_48);
  return;
}

