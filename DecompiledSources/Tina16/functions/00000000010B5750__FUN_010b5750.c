/* Ghidra address: 010b5750 */
/* Ghidra symbol: FUN_010b5750 */


longlong FUN_010b5750(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined1 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_0149d160(lVar1,0);
    *(undefined4 *)(lVar1 + 0xc) = param_3;
    *(undefined4 *)(lVar1 + 0x10) = param_4;
    *(undefined1 *)(lVar1 + 0x24) = param_5;
    *(undefined8 *)(lVar1 + 0x48) = param_6;
    param_1 = lVar1;
  }
  return param_1;
}

