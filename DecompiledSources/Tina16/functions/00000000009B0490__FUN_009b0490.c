/* Ghidra address: 009b0490 */
/* Ghidra symbol: FUN_009b0490 */


void FUN_009b0490(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_009b5c30(&PTR_FUN_009c8c20,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_009b0470;
  FUN_0041b800(&local_10);
  return;
}

