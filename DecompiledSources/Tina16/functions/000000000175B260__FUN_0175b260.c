/* Ghidra address: 0175b260 */
/* Ghidra symbol: FUN_0175b260 */


void FUN_0175b260(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_0175c5b0(&LAB_0175e750,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0175b240;
  FUN_0041b800(&local_10);
  return;
}

