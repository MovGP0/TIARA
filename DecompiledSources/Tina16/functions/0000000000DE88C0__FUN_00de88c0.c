/* Ghidra address: 00de88c0 */
/* Ghidra symbol: FUN_00de88c0 */


undefined8 FUN_00de88c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,local_20,param_2);
  FUN_004168e0(&local_10,local_20[0]);
  FUN_00414b90(param_1,local_10);
  FUN_00414480(local_20);
  FUN_00414520(&local_10);
  FUN_00414480(local_res18);
  return param_1;
}

