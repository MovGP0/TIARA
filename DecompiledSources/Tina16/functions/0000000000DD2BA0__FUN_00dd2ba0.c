/* Ghidra address: 00dd2ba0 */
/* Ghidra symbol: FUN_00dd2ba0 */


longlong FUN_00dd2ba0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                     undefined1 param_5)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    *(undefined1 *)(lVar1 + 1) = param_3;
    *(undefined1 *)(lVar1 + 2) = param_4;
    *(undefined1 *)(lVar1 + 4) = param_5;
    param_1 = lVar1;
  }
  return param_1;
}

