/* Ghidra address: 00568490 */
/* Ghidra symbol: FUN_00568490 */


void FUN_00568490(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596a10(param_1 + 8,local_res10);
  }
  else {
    FUN_00596fe0(param_1 + 8,local_res10);
  }
  return;
}

