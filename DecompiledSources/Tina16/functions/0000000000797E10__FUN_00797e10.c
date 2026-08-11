/* Ghidra address: 00797e10 */
/* Ghidra symbol: FUN_00797e10 */


void FUN_00797e10(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_007abf50(&PTR_FUN_007c6240,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_00797df0;
  FUN_0041b800(&local_10);
  return;
}

