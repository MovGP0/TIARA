/* Ghidra address: 01c27630 */
/* Ghidra symbol: FUN_01c27630 */


int FUN_01c27630(longlong param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610();
  iVar2 = *param_2;
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  while ((iVar2 <= iVar3 &&
         ((sVar1 = *(short *)(local_res8[0] + -2 + (longlong)iVar2 * 2), sVar1 == 9 ||
          (sVar1 == 0x20))))) {
    iVar2 = iVar2 + 1;
  }
  *param_2 = iVar2;
  for (; iVar2 <= iVar3; iVar2 = iVar2 + 1) {
    sVar1 = *(short *)(local_res8[0] + -2 + (longlong)iVar2 * 2);
    if ((sVar1 == 9) || (sVar1 == 0x20)) break;
  }
  iVar3 = *param_2;
  FUN_00414480(local_res8);
  return iVar2 - iVar3;
}

