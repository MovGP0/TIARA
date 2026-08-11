/* Ghidra address: 0082d580 */
/* Ghidra symbol: FUN_0082d580 */


void FUN_0082d580(longlong param_1,undefined4 param_2,char param_3)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_005974c0(param_1 + 8,local_res10);
  }
  else {
    FUN_00597640(param_1 + 8,local_res10);
  }
  return;
}

