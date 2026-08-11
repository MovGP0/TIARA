/* Ghidra address: 00e17060 */
/* Ghidra symbol: FUN_00e17060 */


void FUN_00e17060(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e230 == (code *)0x0) {
      DAT_0202e230 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPVerticalLevel");
    }
    if (DAT_0202e230 != (code *)0x0) {
      (*DAT_0202e230)(param_1);
    }
  }
  return;
}

