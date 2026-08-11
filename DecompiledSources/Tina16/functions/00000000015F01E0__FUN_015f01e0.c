/* Ghidra address: 015f01e0 */
/* Ghidra symbol: FUN_015f01e0 */


void FUN_015f01e0(longlong param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  if (iVar3 < *param_2) {
    uVar4 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0xd);
  }
  else {
    uVar4 = (ulonglong)*(ushort *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
  }
  do {
    cVar2 = FUN_00c535d0(uVar4 & 0xffffffff);
    if (cVar2 == '\0') {
      cVar2 = FUN_00c53600(uVar4 & 0xffffffff);
      if (cVar2 != '\0') goto LAB_015f028d;
      iVar3 = 0;
      if (local_res8[0] != 0) {
        iVar3 = *(int *)(local_res8[0] + -4);
      }
      bVar1 = *param_2 <= iVar3;
    }
    else {
LAB_015f028d:
      bVar1 = false;
    }
    if (!bVar1) {
      FUN_00414480(local_res8);
      return;
    }
    *param_2 = *param_2 + 1;
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    if (iVar3 < *param_2) {
      uVar4 = CONCAT62((int6)(uVar4 >> 0x10),0xd);
    }
    else {
      uVar4 = (ulonglong)*(ushort *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
    }
  } while( true );
}

