/* Ghidra address: 00c54610 */
/* Ghidra symbol: FUN_00c54610 */


longlong FUN_00c54610(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_01cf04c0(lVar1,0);
    *(undefined4 *)(lVar1 + 0xc) = param_3;
    *(undefined4 *)(lVar1 + 0x10) = param_4;
    param_1 = lVar1;
  }
  return param_1;
}

