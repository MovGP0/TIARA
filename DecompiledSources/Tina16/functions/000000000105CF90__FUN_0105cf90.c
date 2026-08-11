/* Ghidra address: 0105cf90 */
/* Ghidra symbol: FUN_0105cf90 */


undefined8 * FUN_0105cf90(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_c0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_0043e1a0(&local_50,*(undefined8 *)(param_1 + 0xa0));
  FUN_01059f10(&local_40,local_50);
  FUN_0105ce70(param_1,&local_38);
  FUN_01059df0(&local_30,*(undefined4 *)(param_1 + 0x68));
  if (((param_4 == 0) && ((param_3 & 2) == 0)) && (local_38 != 0)) {
    if ((param_3 & 1) == 0) {
      FUN_0105ceb0(param_1,local_20,0,1);
    }
    else {
      local_a0 = local_38;
      local_98 = 0x11;
      local_90 = local_30;
      local_88 = 0x11;
      local_80 = local_40;
      local_78 = 0x11;
      local_70 = 3;
      local_68 = 0;
      FUN_0105ceb0(param_1,&local_a8,0,1);
      local_60 = local_a8;
      local_58 = 0x11;
      FUN_00442f70(local_20,L"%s_%s_%s_%d_%s",&local_a0,4);
    }
    FUN_00416ba0(&local_28,*(undefined8 *)(param_1 + 0x110),&DAT_0105d2b0);
    local_b8 = local_20[0];
    local_b0 = 0x11;
    FUN_00442f70(param_2,local_28,&local_b8,0);
  }
  else {
    FUN_00416ba0(&local_28,*(undefined8 *)(param_1 + 0x108),L"\\Debug\\%s");
    FUN_0105ceb0(param_1,&local_c0,param_4,1);
    local_b8 = local_c0;
    local_b0 = 0x11;
    FUN_00442f70(param_2,local_28,&local_b8,0);
  }
  if ((param_3 & 4) != 0) {
    FUN_00416cd0(param_2,3,&LAB_0105d2e4,*param_2,&LAB_0105d2e4);
  }
  FUN_00414480(&local_c0);
  FUN_00414480(&local_a8);
  FUN_00414560(&local_50,7);
  return param_2;
}

