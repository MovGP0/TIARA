/* Ghidra address: 00e165d0 */
/* Ghidra symbol: FUN_00e165d0 */


void FUN_00e165d0(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e188 == (code *)0x0) {
      DAT_0202e188 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitDVMHW");
    }
    if (DAT_0202e188 != (code *)0x0) {
      (*DAT_0202e188)(param_1,param_2);
    }
  }
  return;
}

