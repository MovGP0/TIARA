/* Ghidra address: 010cbb40 */
/* Ghidra symbol: FUN_010cbb40 */


undefined8 FUN_010cbb40(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  
  FUN_0040af40(*(undefined8 *)(param_1 + 0x60));
  dVar2 = (double)FUN_0040c850();
  if (dVar2 <= 0.999999999) {
LAB_010cbb82:
    FUN_0040af40(*(undefined8 *)(param_1 + 0x60));
    FUN_0040c850();
    if (-1e-09 < extraout_XMM0_Qa) {
      FUN_0040af40(*(undefined8 *)(param_1 + 0x60));
      FUN_0040c850();
      if (extraout_XMM0_Qa_00 < 1e-09) goto LAB_010cbbb8;
    }
    uVar1 = 1;
  }
  else {
    FUN_0040af40(*(undefined8 *)(param_1 + 0x60));
    dVar2 = (double)FUN_0040c850();
    if (1.000000001 <= dVar2) goto LAB_010cbb82;
LAB_010cbbb8:
    uVar1 = 0;
  }
  return uVar1;
}

