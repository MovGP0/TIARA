/* Ghidra address: 01b8cff0 */
/* Ghidra symbol: FUN_01b8cff0 */


void FUN_01b8cff0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_01b8e350(&LAB_01b8ec08,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_01b8cfd0;
  FUN_0041b800(&local_10);
  return;
}

