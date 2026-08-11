/* Ghidra address: 004ddc40 */
/* Ghidra symbol: FUN_004ddc40 */


void FUN_004ddc40(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00597520(param_1 + 8,local_res10);
  }
  else {
    FUN_005976a0(param_1 + 8,local_res10);
  }
  return;
}

