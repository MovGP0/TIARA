/* Ghidra address: 01b21120 */
/* Ghidra symbol: FUN_01b21120 */


void FUN_01b21120(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *(undefined2 *)(param_2 + 0x2c) = param_3;
  FUN_004b50b0(param_2,local_res8[0]);
  FUN_00414480(local_res8);
  return;
}

