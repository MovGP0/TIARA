/* Ghidra address: 00b0a020 */
/* Ghidra symbol: FUN_00b0a020 */


void FUN_00b0a020(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  short local_2c [2];
  short local_28;
  undefined4 local_1c;
  
  local_40[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  *(undefined1 *)(param_1 + 0xcd) = 1;
  local_50 = 0;
  local_48 = 0x11;
  FUN_00442f70(local_40,local_res20,&local_50,0);
  FUN_0072d440(local_res20,1,4,0);
  FUN_00849e90(param_1,local_2c,param_2,param_3);
  local_1c = CONCAT22(local_28 + 7,local_2c[0] + 10);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0413e052(uVar1,0x202,0,(longlong)local_1c);
  (**(code **)(*param_1 + 0x180))(param_1);
  *(undefined1 *)(param_1 + 0xcd) = 0;
  FUN_00414480(local_40);
  FUN_00414480(&local_res20);
  return;
}

