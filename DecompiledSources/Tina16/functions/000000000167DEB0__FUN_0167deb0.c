/* Ghidra address: 0167deb0 */
/* Ghidra symbol: FUN_0167deb0 */


void FUN_0167deb0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00e29100(&PTR_FUN_00e2a208,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0167de90;
  FUN_0041b800(&local_10);
  return;
}

