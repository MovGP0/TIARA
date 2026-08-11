/* Ghidra address: 015f0a10 */
/* Ghidra symbol: FUN_015f0a10 */


undefined8 FUN_015f0a10(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_015f07e0(param_2,param_3,&local_10,&local_18);
  FUN_00416cd0(param_1,4,local_10,&DAT_015f0ac8,local_18,&DAT_015f0ad8);
  FUN_00414560(&local_18,2);
  return param_1;
}

