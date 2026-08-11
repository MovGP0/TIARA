/* Ghidra address: 00410100 */
/* Ghidra symbol: FUN_00410100 */


double FUN_00410100(longlong param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  longlong local_res8 [4];
  double local_30;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_30 = 0.0;
  *param_2 = 0;
  if (local_res8[0] == 0) {
    *param_2 = *param_2 + 1;
  }
  else {
    bVar6 = false;
    bVar7 = false;
    while (*(short *)(local_res8[0] + -2 + (longlong)(*param_2 + 1) * 2) == 0x20) {
      *param_2 = *param_2 + 1;
    }
    sVar1 = *(short *)(local_res8[0] + -2 + (longlong)(*param_2 + 1) * 2);
    if ((sVar1 == 0x2b) || (bVar2 = false, sVar1 == 0x2d)) {
      *param_2 = *param_2 + 1;
      bVar6 = sVar1 == 0x2d;
      bVar2 = false;
    }
    while( true ) {
      uVar5 = *(ushort *)(local_res8[0] + -2 + (longlong)(*param_2 + 1) * 2);
      *param_2 = *param_2 + 1;
      if ((uVar5 < 0x30) || (0x39 < uVar5)) break;
      local_30 = (local_30 * 10.0 + (double)uVar5) - 48.0;
      bVar2 = true;
    }
    iVar3 = 0;
    if (uVar5 == 0x2e) {
      while( true ) {
        uVar5 = *(ushort *)(local_res8[0] + -2 + (longlong)(*param_2 + 1) * 2);
        *param_2 = *param_2 + 1;
        if ((uVar5 < 0x30) || (0x39 < uVar5)) break;
        local_30 = (local_30 * 10.0 + (double)uVar5) - 48.0;
        iVar3 = iVar3 + -1;
        bVar2 = true;
      }
      if ((!bVar2) && (uVar5 == 0)) {
        *param_2 = *param_2 + -1;
        bVar2 = true;
      }
    }
    iVar4 = 0;
    if ((uVar5 | 0x20) == 0x65) {
      bVar2 = false;
      sVar1 = *(short *)(local_res8[0] + -2 + (longlong)(*param_2 + 1) * 2);
      if ((sVar1 == 0x2b) || (sVar1 == 0x2d)) {
        *param_2 = *param_2 + 1;
        bVar7 = sVar1 == 0x2d;
      }
      while( true ) {
        uVar5 = *(ushort *)(local_res8[0] + -2 + (longlong)(*param_2 + 1) * 2);
        *param_2 = *param_2 + 1;
        if ((uVar5 < 0x30) || (0x39 < uVar5)) break;
        iVar4 = iVar4 * 10 + (uint)uVar5 + -0x30;
        bVar2 = true;
      }
      if (bVar7) {
        iVar4 = -iVar4;
      }
    }
    if (iVar3 + iVar4 != 0) {
      local_30 = (double)FUN_00410440(local_30,iVar3 + iVar4);
    }
    if (bVar6) {
      local_30 = -local_30;
    }
    if ((bVar2) && (uVar5 == 0)) {
      *param_2 = 0;
    }
  }
  FUN_00414480(local_res8);
  return local_30;
}

