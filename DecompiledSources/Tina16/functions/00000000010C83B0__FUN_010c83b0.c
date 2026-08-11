/* Ghidra address: 010c83b0 */
/* Ghidra symbol: FUN_010c83b0 */


void FUN_010c83b0(double *param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double local_88 [6];
  double local_58 [7];
  
  pdVar2 = local_58;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = pdVar2 + 1;
  }
  pdVar2 = local_88;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar2 = *param_2;
    param_2 = param_2 + 1;
    pdVar2 = pdVar2 + 1;
  }
  FUN_010c7a40(param_3,0x3ff0000000000000);
  dVar3 = (double)FUN_0040c850(local_58[1] - 1.0);
  dVar4 = (double)FUN_0040c850(local_88[1] - 1.0);
  if (1e-30 <= dVar3 && 1e-30 <= dVar4) {
    *(undefined8 *)(param_3 + 8) = 0;
  }
  return;
}

