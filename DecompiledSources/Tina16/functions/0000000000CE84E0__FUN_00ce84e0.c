/* Ghidra address: 00ce84e0 */
/* Ghidra symbol: FUN_00ce84e0 */


undefined8 FUN_00ce84e0(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  if (*(double *)(param_1 + 0x20) == 0.0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    dVar2 = (double)FUN_00448ed0();
    uVar1 = FUN_0040c840(((*(double *)(param_1 + 0x20) - dVar2) * 86400000.0) / 1000.0);
  }
  return uVar1;
}

