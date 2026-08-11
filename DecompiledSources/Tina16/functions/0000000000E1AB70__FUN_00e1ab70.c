/* Ghidra address: 00e1ab70 */
/* Ghidra symbol: FUN_00e1ab70 */


void FUN_00e1ab70(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e600 == (code *)0x0) {
      DAT_0202e600 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneLA");
    }
    if (DAT_0202e600 != (code *)0x0) {
      (*DAT_0202e600)(0);
    }
  }
  return;
}

