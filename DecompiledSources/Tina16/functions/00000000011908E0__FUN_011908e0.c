/* Ghidra address: 011908e0 */
/* Ghidra symbol: FUN_011908e0 */


undefined8 FUN_011908e0(longlong *param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  FUN_0118bf60(*param_1);
  iVar5 = *(int *)*param_1;
  local_40 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = (longlong)local_40;
      uVar7 = FUN_01190750(param_1,*(double *)(*param_1 + 0x4b48 + lVar4 * 8) * 6.2831853071796);
      *(undefined8 *)(*param_1 + 0x33960 + lVar4 * 8) = uVar7;
      uVar7 = FUN_0040c850((*(double *)(*param_1 + 0x14550 + lVar4 * 8) -
                           *(double *)(*param_1 + 0x33960 + lVar4 * 8)) *
                           *(double *)(*param_1 + 0x23f58 + lVar4 * 8));
      *(undefined8 *)(*param_1 + 0x43368 + lVar4 * 8) = uVar7;
      local_40 = local_40 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_3c = 0;
  iVar3 = 0;
  iVar5 = *(int *)(*param_1 + 8);
  local_48 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = (longlong)iVar3;
      dVar8 = (double)FUN_01190750(param_1,*(double *)(*param_1 + 0x4b48 + lVar4 * 8) *
                                           6.2831853071796);
      dVar8 = (double)FUN_0040c850((dVar8 - *(double *)(*param_1 + 0x14550 + lVar4 * 8)) *
                                   *(double *)(*param_1 + 0x23f58 + lVar4 * 8));
      lVar4 = (longlong)(iVar3 + 1);
      dVar9 = (double)FUN_01190750(param_1,*(double *)(*param_1 + 0x4b48 + lVar4 * 8) *
                                           6.2831853071796);
      dVar9 = (double)FUN_0040c850((dVar9 - *(double *)(*param_1 + 0x14550 + lVar4 * 8)) *
                                   *(double *)(*param_1 + 0x23f58 + lVar4 * 8));
      iVar2 = 1;
      if ((0 < local_48) || (dVar9 < dVar8)) {
        *(int *)(*param_1 + 0x4c8 + (longlong)local_3c * 4) = iVar3;
        local_3c = local_3c + 1;
        iVar2 = -1;
      }
      iVar6 = *(int *)(*param_1 + 0x14 + (longlong)local_48 * 4);
      local_44 = 2;
      if (1 < iVar6 + -2) {
        iVar6 = iVar6 + -3;
        dVar8 = dVar9;
        do {
          lVar4 = (longlong)(local_44 + iVar3);
          dVar9 = (double)FUN_01190750(param_1,*(double *)(*param_1 + 0x4b48 + lVar4 * 8) *
                                               6.2831853071796);
          dVar9 = (double)FUN_0040c850((dVar9 - *(double *)(*param_1 + 0x14550 + lVar4 * 8)) *
                                       *(double *)(*param_1 + 0x23f58 + lVar4 * 8));
          if (dVar9 <= dVar8) {
            if ((dVar9 < dVar8) && (iVar2 == 1)) {
              *(int *)(*param_1 + 0x4c8 + (longlong)local_3c * 4) = local_44 + iVar3 + -1;
              local_3c = local_3c + 1;
              iVar2 = -1;
            }
          }
          else {
            iVar2 = 1;
          }
          local_44 = local_44 + 1;
          iVar6 = iVar6 + -1;
          dVar8 = dVar9;
        } while (iVar6 != 0);
      }
      iVar2 = *(int *)(*param_1 + 0x14 + (longlong)local_48 * 4) + iVar3;
      lVar4 = (longlong)(iVar2 + -1);
      dVar8 = (double)FUN_01190750(param_1,*(double *)(*param_1 + 0x4b48 + lVar4 * 8) *
                                           6.2831853071796);
      dVar8 = (double)FUN_0040c850((dVar8 - *(double *)(*param_1 + 0x14550 + lVar4 * 8)) *
                                   *(double *)(*param_1 + 0x23f58 + lVar4 * 8));
      if ((local_48 < *(int *)(*param_1 + 8) + -1) || (dVar9 < dVar8)) {
        *(int *)(*param_1 + 0x4c8 + (longlong)local_3c * 4) = iVar2 + -1;
        local_3c = local_3c + 1;
      }
      iVar3 = iVar3 + *(int *)(*param_1 + 0x14 + (longlong)local_48 * 4);
      local_48 = local_48 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = local_3c - *(int *)(*param_1 + 4);
  if ((0 < iVar5) && (-1 < iVar5 + -1)) {
    do {
      iVar3 = 0;
      dVar8 = *(double *)(*param_1 + 0x43368 + (longlong)*(int *)(*param_1 + 0x4c8) * 8);
      iVar2 = local_3c + -1;
      local_40 = 1;
      if (0 < iVar2) {
        do {
          lVar4 = (longlong)*(int *)(*param_1 + 0x4c8 + (longlong)local_40 * 4);
          pdVar1 = (double *)(*param_1 + 0x43368 + lVar4 * 8);
          if (*pdVar1 <= dVar8 && dVar8 != *pdVar1) {
            dVar8 = *(double *)(*param_1 + 0x43368 + lVar4 * 8);
            iVar3 = local_40;
          }
          local_40 = local_40 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (iVar3 <= local_3c + -2) {
        iVar2 = ((local_3c + -2) - iVar3) + 1;
        local_40 = iVar3;
        do {
          *(undefined4 *)(*param_1 + 0x4c8 + (longlong)local_40 * 4) =
               *(undefined4 *)(*param_1 + 0x4c8 + (longlong)(local_40 + 1) * 4);
          local_40 = local_40 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + -1;
      local_3c = local_3c + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

