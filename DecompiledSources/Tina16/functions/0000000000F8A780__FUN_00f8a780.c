/* Ghidra address: 00f8a780 */
/* Ghidra symbol: FUN_00f8a780 */


void FUN_00f8a780(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(longlong *)(param_1 + 0x3540) != 0) {
    FUN_004b4b10(*(longlong *)(param_1 + 0x3540),local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

