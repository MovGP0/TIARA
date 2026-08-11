/* Ghidra address: 004e0440 */
/* Ghidra symbol: FUN_004e0440 */


void FUN_004e0440(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_005974f0(param_1 + 8,local_res10);
  }
  else {
    FUN_00597670(param_1 + 8,local_res10);
  }
  return;
}

