/* Ghidra address: 010c8720 */
/* Ghidra symbol: FUN_010c8720 */


void FUN_010c8720(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  cVar1 = FUN_010c7d20(param_1);
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_0040af80(*(undefined8 *)(param_1 + 8));
    dVar4 = (double)FUN_0040bcd0(*(undefined8 *)(param_1 + 0x10));
    dVar5 = (double)FUN_0040af80(*(undefined8 *)(param_1 + 8));
    dVar6 = (double)FUN_0040bdd0(*(undefined8 *)(param_1 + 0x10));
    *(double *)(param_1 + 8) = dVar3 * dVar4;
    *(double *)(param_1 + 0x10) = dVar5 * dVar6;
    FUN_010c7a80(param_1);
  }
  else if (-680.0 < *(double *)(param_1 + 8) || *(double *)(param_1 + 8) == -680.0) {
    uVar2 = FUN_0040af80(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

