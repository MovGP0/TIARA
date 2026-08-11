/* Ghidra address: 01789f70 */
/* Ghidra symbol: FUN_01789f70 */


void FUN_01789f70(longlong param_1,undefined4 param_2,char param_3)

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

