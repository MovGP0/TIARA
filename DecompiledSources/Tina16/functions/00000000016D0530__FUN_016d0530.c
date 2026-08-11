/* Ghidra address: 016d0530 */
/* Ghidra symbol: FUN_016d0530 */


void FUN_016d0530(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_016d1500(&LAB_016d1b78,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_016d0510;
  }
  FUN_0041b800(&local_10);
  return;
}

