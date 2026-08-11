/* Ghidra address: 00c45620 */
/* Ghidra symbol: FUN_00c45620 */


void FUN_00c45620(char param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10)

{
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_4;
  uStack_50 = param_4[1];
  local_68 = *param_5;
  uStack_60 = param_5[1];
  FUN_00c44460(local_b8,param_6,0);
  if (param_1 == '\0') {
    *param_7 = local_38;
    param_7[1] = uStack_30;
    *param_9 = local_58;
    param_9[1] = uStack_50;
    *param_8 = local_48;
    param_8[1] = uStack_40;
    *param_10 = local_68;
    param_10[1] = uStack_60;
  }
  else if (param_1 == '\x01') {
    FUN_00c44b60(&local_c8,&local_38,local_b8);
    local_38 = local_c8;
    uStack_30 = uStack_c0;
    FUN_00c44b60(&local_c8,&local_58,local_b8);
    local_58 = local_c8;
    uStack_50 = uStack_c0;
    FUN_00c44b60(&local_c8,&local_48,local_b8);
    local_48 = local_c8;
    uStack_40 = uStack_c0;
    FUN_00c44b60(&local_c8,&local_68,local_b8);
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    FUN_00c44ac0(local_78,&local_38,&DAT_01ea3a08);
    FUN_00c44ac0(local_88,&local_68,&DAT_01ea3a08);
    FUN_00c44a50(local_98,&local_58,&local_48);
    FUN_00c44a50(&local_c8,local_78,local_88);
    FUN_00c44b10(local_a8,&local_c8,local_98);
    FUN_00c44b10(local_d8,&local_38,&DAT_01ea3a08);
    FUN_00c44a50(&local_c8,local_d8,local_88);
    FUN_00c44b10(local_d8,&local_c8,local_98);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_7 = local_c8;
    param_7[1] = uStack_c0;
    FUN_00c44a50(local_d8,&DAT_01ea3a58,&local_58);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_9 = local_c8;
    param_9[1] = uStack_c0;
    FUN_00c44a50(local_d8,&DAT_01ea3a58,&local_48);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_8 = local_c8;
    param_8[1] = uStack_c0;
    FUN_00c44b10(local_d8,&local_68,&DAT_01ea3a08);
    FUN_00c44a50(&local_c8,local_d8,local_78);
    FUN_00c44b10(local_d8,&local_c8,local_98);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_10 = local_c8;
    param_10[1] = uStack_c0;
  }
  else if (param_1 == '\x02') {
    FUN_00c44a50(&local_c8,&local_38,local_b8);
    local_38 = local_c8;
    uStack_30 = uStack_c0;
    FUN_00c44a50(&local_c8,&local_58,local_b8);
    local_58 = local_c8;
    uStack_50 = uStack_c0;
    FUN_00c44a50(&local_c8,&local_48,local_b8);
    local_48 = local_c8;
    uStack_40 = uStack_c0;
    FUN_00c44a50(&local_c8,&local_68,local_b8);
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    FUN_00c44ac0(local_78,&DAT_01ea3a08,&local_38);
    FUN_00c44ac0(local_88,&DAT_01ea3a08,&local_68);
    FUN_00c44a50(local_98,&local_58,&local_48);
    FUN_00c44a50(&local_c8,local_78,local_88);
    FUN_00c44b10(local_a8,&local_c8,local_98);
    FUN_00c44b10(local_d8,&DAT_01ea3a08,&local_38);
    FUN_00c44a50(&local_c8,local_d8,local_88);
    FUN_00c44ac0(local_d8,&local_c8,local_98);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_7 = local_c8;
    param_7[1] = uStack_c0;
    FUN_00c44a50(local_d8,&DAT_01ea3a68,&local_58);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_9 = local_c8;
    param_9[1] = uStack_c0;
    FUN_00c44a50(local_d8,&DAT_01ea3a68,&local_48);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_8 = local_c8;
    param_8[1] = uStack_c0;
    FUN_00c44b10(local_d8,&DAT_01ea3a08,&local_68);
    FUN_00c44a50(&local_c8,local_d8,local_78);
    FUN_00c44ac0(local_d8,&local_c8,local_98);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_10 = local_c8;
    param_10[1] = uStack_c0;
  }
  else if (param_1 == '\x03') {
    FUN_00c44b60(&local_c8,&local_38,local_b8);
    local_38 = local_c8;
    uStack_30 = uStack_c0;
    FUN_00c44a50(&local_c8,&local_68,local_b8);
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    FUN_00c44ac0(local_78,&DAT_01ea3a08,&local_38);
    FUN_00c44ac0(local_88,&DAT_01ea3a08,&local_68);
    FUN_00c44a50(local_98,&local_58,&local_48);
    FUN_00c44a50(&local_c8,local_78,local_88);
    FUN_00c44b10(local_a8,&local_c8,local_98);
    FUN_00c44b10(local_d8,&local_38,&DAT_01ea3a08);
    FUN_00c44a50(&local_c8,local_d8,local_88);
    FUN_00c44b10(local_d8,&local_c8,local_98);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_7 = local_c8;
    param_7[1] = uStack_c0;
    FUN_00c44a50(local_d8,&DAT_01ea3a58,&local_58);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_9 = local_c8;
    param_9[1] = uStack_c0;
    FUN_00c44a50(local_d8,&DAT_01ea3a68,&local_48);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_8 = local_c8;
    param_8[1] = uStack_c0;
    FUN_00c44b10(local_d8,&DAT_01ea3a08,&local_68);
    FUN_00c44a50(&local_c8,local_d8,local_78);
    FUN_00c44ac0(local_d8,&local_c8,local_98);
    FUN_00c44b60(&local_c8,local_d8,local_a8);
    *param_10 = local_c8;
    param_10[1] = uStack_c0;
  }
  return;
}

