/* Ghidra address: 01aa8e50 */
/* Ghidra symbol: FUN_01aa8e50 */


longlong FUN_01aa8e50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_01aa8d90(lVar1,0);
    param_1 = lVar1;
  }
  return param_1;
}

