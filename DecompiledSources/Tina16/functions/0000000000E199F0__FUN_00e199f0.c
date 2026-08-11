/* Ghidra address: 00e199f0 */
/* Ghidra symbol: FUN_00e199f0 */


void FUN_00e199f0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4e0 == (code *)0x0) {
      DAT_0202e4e0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSATrigModes");
    }
    if (DAT_0202e4e0 != (code *)0x0) {
      (*DAT_0202e4e0)(param_1,param_2);
    }
  }
  return;
}

