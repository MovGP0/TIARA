/* Ghidra address: 004fd160 */
/* Ghidra symbol: FUN_004fd160 */


void FUN_004fd160(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00520790(&LAB_0051d038,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_004fd140;
  FUN_0041b800(&local_10);
  return;
}

