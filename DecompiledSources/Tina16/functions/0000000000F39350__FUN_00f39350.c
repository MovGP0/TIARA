/* Ghidra address: 00f39350 */
/* Ghidra symbol: FUN_00f39350 */


void FUN_00f39350(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00f3ab40(&LAB_00f3e330,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_00f39330;
  FUN_0041b800(&local_10);
  return;
}

