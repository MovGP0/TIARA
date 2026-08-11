/* Ghidra address: 0056e690 */
/* Ghidra symbol: FUN_0056e690 */


void FUN_0056e690(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00573bf0(&LAB_00582838,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  *(code **)(param_1 + 0x30) = FUN_0056e670;
  FUN_0041b800(&local_10);
  return;
}

