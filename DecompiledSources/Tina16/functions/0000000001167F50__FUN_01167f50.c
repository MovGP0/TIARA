/* Ghidra address: 01167f50 */
/* Ghidra symbol: FUN_01167f50 */


longlong FUN_01167f50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_01167ab0(lVar1,0,param_3,param_4);
    *(undefined4 *)(lVar1 + 0x20) = 2;
    param_1 = lVar1;
  }
  return param_1;
}

