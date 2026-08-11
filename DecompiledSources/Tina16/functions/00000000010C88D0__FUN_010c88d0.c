/* Ghidra address: 010c88d0 */
/* Ghidra symbol: FUN_010c88d0 */


void FUN_010c88d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  
  cVar1 = FUN_010c7d20(param_1);
  if ((cVar1 == '\0') || (*(double *)(param_1 + 8) < 0.0)) {
    dVar3 = (double)FUN_0040c2f0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = FUN_0040af80(dVar3 * 0.5);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x28) * 0.5;
    FUN_010c7c90(param_1);
  }
  else {
    uVar2 = FUN_0040c760(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  return;
}

