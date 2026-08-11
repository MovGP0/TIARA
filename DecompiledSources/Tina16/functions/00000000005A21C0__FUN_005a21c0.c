/* Ghidra address: 005a21c0 */
/* Ghidra symbol: FUN_005a21c0 */


void FUN_005a21c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_005a5870(&LAB_005a9018,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_005a21a0;
  FUN_0041b800(&local_10);
  return;
}

