/* Ghidra address: 011452e0 */
/* Ghidra symbol: FUN_011452e0 */


void FUN_011452e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_01146700(&LAB_0114ab28,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_011452c0;
  FUN_0041b800(&local_10);
  return;
}

