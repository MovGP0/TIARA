/* Ghidra address: 005ded00 */
/* Ghidra symbol: FUN_005ded00 */


void FUN_005ded00(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_005e2070(&LAB_005e4518,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_005dece0;
  FUN_0041b800(&local_10);
  return;
}

