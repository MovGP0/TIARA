/* Ghidra address: 00ce84a0 */
/* Ghidra symbol: FUN_00ce84a0 */


undefined8 FUN_00ce84a0(longlong param_1)

{
  undefined8 uVar1;
  double extraout_XMM0_Qa;
  
  if ((*(double *)(param_1 + 0x20) == 0.0) ||
     (FUN_00448ed0(),
     extraout_XMM0_Qa < *(double *)(param_1 + 0x20) ||
     extraout_XMM0_Qa == *(double *)(param_1 + 0x20))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

