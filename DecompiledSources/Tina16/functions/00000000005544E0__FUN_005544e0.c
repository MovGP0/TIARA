/* Ghidra address: 005544e0 */
/* Ghidra symbol: FUN_005544e0 */


undefined8
FUN_005544e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  longlong local_a0;
  longlong local_98;
  undefined1 local_88 [32];
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_b0 = auStack_118;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_00417580(local_88,&DAT_00527bf8);
  cVar1 = FUN_0056b040(param_3,&local_48,1);
  if (cVar1 == '\0') {
    uVar3 = FUN_005466a0(param_1);
    FUN_005376c0(param_3,local_88,uVar3,1);
    FUN_005382b0(local_88,&local_48);
  }
  FUN_00554100(param_1,&local_60);
  local_98 = local_60;
  if (local_60 != 0) {
    local_98 = *(longlong *)(local_60 + -8);
  }
  local_4c = param_5 + 1;
  if (local_4c != local_98) {
    uVar3 = FUN_0044d710(&PTR_FUN_005277c0,1,PTR_PTR_02001778);
    local_4c = FUN_004134c0(uVar3);
  }
  FUN_00419260(&local_58,&DAT_00492e48,1,(longlong)(local_4c + 1));
  local_68 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_005540d0(param_1);
  FUN_005366b0(&local_38,local_40);
  FUN_00417c40(local_58 + (longlong)local_68 * 0x20,&local_38,&DAT_00527bf8);
  local_68 = local_68 + 1;
  FUN_00417740(&local_38,&DAT_00527bf8);
  local_64 = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    local_a0 = param_4;
    do {
      uVar2 = FUN_005540d0(param_1);
      FUN_00535440(*(undefined8 *)(local_60 + (longlong)local_64 * 8),local_a0,
                   local_58 + (longlong)local_68 * 0x20,uVar2);
      local_68 = local_68 + 1;
      local_64 = local_64 + 1;
      local_a0 = local_a0 + 0x20;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  FUN_005540d0(param_1);
  FUN_005366b0(&local_d0,local_40);
  lVar4 = FUN_005540b0(param_1);
  if (lVar4 == 0) {
    uVar2 = FUN_005540d0(param_1);
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_00557210(param_2,local_48,local_58,uVar2);
  }
  else {
    uVar2 = FUN_005540d0(param_1);
    uVar3 = FUN_005540b0(param_1);
    local_f8 = FUN_005466a0(uVar3);
    local_f0 = 0;
    local_e8 = 0;
    FUN_00557210(param_2,local_48,local_58,uVar2);
  }
  FUN_00417740(&local_d0,&DAT_00527bf8);
  FUN_00417740(local_88,&DAT_00527bf8);
  FUN_00419430(&local_60,&DAT_00531510);
  FUN_00419430(&local_58,&DAT_00492e48);
  return param_2;
}

