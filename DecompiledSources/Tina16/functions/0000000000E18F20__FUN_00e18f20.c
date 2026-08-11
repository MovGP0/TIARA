/* Ghidra address: 00e18f20 */
/* Ghidra symbol: FUN_00e18f20 */


undefined4 FUN_00e18f20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (DAT_01edc8a0 != 0) {
    if (((DAT_0202e3f8 == (code *)0x0) && (DAT_0202e438 == (code *)0x0)) &&
       (DAT_0202e438 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGSweepNumEx"),
       DAT_0202e438 == (code *)0x0)) {
      DAT_0202e3f8 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGSweepNum");
    }
    if (DAT_0202e438 != (code *)0x0) {
      uVar1 = (*DAT_0202e438)(param_1);
      return uVar1;
    }
    if (DAT_0202e3f8 != (code *)0x0) {
      (*DAT_0202e3f8)(param_1);
      return 0;
    }
  }
  *param_1 = 0;
  return 0;
}

