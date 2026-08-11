/* Ghidra address: 0122fb70 */
/* Ghidra symbol: FUN_0122fb70 */


void FUN_0122fb70(longlong param_1)

{
  short sVar1;
  double dVar2;
  
  dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6b0));
  if (dVar2 < -3.0103) {
    dVar2 = -3.0103;
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),0xc00815182a9930be);
  }
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
  if (sVar1 == 0x48) {
    *(double *)(PTR_DAT_020040b8 + 0x38) = dVar2;
  }
  else if (sVar1 == 0x4c) {
    *(double *)(PTR_DAT_020040b8 + 0x10) = dVar2;
  }
  else if (sVar1 == 0x50) {
    *(double *)(PTR_DAT_020040b8 + 0x68) = dVar2;
  }
  return;
}

