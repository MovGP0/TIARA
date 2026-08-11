/* Ghidra address: 00de8980 */
/* Ghidra symbol: FUN_00de8980 */


undefined8 FUN_00de8980(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_10,param_2);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_1;
}

