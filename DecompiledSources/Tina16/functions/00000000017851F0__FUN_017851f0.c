/* Ghidra address: 017851f0 */
/* Ghidra symbol: FUN_017851f0 */


void FUN_017851f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x720) == '\0') {
    FUN_0072d440(local_res10[0],1,4,0);
    *(undefined1 *)(param_1 + 0x720) = 1;
  }
  FUN_00414480(local_res10);
  return;
}

