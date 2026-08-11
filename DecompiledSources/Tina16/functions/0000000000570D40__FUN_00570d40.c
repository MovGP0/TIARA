/* Ghidra address: 00570d40 */
/* Ghidra symbol: FUN_00570d40 */


void FUN_00570d40(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00574170(&LAB_00583b58,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_00570d20;
  FUN_0041b800(&local_10);
  return;
}

