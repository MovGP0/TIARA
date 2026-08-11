/* Ghidra address: 016b9450 */
/* Ghidra symbol: FUN_016b9450 */


undefined8 FUN_016b9450(undefined8 param_1,double param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  undefined1 local_148 [256];
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  dVar9 = (double)FUN_0040c850(param_2);
  if (((1e-15 <= dVar9) && (dVar9 = (double)FUN_0040c850(param_2), dVar9 < 1e+15)) ||
     (param_2 == 0.0)) {
    FUN_016b93a0(&local_30,param_2);
    FUN_00416880(local_40,local_30);
    uVar5 = local_40[0];
    iVar2 = FUN_004170c0(&DAT_016b973c,local_40[0],1);
    iVar2 = iVar2 + -1;
    if (iVar2 == -1) {
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = *(int *)(local_30 + -4);
      }
      bVar1 = *(char *)(local_30 + -1 + (longlong)iVar2) - 0x30;
      if (bVar1 < 0x10) {
        bVar8 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) << (bVar1 & 0x1f) & 0x3ffU) != 0;
      }
      else {
        bVar8 = false;
      }
      if (!bVar8) {
        iVar2 = iVar2 + -1;
      }
    }
    FUN_00416880(&local_48,local_30);
    iVar3 = FUN_004170c0(&DAT_016b9750,local_48,1);
    if ((0 < iVar3) && (iVar7 = iVar2, iVar3 < iVar2)) {
      for (; (0 < iVar7 && (*(char *)(local_30 + -1 + (longlong)iVar7) == '0')); iVar7 = iVar7 + -1)
      {
      }
      if ((0 < iVar7) && (*(char *)(local_30 + -1 + (longlong)iVar7) == '.')) {
        iVar7 = iVar7 + -1;
      }
      if (iVar7 < iVar2 + -1) {
        FUN_00415b50(&local_30,iVar7 + 1,iVar2 - iVar7);
      }
    }
    iVar2 = 0;
    if (local_30 != 0) {
      iVar2 = *(int *)(local_30 + -4);
    }
    iVar3 = 1;
    if (0 < iVar2) {
      do {
        cVar6 = *(char *)(local_30 + -1 + (longlong)iVar3);
        if ((byte)(cVar6 + 0xa0U) < 0x20 && (1 << (cVar6 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
          cVar6 = cVar6 + -0x20;
        }
        lVar4 = FUN_00414df0(&local_30);
        *(char *)(lVar4 + -1 + (longlong)iVar3) = cVar6;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    FUN_004100d0(local_148,param_2);
    FUN_004154b0(&local_30,local_148,0);
  }
  FUN_00414bf0(param_1,local_30);
  FUN_00414560(&local_48,2);
  FUN_004144d0(&local_30);
  return param_1;
}

