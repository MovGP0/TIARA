/* Ghidra address: 00eb0ee0 */
/* Ghidra symbol: FUN_00eb0ee0 */


void FUN_00eb0ee0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00eb33d0(&LAB_00eb7118,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_00eb0ec0;
  FUN_0041b800(&local_10);
  return;
}

