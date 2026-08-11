/* Ghidra address: 013b2dc0 */
/* Ghidra symbol: FUN_013b2dc0 */


longlong FUN_013b2dc0(longlong param_1,undefined8 param_2,short param_3,short param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_00b94dc0(lVar1,0,(longlong)param_3,(longlong)param_4);
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined1 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    param_1 = lVar1;
  }
  return param_1;
}

