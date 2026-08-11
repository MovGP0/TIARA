/* Ghidra address: 0178a200 */
/* Ghidra symbol: FUN_0178a200 */


void FUN_0178a200(longlong param_1,undefined4 param_2,char param_3)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596920(param_1 + 8,local_res10);
  }
  else {
    FUN_00596f10(param_1 + 8,local_res10);
  }
  return;
}

