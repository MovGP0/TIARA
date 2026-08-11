/* Ghidra address: 0195ebf0 */
/* Ghidra symbol: FUN_0195ebf0 */


void FUN_0195ebf0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = FUN_01980030(param_2);
  local_2c = local_2c + -1;
  (**(code **)(*param_1 + 0x348))(param_1,&local_28);
  FUN_00414b50(local_20,*(undefined8 *)(param_3 + 0x158));
  FUN_00414ad0(param_3 + 0x158,param_1[2]);
  (**(code **)(*param_1 + 0x280))(param_1);
  FUN_01973030(param_3,param_1,param_1[0x2b],0);
  (**(code **)(*param_1 + 0x348))(param_1,&local_48);
  FUN_01980240(param_2,local_2c,local_48);
  FUN_00414ad0(param_3 + 0x158,local_20[0]);
  (**(code **)(*param_1 + 0x358))(param_1,local_28);
  FUN_00414520(&local_48);
  FUN_00414520(&local_28);
  FUN_00414480(local_20);
  return;
}

