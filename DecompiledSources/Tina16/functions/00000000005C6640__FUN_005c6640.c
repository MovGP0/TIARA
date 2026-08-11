/* Ghidra address: 005c6640 */
/* Ghidra symbol: FUN_005c6640 */


undefined2 FUN_005c6640(longlong param_1,undefined2 param_2,char param_3)

{
  undefined2 local_res10 [12];
  undefined2 local_a;
  
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_005960e0(param_1 + 8,local_res10,&local_a);
  }
  else {
    FUN_00596130(param_1 + 8,local_res10,&local_a);
  }
  return local_a;
}

