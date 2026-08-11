/* Ghidra address: 00e17f20 */
/* Ghidra symbol: FUN_00e17f20 */


void FUN_00e17f20(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e310 == (code *)0x0) {
      DAT_0202e310 = (code *)FUN_00427c10(DAT_01edc8a0,L"StartSCPSampling");
    }
    if (DAT_0202e310 != (code *)0x0) {
      (*DAT_0202e310)(param_1);
    }
  }
  return;
}

