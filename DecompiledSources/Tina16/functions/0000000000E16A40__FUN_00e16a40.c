/* Ghidra address: 00e16a40 */
/* Ghidra symbol: FUN_00e16a40 */


void FUN_00e16a40(undefined4 param_1,undefined1 *param_2,undefined8 *param_3)

{
  *param_2 = 0;
  *param_3 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1d0 == (code *)0x0) {
      DAT_0202e1d0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDVMHIChannels");
    }
    if (DAT_0202e1d0 != (code *)0x0) {
      (*DAT_0202e1d0)(param_1,param_2,param_3);
    }
  }
  return;
}

