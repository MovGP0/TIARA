/* Ghidra address: 007a73a0 */
/* Ghidra symbol: FUN_007a73a0 */


void FUN_007a73a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_007ae230(&PTR_FUN_007ce068,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_007a7380;
  FUN_0041b800(&local_10);
  return;
}

