/* Ghidra address: 017741e0 */
/* Ghidra symbol: FUN_017741e0 */


void FUN_017741e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 local_10 [4];
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01773fd0(param_1,local_10,2);
  FUN_01773e60(*(undefined8 *)(param_1 + 0xf8),local_res10[0]);
  local_c = 0;
  FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),&local_c,4);
  FUN_00414480(local_res10);
  return;
}

