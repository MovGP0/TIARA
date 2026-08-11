/* Ghidra address: 00e187c0 */
/* Ghidra symbol: FUN_00e187c0 */


void FUN_00e187c0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e390 == (code *)0x0) {
      DAT_0202e390 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGOffs");
    }
    if (DAT_0202e390 != (code *)0x0) {
      (*DAT_0202e390)(param_1);
    }
  }
  return;
}

