/* Ghidra address: 00e19160 */
/* Ghidra symbol: FUN_00e19160 */


undefined4 FUN_00e19160(undefined4 param_1)

{
  undefined4 unaff_ESI;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e458 == (code *)0x0) {
      DAT_0202e458 = (code *)FUN_00427c10(DAT_01edc8a0,L"ConvertFGWaveform");
    }
    if (DAT_0202e458 != (code *)0x0) {
      unaff_ESI = (*DAT_0202e458)(param_1);
    }
  }
  return unaff_ESI;
}

