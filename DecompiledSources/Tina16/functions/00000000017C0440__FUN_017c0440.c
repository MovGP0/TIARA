/* Ghidra address: 017c0440 */
/* Ghidra symbol: FUN_017c0440 */


longlong FUN_017c0440(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar2 = FUN_00410920(param_1,local_res10);
  if (lVar2 != -1) {
    FUN_01cf04c0(lVar2,0);
    *(undefined1 *)(lVar2 + 0x3d9) = param_7;
    uVar1 = FUN_00b92120(param_3,param_4);
    FUN_017c2cc0(lVar2,0,uVar1);
    uVar1 = FUN_00b92120(param_5,param_6);
    FUN_017c2cc0(lVar2,0xffffffff,uVar1);
    param_1 = lVar2;
  }
  return param_1;
}

