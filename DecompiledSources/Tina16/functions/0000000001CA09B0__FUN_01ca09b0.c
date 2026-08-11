/* Ghidra address: 01ca09b0 */
/* Ghidra symbol: FUN_01ca09b0 */


void FUN_01ca09b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x1540),local_res10[0]);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414480(local_res10);
  return;
}

