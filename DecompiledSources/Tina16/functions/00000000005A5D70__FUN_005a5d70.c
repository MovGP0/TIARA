/* Ghidra address: 005a5d70 */
/* Ghidra symbol: FUN_005a5d70 */


void FUN_005a5d70(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_005a83e0(&LAB_005acd70,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_005a5d50;
  FUN_0041b800(&local_10);
  return;
}

