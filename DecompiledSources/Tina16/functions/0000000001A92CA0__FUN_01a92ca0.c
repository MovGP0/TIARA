/* Ghidra address: 01a92ca0 */
/* Ghidra symbol: FUN_01a92ca0 */


void FUN_01a92ca0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_01a93d00(&LAB_01a95d08,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_01a92c80;
  FUN_0041b800(&local_10);
  return;
}

