/* Ghidra address: 0122ff20 */
/* Ghidra symbol: FUN_0122ff20 */


void FUN_0122ff20(longlong param_1)

{
  short sVar1;
  double dVar2;
  
  dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x940));
  if (-3.1103 < dVar2) {
    dVar2 = -3.1103;
  }
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
  if (sVar1 == 0x48) {
    *(double *)(PTR_DAT_020040b8 + 0x30) = dVar2;
  }
  else if (sVar1 == 0x4c) {
    *(double *)(PTR_DAT_020040b8 + 0x18) = dVar2;
  }
  else if (sVar1 == 0x53) {
    *(double *)(PTR_DAT_020040b8 + 0xa0) = dVar2;
  }
  return;
}

