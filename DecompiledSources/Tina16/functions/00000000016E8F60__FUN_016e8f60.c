/* Ghidra address: 016e8f60 */
/* Ghidra symbol: FUN_016e8f60 */


void FUN_016e8f60(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = *(double *)(*(longlong *)(param_1 + 0x58) + 0x3a8);
  if (dVar1 < *(double *)(param_1 + 0x78) || dVar1 == *(double *)(param_1 + 0x78)) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    uVar2 = FUN_00409eb0();
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x3a8);
  }
  return;
}

