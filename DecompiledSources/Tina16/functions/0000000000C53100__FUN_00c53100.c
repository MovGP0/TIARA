/* Ghidra address: 00c53100 */
/* Ghidra symbol: FUN_00c53100 */


longlong FUN_00c53100(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_00b94d80(lVar1,0);
    param_1 = lVar1;
  }
  return param_1;
}

