/* Ghidra address: 00f36ed0 */
/* Ghidra symbol: FUN_00f36ed0 */


void FUN_00f36ed0(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00f3a6a0(&LAB_00f3d1c8,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_00f36eb0;
  }
  FUN_0041b800(&local_10);
  return;
}

