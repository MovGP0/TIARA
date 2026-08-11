/* Ghidra address: 0122fa90 */
/* Ghidra symbol: FUN_0122fa90 */


void FUN_0122fa90(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
  if (dVar1 < -3.0103) {
    dVar1 = -3.0103;
    FUN_00b90440(*(undefined8 *)(param_1 + 0x710),0xc00815182a9930be);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
    *(double *)(PTR_DAT_020040b8 + 0x98) = dVar1;
  }
  return;
}

