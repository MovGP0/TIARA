/* Ghidra address: 005c6db0 */
/* Ghidra symbol: FUN_005c6db0 */


void FUN_005c6db0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_005c86b0(&LAB_005cf170,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_005c6d90;
  FUN_0041b800(&local_10);
  return;
}

