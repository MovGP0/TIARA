/* Ghidra address: 0122fe40 */
/* Ghidra symbol: FUN_0122fe40 */


void FUN_0122fe40(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x720));
  if (dVar1 < -3.0103) {
    dVar1 = -3.0103;
    FUN_00b90440(*(undefined8 *)(param_1 + 0x720),0xc00815182a9930be);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
    *(double *)(PTR_DAT_020040b8 + 0xa8) = dVar1;
  }
  return;
}

