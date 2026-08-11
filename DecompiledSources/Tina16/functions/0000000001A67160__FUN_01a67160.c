/* Ghidra address: 01a67160 */
/* Ghidra symbol: FUN_01a67160 */


void FUN_01a67160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x750,local_res10[0]);
  *(undefined8 *)(param_1 + 0xc08) = param_3;
  *(undefined8 *)(param_1 + 0xc18) = param_4;
  FUN_00414480(local_res10);
  return;
}

