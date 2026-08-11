/* Ghidra address: 00b95480 */
/* Ghidra symbol: FUN_00b95480 */


longlong FUN_00b95480(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_00b94dc0(lVar1,0,param_3,param_4);
    *(undefined1 *)(lVar1 + 0x21) = 0;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    param_1 = lVar1;
  }
  return param_1;
}

