/* Ghidra address: 00e194c0 */
/* Ghidra symbol: FUN_00e194c0 */


void FUN_00e194c0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e488 == (code *)0x0) {
      DAT_0202e488 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGSweepStop");
    }
    if (DAT_0202e488 != (code *)0x0) {
      (*DAT_0202e488)(param_1);
    }
  }
  return;
}

