/* Ghidra address: 009b3af0 */
/* Ghidra symbol: FUN_009b3af0 */


undefined1 FUN_009b3af0(longlong param_1,undefined1 param_2,char param_3)

{
  undefined1 local_res10 [24];
  undefined1 local_9;
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596060(param_1 + 8,local_res10,&local_9);
  }
  else {
    FUN_005960a0(param_1 + 8,local_res10,&local_9);
  }
  return local_9;
}

