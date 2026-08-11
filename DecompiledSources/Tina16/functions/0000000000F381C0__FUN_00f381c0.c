/* Ghidra address: 00f381c0 */
/* Ghidra symbol: FUN_00f381c0 */


void FUN_00f381c0(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041b840(param_1 + 0x38,param_2);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00f3a8f0(&PTR_FUN_00f3da68,&local_10);
    FUN_0041b840(param_1 + 0x38,local_10);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_00f381a0;
  }
  FUN_0041b800(&local_10);
  return;
}

