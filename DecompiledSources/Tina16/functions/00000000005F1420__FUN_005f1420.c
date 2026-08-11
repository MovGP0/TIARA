/* Ghidra address: 005f1420 */
/* Ghidra symbol: FUN_005f1420 */


void FUN_005f1420(void)

{
  DAT_02011f88 = DAT_02011f88 + -1;
  if (DAT_02011f88 == -1) {
    *(code **)PTR_PTR_020016a8 = FUN_005f1400;
  }
  return;
}

