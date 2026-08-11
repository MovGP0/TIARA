/* Ghidra address: 0079ba80 */
/* Ghidra symbol: FUN_0079ba80 */


void FUN_0079ba80(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_007ac740(&PTR_FUN_007c7d90,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0079ba60;
  FUN_0041b800(&local_10);
  return;
}

