/* Ghidra address: 0119af40 */
/* Ghidra symbol: FUN_0119af40 */


int FUN_0119af40(longlong param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610();
  iVar2 = 0;
  if (local_res8[0] != 0) {
    iVar2 = *(int *)(local_res8[0] + -4);
  }
  iVar1 = 0;
  iVar3 = 0;
  while ((iVar1 < iVar2 && (iVar3 != param_2))) {
    if (*(short *)(local_res8[0] + -2 + (longlong)(iVar1 + 1) * 2) == param_3) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + 1;
  }
  FUN_00414480(local_res8);
  return iVar1;
}

