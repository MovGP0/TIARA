/* Ghidra address: 009b19e0 */
/* Ghidra symbol: FUN_009b19e0 */


void FUN_009b19e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_009b5f70(&LAB_009c97f8,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_009b19c0;
  FUN_0041b800(&local_10);
  return;
}

