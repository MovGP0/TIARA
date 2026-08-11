/* Ghidra address: 00bd1ee0 */
/* Ghidra symbol: FUN_00bd1ee0 */


void FUN_00bd1ee0(void)

{
  int iVar1;
  
  DAT_02019b0c = DAT_02019b0c + -1;
  if (DAT_02019b0c == -1) {
    iVar1 = FUN_0044f060();
    DAT_02019b08 = iVar1 == 2;
  }
  return;
}

