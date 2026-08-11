/* Ghidra address: 00fc2620 */
/* Ghidra symbol: FUN_00fc2620 */


void FUN_00fc2620(longlong param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  int local_3c;
  int local_38;
  int local_34;
  double local_30;
  double local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_b8;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
            (*(longlong **)(param_1 + 0x710),*(undefined4 *)(param_1 + 0xb18));
  FUN_00f61040(&local_68,*(undefined4 *)(param_1 + 0xb1c));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_68);
  if (*(int *)(param_1 + 0xb20) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),1);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),0);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),1);
  }
  if (*(int *)(param_1 + 0xb24) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),1);
  }
  local_28 = *(double *)(param_1 + 0xbf0) / 6.0;
  if (*(int *)(param_1 + 0xb18) == 0) {
    local_3c = 0x20;
  }
  else {
    local_3c = 1;
  }
  if (*(int *)(param_1 + 0xb18) == 1) {
    local_38 = 0x10000;
  }
  else {
    local_38 = 0x100;
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_70);
  local_34 = FUN_00f60f70(local_70);
  local_34 = local_38 - local_34;
  local_30 = (1.0 / local_28) * (double)local_34 * (double)local_3c;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x748),local_30);
  local_98 = 1;
  FUN_00b8fd60(&local_80,local_30,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_78,L"Time: ",local_80);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_78);
  FUN_00414480(local_20);
  local_50 = *(undefined8 *)(param_1 + 0xbf0);
  FUN_00448450(local_20,local_50,PTR_DAT_02004830);
  FUN_00416ba0(&local_88,local_20[0],&LAB_00fc2a38);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_88);
  FUN_00414480(local_20);
  FUN_00414560(&local_88,3);
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414480(local_20);
  return;
}

