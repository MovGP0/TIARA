/* Ghidra address: 0177c290 */
/* Ghidra symbol: FUN_0177c290 */


void FUN_0177c290(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x6c8),0);
  FUN_00414ad0(param_1 + 0x6d8,local_res10[0]);
  FUN_00742ed0(*(undefined8 *)(param_1 + 0x6c8),200);
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x6c8),*(char *)(param_1 + 0x6e0) == '\0');
  FUN_00414480(local_res10);
  return;
}

