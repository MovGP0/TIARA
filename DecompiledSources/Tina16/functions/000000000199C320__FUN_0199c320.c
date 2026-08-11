/* Ghidra address: 0199c320 */
/* Ghidra symbol: FUN_0199c320 */


longlong FUN_0199c320(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_00b94d80(lVar1,0);
    *(undefined4 *)(lVar1 + 0xc) = param_3;
    *(undefined4 *)(lVar1 + 0x10) = param_4;
    *(undefined4 *)(lVar1 + 8) = 1;
    param_1 = lVar1;
  }
  return param_1;
}

