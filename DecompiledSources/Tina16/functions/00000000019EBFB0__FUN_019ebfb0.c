/* Ghidra address: 019ebfb0 */
/* Ghidra symbol: FUN_019ebfb0 */


undefined8 FUN_019ebfb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_74;
  undefined4 local_70;
  int local_6c;
  longlong local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [48];
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_d8;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_68 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_58,&DAT_00ea5ae8);
  FUN_00417580(local_60,&DAT_00ea5be0);
  local_b8 = 1;
  FUN_00450070(&local_88,local_res10[0],&DAT_019ec37c,&DAT_019ec38c);
  FUN_00414b50(local_res10,local_88);
  FUN_00ea8930(&local_90,local_res10[0],L"\\.subckt.+?\\.ends",0x22);
  FUN_00417c40(local_60,&local_90,&DAT_00ea5be0);
  local_6c = 0;
  local_28 = (longlong *)FUN_00ea7840(local_60);
  while( true ) {
    cVar1 = FUN_00ea79e0(local_28);
    if (cVar1 == '\0') break;
    FUN_00ea79b0(local_28,local_58);
    FUN_00ea7500(local_58,&local_98);
    FUN_019eb430(&local_68,local_98);
    FUN_00ea7500(local_58,&local_a0);
    local_6c = FUN_004564b0(local_res10,local_a0,local_6c);
    FUN_00414480(local_20);
    local_70 = FUN_00ea74e0(local_58);
    FUN_00414b50(local_20,local_res10[0]);
    FUN_00416e20(local_20,local_6c + 1,local_70);
    FUN_00414b50(local_res10,local_20[0]);
    FUN_00414480(local_20);
    FUN_00456760(local_res10,&local_a8,local_6c,local_68);
    FUN_00414b50(local_res10,local_a8);
    local_74 = 0;
    if (local_68 != 0) {
      local_74 = *(int *)(local_68 + -4);
    }
    local_6c = local_6c + local_74 + -1;
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + -0x20))(local_28,1);
  }
  FUN_019eb1f0(param_1,local_res10[0]);
  FUN_00414560(&local_a8,3);
  FUN_00417740(&local_90,&DAT_00ea5be0);
  FUN_00414480(&local_88);
  FUN_00414480(&local_68);
  FUN_00417740(local_60,&DAT_00ea5be0);
  FUN_00417740(local_58,&DAT_00ea5ae8);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return param_1;
}

