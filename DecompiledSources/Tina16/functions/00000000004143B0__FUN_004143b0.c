/* Ghidra address: 004143b0 */
/* Ghidra symbol: FUN_004143b0 */


longlong FUN_004143b0(int param_1,short param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (0 < param_1) {
    if (0x7fffffee < param_1) {
      FUN_00410ab0();
    }
    lVar1 = FUN_004095c0((longlong)(int)(param_1 + (param_1 + 1U & 1) + 0x11));
    lVar2 = lVar1 + 0x10;
    *(int *)(lVar1 + 0xc) = param_1;
    *(undefined4 *)(lVar1 + 8) = 1;
    if (param_2 == 0) {
      param_2 = DAT_02006a28;
    }
    *(short *)(lVar1 + 4) = param_2;
    *(undefined2 *)(lVar1 + 6) = 1;
    *(undefined2 *)(lVar2 + (longlong)(param_1 / 2) * 2) = 0;
  }
  return lVar2;
}

