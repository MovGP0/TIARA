/* Ghidra address: 007a8690 */
/* Ghidra symbol: FUN_007a8690 */


void FUN_007a8690(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_007ae4b0(&PTR_FUN_007ceaf8,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_007a8670;
  FUN_0041b800(&local_10);
  return;
}

