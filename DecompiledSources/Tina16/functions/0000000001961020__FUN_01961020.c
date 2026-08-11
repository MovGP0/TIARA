/* Ghidra address: 01961020 */
/* Ghidra symbol: FUN_01961020 */


double FUN_01961020(longlong *param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_29;
  double local_28;
  undefined8 local_20;
  
  local_40 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_20 = FUN_01953870(param_1);
  FUN_018dc3b0(local_20);
  (**(code **)(*param_1 + 0x358))(param_1,param_1[0x72]);
  local_68 = 0;
  local_60 = 0;
  (**(code **)(*param_1 + 0x2b0))(param_1,0,0x3ff0000000000000,0x3ff0000000000000);
  local_68 = 0;
  local_60 = 0;
  FUN_0195ff00(param_1,0,0x3ff0000000000000,0x3ff0000000000000);
  FUN_018dbbb0(local_20,&local_48,&local_29);
  (**(code **)(*param_1 + 0x360))(param_1,local_48);
  FUN_018dc2b0(local_20,&local_50);
  (**(code **)(*param_1 + 0x358))(param_1,local_50);
  FUN_0195f6f0(param_1,5,local_29);
  local_28 = (double)FUN_018db4e0(local_20);
  if (local_28 == 0.0) {
    local_28 = (double)param_1[0x16];
  }
  else {
    local_28 = local_28 + (double)param_1[0x5d] * 2.0;
  }
  FUN_018dc480(local_20);
  FUN_004145c0(&local_50,2);
  return local_28;
}

