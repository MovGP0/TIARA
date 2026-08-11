/* Ghidra address: 00e16dd0 */
/* Ghidra symbol: FUN_00e16dd0 */


void FUN_00e16dd0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e208 == (code *)0x0) {
      DAT_0202e208 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneSCP");
    }
    if (DAT_0202e208 != (code *)0x0) {
      (*DAT_0202e208)(param_1);
    }
  }
  return;
}

