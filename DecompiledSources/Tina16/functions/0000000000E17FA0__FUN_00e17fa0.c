/* Ghidra address: 00e17fa0 */
/* Ghidra symbol: FUN_00e17fa0 */


void FUN_00e17fa0(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e318 == (code *)0x0) {
      DAT_0202e318 = (code *)FUN_00427c10(DAT_01edc8a0,L"StopSCPSampling");
    }
    if (DAT_0202e318 != (code *)0x0) {
      (*DAT_0202e318)();
    }
  }
  return;
}

