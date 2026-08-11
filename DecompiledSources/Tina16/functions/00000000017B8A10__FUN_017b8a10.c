/* Ghidra address: 017b8a10 */
/* Ghidra symbol: FUN_017b8a10 */


longlong FUN_017b8a10(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_01cf04c0(lVar1,0);
    *(undefined1 *)(lVar1 + 0x24) = 0;
    *(undefined2 *)(lVar1 + 0x38) = param_3;
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    param_1 = lVar1;
  }
  return param_1;
}

