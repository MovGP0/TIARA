/* Ghidra address: 017b9b40 */
/* Ghidra symbol: FUN_017b9b40 */


longlong FUN_017b9b40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_017b8a10(lVar1,0,param_3);
    *(undefined1 *)(lVar1 + 0x24) = 1;
    param_1 = lVar1;
  }
  return param_1;
}

