/* Ghidra address: 01ca77c0 */
/* Ghidra symbol: FUN_01ca77c0 */


void FUN_01ca77c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_01ca9f70(&LAB_01cadab0,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_01ca77a0;
  FUN_0041b800(&local_10);
  return;
}

