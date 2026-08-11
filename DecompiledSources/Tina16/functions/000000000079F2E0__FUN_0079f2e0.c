/* Ghidra address: 0079f2e0 */
/* Ghidra symbol: FUN_0079f2e0 */


void FUN_0079f2e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_007ad0e0(&LAB_007c9b98,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0079f2c0;
  FUN_0041b800(&local_10);
  return;
}

