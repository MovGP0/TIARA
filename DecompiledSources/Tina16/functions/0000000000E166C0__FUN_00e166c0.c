/* Ghidra address: 00e166c0 */
/* Ghidra symbol: FUN_00e166c0 */


void FUN_00e166c0(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e198 == (code *)0x0) {
      DAT_0202e198 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneDVM");
    }
    if (DAT_0202e198 != (code *)0x0) {
      (*DAT_0202e198)(param_1,param_2);
    }
  }
  return;
}

