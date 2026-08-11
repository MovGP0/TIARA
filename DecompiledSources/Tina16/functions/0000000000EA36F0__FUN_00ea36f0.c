/* Ghidra address: 00ea36f0 */
/* Ghidra symbol: FUN_00ea36f0 */


void FUN_00ea36f0(longlong param_1,char param_2,char param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  iVar7 = -1;
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
  }
  if (((*(int *)(param_1 + 0x40) < iVar6) &&
      (uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2),
      0x2f < uVar1)) && (uVar1 < 0x3a)) {
    iVar7 = *(ushort *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2) -
            0x30;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    iVar6 = 0;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
    }
    if (((*(int *)(param_1 + 0x40) < iVar6) &&
        (uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2)
        , 0x2f < uVar1)) && (uVar1 < 0x3a)) {
      iVar9 = iVar7 * 10 + (uint)uVar1 + -0x30;
      iVar6 = FUN_00ea4420(*(undefined8 *)(param_1 + 0x60));
      if (iVar9 <= iVar6) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        iVar7 = iVar9;
      }
    }
  }
  else if (param_2 == '\0') {
    if (param_3 == '\0') {
      bVar4 = false;
    }
    else {
      iVar6 = 0;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
      }
      bVar4 = *(int *)(param_1 + 0x40) < iVar6 + -1;
    }
    if ((bVar4) &&
       (*(short *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2) == 0x7b))
    {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2);
      if ((ushort)(sVar2 - 0x30U) < 10) {
        uVar8 = (uint)*(ushort *)
                       (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        while( true ) {
          iVar9 = uVar8 - 0x30;
          iVar6 = 0;
          if (*(longlong *)(param_1 + 0x48) != 0) {
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
          }
          if (((iVar6 <= *(int *)(param_1 + 0x40)) ||
              (uVar1 = *(ushort *)
                        (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2),
              uVar1 < 0x30)) || (0x39 < uVar1)) break;
          uVar8 = iVar9 * 10 +
                  (uint)*(ushort *)
                         (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
      }
      else if ((((ushort)(sVar2 - 0x41U) < 0x1a) || (sVar2 == 0x5f)) ||
              (iVar9 = -1, (ushort)(sVar2 - 0x61U) < 0x1a)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        while( true ) {
          iVar6 = 0;
          if (*(longlong *)(param_1 + 0x48) != 0) {
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
          }
          if ((iVar6 <= *(int *)(param_1 + 0x40)) || (cVar5 = FUN_00ea3230(), cVar5 == '\0')) break;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        iVar6 = 0;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
        }
        iVar9 = iVar7;
        if ((*(int *)(param_1 + 0x40) < iVar6) &&
           (*(short *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2) ==
            0x7d)) {
          FUN_00416dc0(&local_20,*(undefined8 *)(param_1 + 0x48),*(int *)(param_1 + 0x44) + 3,
                       (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44)) + -2);
          iVar9 = FUN_00ea43e0(*(undefined8 *)(param_1 + 0x60),local_20);
        }
      }
      iVar7 = iVar9;
      iVar6 = 0;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
      }
      if ((*(int *)(param_1 + 0x40) < iVar6) &&
         (*(short *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2) == 0x7d
         )) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      else {
        iVar7 = -1;
      }
    }
    else {
      if ((param_3 != '\0') &&
         (*(short *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2) == 0x5f
         )) {
        FUN_00416e20(param_1 + 0x48,*(int *)(param_1 + 0x44) + 1,
                     (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44)) + 1);
        FUN_00416ea0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),param_1 + 0x48,
                     *(int *)(param_1 + 0x44) + 1);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
        iVar6 = 0;
        if (lVar3 != 0) {
          iVar6 = *(int *)(lVar3 + -4);
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar6;
        goto LAB_00ea3c5f;
      }
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 2);
      if (sVar2 == 0x26) {
        iVar7 = 0;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      else {
        if (sVar2 == 0x27) {
          FUN_00416e20(param_1 + 0x48,*(int *)(param_1 + 0x44) + 1,
                       (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44)) + 1);
          FUN_00ea4810(*(undefined8 *)(param_1 + 0x60),&local_30);
          FUN_00416ea0(local_30,param_1 + 0x48,*(int *)(param_1 + 0x44) + 1);
          FUN_00ea47c0(*(undefined8 *)(param_1 + 0x60),&local_38);
          iVar6 = 0;
          if (local_38 != 0) {
            iVar6 = *(int *)(local_38 + -4);
          }
          *(int *)(param_1 + 0x44) =
               (*(int *)(param_1 + 0x44) + iVar6) - *(int *)(*(longlong *)(param_1 + 0x60) + 0x54);
          goto LAB_00ea3c5f;
        }
        if (sVar2 == 0x2b) {
          iVar7 = FUN_00ea4420(*(undefined8 *)(param_1 + 0x60));
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        else if (sVar2 == 0x60) {
          FUN_00416e20(param_1 + 0x48,*(int *)(param_1 + 0x44) + 1,
                       (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44)) + 1);
          FUN_00ea47e0(*(undefined8 *)(param_1 + 0x60),&local_28);
          FUN_00416ea0(local_28,param_1 + 0x48,*(int *)(param_1 + 0x44) + 1);
          *(int *)(param_1 + 0x44) =
               *(int *)(param_1 + 0x44) + *(int *)(*(longlong *)(param_1 + 0x60) + 0x50) + -1;
          goto LAB_00ea3c5f;
        }
      }
    }
  }
  if (iVar7 < 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  else {
    FUN_00ea34e0(param_1,iVar7);
  }
LAB_00ea3c5f:
  FUN_00414560(&local_38,4);
  return;
}

