/* Ghidra address: 01143da0 */
/* Ghidra symbol: FUN_01143da0 */


void FUN_01143da0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_011463c0(&LAB_0114a158,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_01143d80;
  FUN_0041b800(&local_10);
  return;
}

