/* Ghidra address: 00e1bd30 */
/* Ghidra symbol: FUN_00e1bd30 */


void FUN_00e1bd30(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = 0;
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e720 == (code *)0x0) {
      DAT_0202e720 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitDSG");
    }
    if (DAT_0202e720 != (code *)0x0) {
      (*DAT_0202e720)(param_1,param_2);
    }
  }
  return;
}

