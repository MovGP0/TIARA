/* Ghidra address: 01789ff0 */
/* Ghidra symbol: FUN_01789ff0 */


undefined4 FUN_01789ff0(longlong param_1,undefined4 param_2,char param_3)

{
  undefined4 local_res10 [6];
  undefined4 local_c;
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596180(param_1 + 8,local_res10,&local_c);
  }
  else {
    FUN_005961c0(param_1 + 8,local_res10,&local_c);
  }
  return local_c;
}

