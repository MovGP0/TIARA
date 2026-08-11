/* Ghidra address: 01488b50 */
/* Ghidra symbol: FUN_01488b50 */


void FUN_01488b50(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_0148b140(&LAB_0148f0a8,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_01488b30;
  FUN_0041b800(&local_10);
  return;
}

