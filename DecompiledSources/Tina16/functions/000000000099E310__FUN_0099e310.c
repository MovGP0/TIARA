/* Ghidra address: 0099e310 */
/* Ghidra symbol: FUN_0099e310 */


void FUN_0099e310(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_009abe50(&LAB_009b8388,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0099e2f0;
  FUN_0041b800(&local_10);
  return;
}

