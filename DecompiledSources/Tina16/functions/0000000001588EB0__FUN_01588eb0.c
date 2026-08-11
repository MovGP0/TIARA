/* Ghidra address: 01588eb0 */
/* Ghidra symbol: FUN_01588eb0 */


void FUN_01588eb0(longlong param_1,undefined1 param_2,char param_3)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00597460(param_1 + 8,local_res10);
  }
  else {
    FUN_005975e0(param_1 + 8,local_res10);
  }
  return;
}

