/* Ghidra address: 007a3dc0 */
/* Ghidra symbol: FUN_007a3dc0 */


void FUN_007a3dc0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_007adb20(&LAB_007cc498,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_007a3da0;
  FUN_0041b800(&local_10);
  return;
}

