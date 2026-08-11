/* Ghidra address: 01a45650 */
/* Ghidra symbol: FUN_01a45650 */


void FUN_01a45650(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x8b0,local_res10[0]);
  FUN_01a456f0(param_1);
  FUN_0147c380(*(undefined8 *)(param_1 + 0x6b8),local_res10[0],*(int *)(param_1 + 0x920) + -1,
               0xfffffffc);
  FUN_00414480(local_res10);
  return;
}

