/* Ghidra address: 0081e450 */
/* Ghidra symbol: FUN_0081e450 */


void FUN_0081e450(void)

{
  DAT_02012688 = DAT_02012688 + 1;
  if (DAT_02012688 == 0) {
    if (DAT_02012668 != 0) {
      FUN_007f9410();
    }
    if (DAT_02012698 != 0) {
      thunk_FUN_041d2921(DAT_02012698);
    }
    FUN_004a4f90(FUN_007f97d0);
  }
  return;
}

