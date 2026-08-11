/* Ghidra address: 00414350 */
/* Ghidra symbol: FUN_00414350 */


longlong FUN_00414350(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  if (0 < param_1) {
    if (0x3ffffff6 < param_1) {
      FUN_00410ab0();
    }
    lVar2 = FUN_004095c0((longlong)((param_1 + 1) * 2 + 0x10));
    lVar1 = lVar2 + 0x10;
    *(int *)(lVar2 + 0xc) = param_1;
    *(undefined4 *)(lVar2 + 8) = 1;
    *(undefined2 *)(lVar2 + 6) = 2;
    *(undefined2 *)(lVar2 + 4) = DAT_02006a2c;
    *(undefined2 *)(lVar1 + (longlong)param_1 * 2) = 0;
  }
  return lVar1;
}

