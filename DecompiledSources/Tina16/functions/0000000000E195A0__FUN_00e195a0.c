/* Ghidra address: 00e195a0 */
/* Ghidra symbol: FUN_00e195a0 */


void FUN_00e195a0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e498 == (code *)0x0) {
      DAT_0202e498 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitSA");
    }
    if (DAT_0202e498 != (code *)0x0) {
      (*DAT_0202e498)(param_1,param_2);
    }
  }
  return;
}

