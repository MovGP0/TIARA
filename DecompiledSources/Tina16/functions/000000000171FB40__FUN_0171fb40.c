/* Ghidra address: 0171fb40 */
/* Ghidra symbol: FUN_0171fb40 */


void FUN_0171fb40(longlong param_1,undefined1 param_2,char param_3)

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

