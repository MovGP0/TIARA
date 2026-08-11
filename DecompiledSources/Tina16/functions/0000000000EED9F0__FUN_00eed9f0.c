/* Ghidra address: 00eed9f0 */
/* Ghidra symbol: FUN_00eed9f0 */


void FUN_00eed9f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00eeef80(&LAB_00ef33f8,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_00eed9d0;
  FUN_0041b800(&local_10);
  return;
}

