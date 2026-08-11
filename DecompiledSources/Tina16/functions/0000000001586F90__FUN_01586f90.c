/* Ghidra address: 01586f90 */
/* Ghidra symbol: FUN_01586f90 */


void FUN_01586f90(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_0158ad30(&LAB_015915a0,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_01586f70;
  FUN_0041b800(&local_10);
  return;
}

