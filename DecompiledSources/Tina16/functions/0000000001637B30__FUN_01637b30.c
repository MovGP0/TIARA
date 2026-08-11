/* Ghidra address: 01637b30 */
/* Ghidra symbol: FUN_01637b30 */


undefined8 FUN_01637b30(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined1 auStack_f8 [40];
  undefined1 *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_40;
  int local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_d0 = auStack_f8;
  local_10 = 0;
  local_18 = 0;
  FUN_01612bc0(param_2,1);
  local_50 = FUN_01612bc0(param_2,2);
  local_58 = FUN_01612bc0(param_2,3);
  local_28 = FUN_0161be50(local_50,param_4,local_78,1);
  local_30 = FUN_0161be50(local_58,param_4,local_78,1);
  local_3c = FUN_0162ea80(local_28);
  FUN_00419260(&local_10,&DAT_01637ae8,1,(longlong)local_3c);
  local_80 = local_10;
  if (local_10 != 0) {
    local_80 = *(longlong *)(local_10 + -8);
  }
  FUN_01637450(local_28,local_10,local_80 + -1);
  local_40 = FUN_0162ea80(local_30);
  FUN_00419260(&local_18,&DAT_01637ae8,1,(longlong)local_40);
  local_88 = local_18;
  if (local_18 != 0) {
    local_88 = *(longlong *)(local_18 + -8);
  }
  FUN_01637450(local_30,local_18,local_88 + -1);
  if (param_3 == 0x3f7) {
    local_90 = local_10;
    if (local_10 != 0) {
      local_90 = *(longlong *)(local_10 + -8);
    }
    local_68 = FUN_01637640(local_10,local_90 + -1);
    local_98 = local_18;
    if (local_18 != 0) {
      local_98 = *(longlong *)(local_18 + -8);
    }
    local_70 = FUN_01637640(local_18,local_98 + -1);
  }
  else if (param_3 == 0x3f8) {
    local_a0 = local_10;
    if (local_10 != 0) {
      local_a0 = *(longlong *)(local_10 + -8);
    }
    local_68 = FUN_01637640(local_10,local_a0 + -1);
    local_a8 = local_18;
    if (local_18 != 0) {
      local_a8 = *(longlong *)(local_18 + -8);
    }
    local_70 = FUN_01637940(local_18,local_a8 + -1);
  }
  else if (param_3 == 0x3f9) {
    local_b0 = local_10;
    if (local_10 != 0) {
      local_b0 = *(longlong *)(local_10 + -8);
    }
    local_68 = FUN_01637940(local_10,local_b0 + -1);
    local_b8 = local_18;
    if (local_18 != 0) {
      local_b8 = *(longlong *)(local_18 + -8);
    }
    local_70 = FUN_01637640(local_18,local_b8 + -1);
  }
  else if (param_3 == 0x3fa) {
    local_c0 = local_10;
    if (local_10 != 0) {
      local_c0 = *(longlong *)(local_10 + -8);
    }
    local_68 = FUN_01637940(local_10,local_c0 + -1);
    local_c8 = local_18;
    if (local_18 != 0) {
      local_c8 = *(longlong *)(local_18 + -8);
    }
    local_70 = FUN_01637940(local_18,local_c8 + -1);
  }
  else {
    FUN_01613110(L"ProcessLaplaceExpression");
  }
  local_60 = FUN_01698500(local_68,local_70,0x111);
  FUN_0162ac70(local_60,param_1);
  local_20 = local_60;
  FUN_00419430(&local_10,&DAT_01637ae8);
  FUN_00419430(&local_18,&DAT_01637ae8);
  FUN_00417840(&local_18,&DAT_01637ae8,2);
  return local_20;
}

