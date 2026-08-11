/* Ghidra address: 0082dd10 */
/* Ghidra symbol: FUN_0082dd10 */


void FUN_0082dd10(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_0082ed40(&LAB_00830cb0,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0082dcf0;
  FUN_0041b800(&local_10);
  return;
}

