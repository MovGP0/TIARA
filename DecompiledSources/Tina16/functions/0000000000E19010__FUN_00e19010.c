/* Ghidra address: 00e19010 */
/* Ghidra symbol: FUN_00e19010 */


undefined4 FUN_00e19010(undefined1 *param_1)

{
  undefined4 uVar1;
  
  if (DAT_01edc8a0 != 0) {
    if (((DAT_0202e400 == (code *)0x0) && (DAT_0202e440 == (code *)0x0)) &&
       (DAT_0202e440 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGWaveformEx"),
       DAT_0202e440 == (code *)0x0)) {
      DAT_0202e400 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGWaveform");
    }
    if (DAT_0202e440 != (code *)0x0) {
      uVar1 = (*DAT_0202e440)(param_1);
      return uVar1;
    }
    if (DAT_0202e400 != (code *)0x0) {
      (*DAT_0202e400)(param_1);
      return 0;
    }
  }
  *param_1 = 0;
  return 0;
}

