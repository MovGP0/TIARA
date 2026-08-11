/* Ghidra address: 00be2410 */
/* Ghidra symbol: FUN_00be2410 */


void FUN_00be2410(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00be4900(&LAB_00bdfd90,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_00be23f0;
  FUN_0041b800(&local_10);
  return;
}

