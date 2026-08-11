/* Ghidra address: 016f6940 */
/* Ghidra symbol: FUN_016f6940 */


void FUN_016f6940(longlong param_1,byte param_2)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 in_RAX;
  double *pdVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  if (param_2 < 8) {
    bVar12 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_2 & 0x1f) & 0x22U) != 0;
  }
  else {
    bVar12 = false;
  }
  if (bVar12) {
    iVar10 = *(int *)(param_1 + 0x2d8);
    iVar9 = 1;
    if (0 < iVar10) {
      do {
        lVar11 = (longlong)iVar9;
        plVar2 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
        sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
        if ((sVar4 == 0x53) ||
           (plVar2 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128),
           sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar4 == 0x54)) {
          pdVar8 = (double *)
                   FUN_01b05ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8),1,
                                0,local_39,&local_3a,&local_3b);
          dVar1 = *pdVar8;
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
          iVar5 = (**(code **)(*plVar2 + 0x210))(plVar2,0);
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
          (**(code **)(*plVar2 + 0x210))(plVar2,1);
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
          sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if (sVar4 == 0x54) {
            plVar2 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
            iVar6 = (**(code **)(*plVar2 + 0x210))(plVar2,1);
          }
          else {
            iVar6 = 0;
          }
          *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 8) =
               *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 8) + dVar1;
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x2d8);
    iVar9 = 1;
    if (0 < iVar10) {
      do {
        if (param_2 == 5) {
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar9 * 8) +
                    0x128);
          sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if ((sVar4 != 0x25) &&
             (plVar2 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar9 * 8) +
                        0x128), sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar4 != 0x26))
          goto LAB_016f6b82;
        }
        else {
LAB_016f6b82:
          lVar11 = (longlong)iVar9;
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
          sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if ((sVar4 == 0x51) ||
             (plVar2 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128),
             sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar4 == 0x52)) {
            pdVar8 = (double *)
                     FUN_01b05ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8),
                                  1,0,local_39,&local_3a,&local_3b);
            dVar1 = *pdVar8;
            plVar2 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
            iVar5 = (**(code **)(*plVar2 + 0x210))(plVar2,0);
            plVar2 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
            sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
            if (sVar4 == 0x52) {
              plVar2 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar11 * 8) + 0x128);
              iVar6 = (**(code **)(*plVar2 + 0x210))(plVar2,1);
            }
            else {
              iVar6 = 0;
            }
            *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 8) =
                 *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 8) + dVar1;
          }
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    FUN_01b08890(param_1,0x20);
    FUN_016f6430(param_1,param_2,0);
    FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128));
    FUN_00409a70(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1c0),
                 (longlong)(*(int *)(param_1 + 0x31c) * 8));
    cVar3 = FUN_01b07dd0(param_1);
    if (cVar3 != '\0') {
      FUN_014c8a30(param_1);
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x110) + 0xf5) == '\0') ||
       (*(char *)(param_1 + 0xf0) == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    FUN_01664460(*(undefined8 *)(param_1 + 0x110),uVar7);
  }
  return;
}

