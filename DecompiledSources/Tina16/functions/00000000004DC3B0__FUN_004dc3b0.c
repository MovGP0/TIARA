/* Ghidra address: 004dc3b0 */
/* Ghidra symbol: FUN_004dc3b0 */


void FUN_004dc3b0(void)

{
  DAT_020115d8 = DAT_020115d8 + 1;
  if (DAT_020115d8 == 0) {
    *(undefined8 *)PTR_PTR_02002d70 = 0;
  }
  return;
}

