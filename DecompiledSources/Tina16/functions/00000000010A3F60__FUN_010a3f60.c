/* Ghidra address: 010a3f60 */
/* Ghidra symbol: FUN_010a3f60 */


void FUN_010a3f60(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_010b2e30(*(undefined8 *)(param_1 + 0x9b8),local_res10[0]);
  FUN_010a3ec0(param_1,local_res10[0],1);
  FUN_00414480(local_res10);
  return;
}

