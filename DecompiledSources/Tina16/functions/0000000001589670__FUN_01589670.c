/* Ghidra address: 01589670 */
/* Ghidra symbol: FUN_01589670 */


void FUN_01589670(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_0158b2c0(&LAB_01592b30,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_01589650;
  FUN_0041b800(&local_10);
  return;
}

