/* Ghidra address: 0163e770 */
/* Ghidra symbol: FUN_0163e770 */


void FUN_0163e770(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_28;
  longlong local_20;
  
  local_60 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20 = 0;
  local_58 = *(longlong **)(param_1 + 0x88);
  uVar1 = FUN_00442620(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x10b8));
  FUN_015fcc20(uVar1,param_1 + 0x10a8,*(undefined8 *)(param_3 + 0x13a30),0);
  local_20 = FUN_015f3320(*(undefined8 *)(param_1 + 0x10b8),local_58);
  local_2c = FUN_00e0e000(local_20,0);
  FUN_015fcd70(&local_38,*(undefined8 *)(param_1 + 0x10b8));
  FUN_015fc500(&local_68,local_2c);
  FUN_00416ba0(&local_40,L"temp.",local_68);
  local_88 = local_40;
  FUN_00416cd0(&local_48,3,local_38,&DAT_0163eaa4);
  FUN_00414ad0(param_3 + 0x13970,local_48);
  *(bool *)(param_1 + 0x1108) = local_2c == 7;
  (**(code **)(*param_2 + 0x100))(param_2,local_48);
  FUN_00442620(param_1 + 0xa0,local_48);
  if (local_58 == (longlong *)0x0) {
    FUN_00414480(&local_48);
  }
  else {
    (**(code **)(*local_58 + 0x288))(local_58,&local_48);
  }
  FUN_00414ad0(param_3 + 0x13978,local_48);
  local_88 = CONCAT71(local_88._1_7_,1);
  local_28 = _compile_file(*(undefined8 *)(param_1 + 0x10a8),param_1 + 0xa0,param_1 + 0xa0,local_2c)
  ;
  if (local_28 != 0) {
    local_88 = local_48;
    FUN_00416cd0(&local_70,3,local_40,&LAB_0163eab4);
    FUN_015fcf20(0,*(undefined8 *)(param_1 + 0x10a8),1,local_70);
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_50,4);
  return;
}

