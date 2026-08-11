/* Ghidra address: 01626be0 */
/* Ghidra symbol: FUN_01626be0 */


void FUN_01626be0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 local_res18;
  undefined4 local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_01d01990(param_1,local_res20);
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_10,local_res18);
  FUN_01626a10(param_1,param_2,param_5);
  FUN_016266a0(param_1,param_2,local_10,param_5);
  FUN_00410f20(local_10);
  FUN_00414480(&local_res18);
  return;
}

