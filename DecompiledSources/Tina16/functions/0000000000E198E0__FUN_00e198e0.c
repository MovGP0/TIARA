/* Ghidra address: 00e198e0 */
/* Ghidra symbol: FUN_00e198e0 */


undefined8 FUN_00e198e0(undefined8 param_1,undefined4 param_2)

{
  undefined8 unaff_XMM6_Qa;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4d0 == (code *)0x0) {
      DAT_0202e4d0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSAMeasRef");
    }
    if (DAT_0202e4d0 != (code *)0x0) {
      unaff_XMM6_Qa = (*DAT_0202e4d0)(param_1,param_2);
    }
  }
  return unaff_XMM6_Qa;
}

