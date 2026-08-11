/* Ghidra address: 017bcd00 */
/* Ghidra symbol: FUN_017bcd00 */


longlong FUN_017bcd00(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_017bdbf0(lVar1,0);
    *(undefined2 *)(lVar1 + 0x2d8) = param_3;
    *(undefined4 *)(lVar1 + 0xc) = param_4;
    *(undefined4 *)(lVar1 + 0x10) = param_5;
    *(undefined4 *)(lVar1 + 0xb8) = param_6;
    *(undefined4 *)(lVar1 + 0xbc) = param_7;
    param_1 = lVar1;
  }
  return param_1;
}

