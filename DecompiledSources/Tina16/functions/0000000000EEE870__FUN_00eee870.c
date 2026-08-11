/* Ghidra address: 00eee870 */
/* Ghidra symbol: FUN_00eee870 */


void FUN_00eee870(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596b00(param_1 + 8,local_res10);
  }
  else {
    FUN_005970b0(param_1 + 8,local_res10);
  }
  return;
}

