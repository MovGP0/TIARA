/* Ghidra address: 00e17d20 */
/* Ghidra symbol: FUN_00e17d20 */


void FUN_00e17d20(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2f0 == (code *)0x0) {
      DAT_0202e2f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPStorageMode");
    }
    if (DAT_0202e2f0 != (code *)0x0) {
      (*DAT_0202e2f0)(param_1);
    }
  }
  return;
}

