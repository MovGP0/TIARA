/* Ghidra address: 004fc0e0 */
/* Ghidra symbol: FUN_004fc0e0 */


undefined8 FUN_004fc0e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = param_3;
  uVar1 = FUN_00414480(&local_18);
  FUN_00596580(param_1 + 8,&local_10,uVar1);
  FUN_00414ad0(param_2,local_18);
  FUN_00414480(&local_18);
  return param_2;
}

