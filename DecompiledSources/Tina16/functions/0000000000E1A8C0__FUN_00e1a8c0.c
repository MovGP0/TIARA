/* Ghidra address: 00e1a8c0 */
/* Ghidra symbol: FUN_00e1a8c0 */


void FUN_00e1a8c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e5e0 == (code *)0x0) && (DAT_0202e5d0 == (code *)0x0)) {
      DAT_0202e5d0 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadSADataEx");
      if (DAT_0202e5d0 == (code *)0x0) {
        DAT_0202e5e0 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadSAData");
      }
    }
    if (DAT_0202e5d0 == (code *)0x0) {
      if (DAT_0202e5e0 != (code *)0x0) {
        (*DAT_0202e5e0)(param_2,param_3,param_4,param_5);
      }
    }
    else {
      (*DAT_0202e5d0)(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

