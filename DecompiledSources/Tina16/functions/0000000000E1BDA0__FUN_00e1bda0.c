/* Ghidra address: 00e1bda0 */
/* Ghidra symbol: FUN_00e1bda0 */


void FUN_00e1bda0(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e728 == (code *)0x0) {
      DAT_0202e728 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneDSG");
    }
    if (DAT_0202e728 != (code *)0x0) {
      (*DAT_0202e728)(param_1);
    }
  }
  return;
}

