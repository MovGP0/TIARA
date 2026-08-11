/* Ghidra address: 015ef8b0 */
/* Ghidra symbol: FUN_015ef8b0 */


void FUN_015ef8b0(longlong param_1,int *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  if (0 < iVar3) {
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    if (iVar3 < *param_2) {
      sVar2 = 0xd;
    }
    else {
      sVar2 = *(short *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
    }
    while( true ) {
      if ((sVar2 == 0x20) || (sVar2 == 9)) {
        iVar3 = 0;
        if (local_res8[0] != 0) {
          iVar3 = *(int *)(local_res8[0] + -4);
        }
        bVar1 = *param_2 <= iVar3;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      *param_2 = *param_2 + 1;
      iVar3 = 0;
      if (local_res8[0] != 0) {
        iVar3 = *(int *)(local_res8[0] + -4);
      }
      if (iVar3 < *param_2) {
        sVar2 = 0xd;
      }
      else {
        sVar2 = *(short *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
      }
    }
  }
  FUN_00414480(local_res8);
  return;
}

