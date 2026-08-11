/* Ghidra address: 0186ace0 */
/* Ghidra symbol: FUN_0186ace0 */


void FUN_0186ace0(void)

{
  DAT_02110384 = DAT_02110384 + -1;
  if (DAT_02110384 == -1) {
    DAT_02110380 = 0;
    if (*PTR_DAT_02001218 != '\0') {
      DAT_02110388 = FUN_0186a830(&DAT_0186a400,1);
      *(undefined1 *)(DAT_02110388 + 8) = 1;
    }
    DAT_02110390 = 0;
  }
  return;
}

