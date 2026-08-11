/* Ghidra address: 007e8930 */
/* Ghidra symbol: FUN_007e8930 */


void FUN_007e8930(longlong param_1)

{
  longlong lVar1;
  
  if ((PTR_DAT_02005bd0[0xd] != '\0') && (*(char *)(param_1 + 0x91) != '\0')) {
    lVar1 = FUN_007dc570(param_1 + 200);
    if (lVar1 == 0) {
      FUN_007e7030(param_1,*(undefined1 *)(*(longlong *)PTR_DAT_02004030 + 0x79));
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    else {
      FUN_007e7030(param_1,*(undefined1 *)(lVar1 + 0xb1));
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
  }
  return;
}

