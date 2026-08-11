/* Ghidra address: 01d3bf60 */
/* Ghidra symbol: FUN_01d3bf60 */


longlong FUN_01d3bf60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined4 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar1 = FUN_00410920(param_1,&local_res10);
  if (lVar1 != -1) {
    FUN_00b94d80(lVar1,0);
    *(undefined4 *)(lVar1 + 8) = local_res18;
    param_1 = lVar1;
  }
  return param_1;
}

