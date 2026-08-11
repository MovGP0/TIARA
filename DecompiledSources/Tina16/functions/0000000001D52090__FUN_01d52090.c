/* Ghidra address: 01d52090 */
/* Ghidra symbol: FUN_01d52090 */


void FUN_01d52090(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_01d51dc0();
  dVar2 = (double)FUN_01d51dc0(param_2);
  *(double *)(param_3 + 0xe0) = dVar2 * *(double *)(param_3 + 0x108);
  if (*(double *)(param_3 + 0xd0) <= *(double *)(param_3 + 0xe0) &&
      *(double *)(param_3 + 0xe0) != *(double *)(param_3 + 0xd0)) {
    *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_3 + 0xd0);
  }
  dVar3 = (double)FUN_01d51dc0(dVar2 + *(double *)(param_3 + 0xe0));
  if (0.0001 <= dVar3) {
    dVar2 = (double)FUN_0040af80(-*(double *)(param_3 + 0xf8) *
                                 (dVar2 + *(double *)(param_3 + 0xe0)));
    *(double *)(param_3 + 0xe8) = dVar1 / (1.0 - dVar2);
  }
  else {
    *(undefined8 *)(param_3 + 0xe8) = *(undefined8 *)(param_3 + 0xf0);
  }
  if (*(double *)(param_3 + 0xf0) <= *(double *)(param_3 + 0xe8) &&
      *(double *)(param_3 + 0xe8) != *(double *)(param_3 + 0xf0)) {
    *(undefined8 *)(param_3 + 0xe8) = *(undefined8 *)(param_3 + 0xf0);
  }
  return;
}

