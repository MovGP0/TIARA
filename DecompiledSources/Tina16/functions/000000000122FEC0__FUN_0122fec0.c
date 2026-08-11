/* Ghidra address: 0122fec0 */
/* Ghidra symbol: FUN_0122fec0 */


void FUN_0122fec0(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
  if (-3.1103 < dVar1) {
    dVar1 = -3.1103;
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
    *(double *)(PTR_DAT_020040b8 + 0x70) = dVar1;
  }
  return;
}

