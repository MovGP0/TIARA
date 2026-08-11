/* Ghidra address: 00d017f0 */
/* Ghidra symbol: FUN_00d017f0 */


undefined8 FUN_00d017f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_18 = FUN_00874b00(&PTR_FUN_0086eb08,1,local_res20);
  FUN_00d01ce0(param_1,param_2,local_res18,local_18);
  uVar1 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  FUN_00414480(&local_res18);
  return param_2;
}

