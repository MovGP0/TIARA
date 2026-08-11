/* Ghidra address: 005e2560 */
/* Ghidra symbol: FUN_005e2560 */


void FUN_005e2560(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_005e3c70(&LAB_005e69c8,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_005e2540;
  FUN_0041b800(&local_10);
  return;
}

