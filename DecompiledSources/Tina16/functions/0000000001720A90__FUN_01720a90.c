/* Ghidra address: 01720a90 */
/* Ghidra symbol: FUN_01720a90 */


undefined8 FUN_01720a90(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_00596200(param_1 + 8,local_res10,&local_10);
  }
  else {
    FUN_00596250(param_1 + 8,local_res10,&local_10);
  }
  return local_10;
}

