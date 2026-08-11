/* Ghidra address: 017c04c0 */
/* Ghidra symbol: FUN_017c04c0 */


longlong FUN_017c04c0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_01cf04c0(lVar1,0);
    *(undefined1 *)(lVar1 + 0x3d9) = param_4;
    if (*(int *)(param_3 + 0x10) < 2) {
      param_1 = FUN_004109a0(lVar1,local_res10[0]);
    }
    else {
      FUN_017c2de0(lVar1);
      FUN_017c2e00(lVar1,param_3);
      FUN_017c30d0(lVar1);
      FUN_017c2bc0(lVar1);
      param_1 = lVar1;
    }
  }
  return param_1;
}

