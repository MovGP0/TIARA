/* Ghidra address: 005c6880 */
/* Ghidra symbol: FUN_005c6880 */


void FUN_005c6880(longlong param_1,undefined2 param_2,char param_3)

{
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596830(param_1 + 8,local_res10);
  }
  else {
    FUN_00596e40(param_1 + 8,local_res10);
  }
  return;
}

