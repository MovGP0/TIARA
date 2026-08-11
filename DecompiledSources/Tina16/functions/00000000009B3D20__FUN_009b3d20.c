/* Ghidra address: 009b3d20 */
/* Ghidra symbol: FUN_009b3d20 */


void FUN_009b3d20(longlong param_1,undefined1 param_2,char param_3)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596740(param_1 + 8,local_res10);
  }
  else {
    FUN_00596d70(param_1 + 8,local_res10);
  }
  return;
}

