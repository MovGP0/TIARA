/* Ghidra address: 00da1950 */
/* Ghidra symbol: FUN_00da1950 */


void FUN_00da1950(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00da3c00(&LAB_00da7820,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_00da1930;
  FUN_0041b800(&local_10);
  return;
}

