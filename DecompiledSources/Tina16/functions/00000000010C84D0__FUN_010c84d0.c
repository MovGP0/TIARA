/* Ghidra address: 010c84d0 */
/* Ghidra symbol: FUN_010c84d0 */


void FUN_010c84d0(double *param_1,double *param_2,undefined1 *param_3)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  double local_88 [6];
  double local_58 [7];
  
  pdVar3 = local_58;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_1;
    param_1 = param_1 + 1;
    pdVar3 = pdVar3 + 1;
  }
  pdVar3 = local_88;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar3 = *param_2;
    param_2 = param_2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  FUN_010c7a40(param_3,local_58[1] - local_88[1]);
  cVar1 = FUN_010c7d50(local_58,local_88);
  if (cVar1 == '\0') {
    *param_3 = 1;
    *(double *)(param_3 + 0x10) = local_58[2] - local_88[2];
    FUN_010c7a80(param_3);
  }
  return;
}

