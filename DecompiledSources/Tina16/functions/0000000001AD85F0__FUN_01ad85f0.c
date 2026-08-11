/* Ghidra address: 01ad85f0 */
/* Ghidra symbol: FUN_01ad85f0 */


void FUN_01ad85f0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong local_80 [10];
  
  cVar1 = FUN_01ad1090(param_1,param_2,local_80);
  if (cVar1 != '\0') {
    if (param_3 != '\0') {
      FUN_01cd7300(param_2);
    }
    uVar4 = FUN_01cd6670(param_2);
    if ((byte)uVar4 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x51U) != 0
      ;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      uVar5 = (ulonglong)*(byte *)(local_80[0] + 0x58);
      if (uVar5 < 6) {
        if (uVar5 == 5) {
          *(undefined8 *)(param_2 + 0xb8) = 0xbff0000000000000;
          *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        }
        else if (uVar5 - 1 == 0xffffffffffffffff) {
          dVar11 = 0.0;
          dVar12 = 0.0;
          if (0 < *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10)) {
            uVar4 = FUN_004aeac0(*(longlong *)(param_2 + 0xf8),0);
            dVar11 = (double)FUN_01ab2a30(uVar4);
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
            dVar11 = dVar11 + *(double *)(lVar6 + 0xf0);
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
            dVar12 = (double)FUN_01ab2a60(uVar4);
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
            dVar12 = dVar12 + *(double *)(lVar6 + 0xf0);
          }
          iVar9 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
          iVar8 = 2;
          if (1 < iVar9) {
            iVar9 = iVar9 + -1;
            do {
              iVar7 = iVar8 + -1;
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              dVar13 = (double)FUN_01ab2a30(uVar4);
              lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              dVar11 = (double)FUN_00b90650(dVar11,dVar13 + *(double *)(lVar6 + 0xf0));
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              dVar13 = (double)FUN_01ab2a60(uVar4);
              lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              dVar12 = (double)FUN_00b90620(dVar12,dVar13 + *(double *)(lVar6 + 0xf0));
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          *(double *)(param_2 + 0xb8) = dVar11;
          *(double *)(param_2 + 0xc0) = dVar12;
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          uVar2 = FUN_01ccdde0(param_2);
          uVar3 = FUN_01ccde00(param_2);
          FUN_01cd43b0(param_2,uVar2,uVar3);
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        }
        else if (uVar5 - 1 < 4) {
          lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
          uVar4 = *(undefined8 *)(lVar6 + 0xb8);
          lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
          uVar15 = *(undefined8 *)(lVar6 + 0xc0);
          iVar9 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
          iVar8 = 2;
          if (1 < iVar9) {
            iVar9 = iVar9 + -1;
            do {
              lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
              uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(lVar6 + 0xb8));
              lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
              uVar15 = FUN_00b90620(uVar15,*(undefined8 *)(lVar6 + 0xc0));
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          *(undefined8 *)(param_2 + 0xb8) = uVar4;
          *(undefined8 *)(param_2 + 0xc0) = uVar15;
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          uVar2 = FUN_01ccdde0(param_2);
          uVar3 = FUN_01ccde00(param_2);
          FUN_01cd43b0(param_2,uVar2,uVar3);
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        }
      }
      else if (uVar5 == 6) {
        uVar14 = 0;
        uVar19 = 0;
        iVar9 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
        iVar8 = 1;
        uVar5 = 0;
        if (0 < iVar9) {
          do {
            iVar7 = iVar8 + -1;
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            FUN_01ab2a30(uVar4);
            uVar5 = FUN_0040c850();
            uVar15 = FUN_00b90650(uVar14,uVar5 ^ 0x8000000000000000);
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            FUN_01ab2a60(uVar4);
            uVar5 = FUN_0040c850();
            uVar4 = FUN_00b90650(uVar15,uVar5 ^ 0x8000000000000000);
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            uVar5 = FUN_0040c850(*(undefined8 *)(lVar6 + 0x90));
            uVar4 = FUN_00b90650(uVar4,uVar5 ^ 0x8000000000000000);
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            uVar5 = FUN_0040c850(*(undefined8 *)(lVar6 + 0x98));
            uVar14 = FUN_00b90650(uVar4,uVar5 ^ 0x8000000000000000);
            uVar19 = uVar14 ^ 0x8000000000000000;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + -1;
            uVar5 = uVar14;
          } while (iVar9 != 0);
        }
        *(ulonglong *)(param_2 + 0xb8) = uVar5;
        *(ulonglong *)(param_2 + 0xc0) = uVar19;
        *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
      }
      else if (uVar5 == 7) {
        uVar4 = 0;
        uVar15 = 0;
        uVar20 = 0;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        iVar9 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))
                          (*(longlong **)(param_1 + 0xe0));
        iVar8 = 1;
        if (0 < iVar9) {
          do {
            uVar15 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                               (*(longlong **)(param_1 + 0xe0),iVar8 + -1);
            cVar1 = FUN_004113d0(uVar15,&LAB_00f12330);
            uVar15 = uVar4;
            uVar16 = uVar20;
            if (cVar1 != '\0') {
              uVar15 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                 (*(longlong **)(param_1 + 0xe0),iVar8 + -1);
              lVar6 = FUN_004113f0(uVar15,&LAB_00f12330);
              uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(lVar6 + 0xa8));
              uVar15 = FUN_00b90650(uVar4,*(double *)(lVar6 + 0xa8) + *(double *)(lVar6 + 0xb8));
              uVar4 = FUN_00b90620(uVar20,*(undefined8 *)(lVar6 + 0xa8));
              uVar16 = FUN_00b90620(uVar4,*(double *)(lVar6 + 0xa8) + *(double *)(lVar6 + 0xb8));
              uVar4 = FUN_00b90650(uVar17,*(undefined8 *)(lVar6 + 0xb0));
              uVar17 = FUN_00b90650(uVar4,*(double *)(lVar6 + 0xb0) + *(double *)(lVar6 + 0xc0));
              uVar4 = FUN_00b90620(uVar18,*(undefined8 *)(lVar6 + 0xb0));
              uVar18 = FUN_00b90620(uVar4,*(double *)(lVar6 + 0xb0) + *(double *)(lVar6 + 0xc0));
            }
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + -1;
            uVar4 = uVar15;
            uVar20 = uVar16;
          } while (iVar9 != 0);
        }
        *(undefined8 *)(param_2 + 0xb8) = uVar15;
        *(undefined8 *)(param_2 + 0xc0) = uVar16;
        *(double *)(param_2 + 0xb8) =
             *(double *)(param_2 + 0xb8) -
             (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) * 0.1;
        *(double *)(param_2 + 0xc0) =
             *(double *)(param_2 + 0xc0) +
             (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) * 0.1;
        *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        uVar2 = FUN_01ccdde0(param_2);
        uVar3 = FUN_01ccde00(param_2);
        FUN_01cd43b0(param_2,uVar2,uVar3);
        *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
      }
    }
    else {
      uVar4 = FUN_01cd6670(param_2);
      if ((byte)uVar4 < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0xa6U) !=
                 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        uVar5 = (ulonglong)*(byte *)(local_80[0] + 0x58);
        if (uVar5 < 6) {
          if (uVar5 == 5) {
            *(undefined8 *)(param_2 + 0xb8) = 0xbff0000000000000;
            *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          }
          else if (uVar5 == 0) {
            uVar4 = 0;
            uVar15 = 0;
            if (0 < *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10)) {
              lVar6 = FUN_004aeac0(*(longlong *)(param_2 + 0xf8),0);
              uVar4 = *(undefined8 *)(lVar6 + 0x90);
              lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
              uVar15 = *(undefined8 *)(lVar6 + 0x98);
            }
            iVar9 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
            iVar8 = 2;
            if (1 < iVar9) {
              iVar9 = iVar9 + -1;
              do {
                lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
                uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(lVar6 + 0x90));
                lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
                uVar15 = FUN_00b90620(uVar15,*(undefined8 *)(lVar6 + 0x98));
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            *(undefined8 *)(param_2 + 0xb8) = uVar4;
            *(undefined8 *)(param_2 + 0xc0) = uVar15;
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
            uVar2 = FUN_01ccddc0(param_2);
            uVar3 = FUN_01ccddd0(param_2);
            FUN_01cd43b0(param_2,uVar2,uVar3);
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          }
          else if (uVar5 == 2) {
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
            uVar4 = *(undefined8 *)(lVar6 + 200);
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
            uVar15 = *(undefined8 *)(lVar6 + 0xd0);
            iVar9 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
            iVar8 = 2;
            if (1 < iVar9) {
              iVar9 = iVar9 + -1;
              do {
                lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
                uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(lVar6 + 200));
                lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
                uVar15 = FUN_00b90620(uVar15,*(undefined8 *)(lVar6 + 0xd0));
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            *(undefined8 *)(param_2 + 0xb8) = uVar4;
            *(undefined8 *)(param_2 + 0xc0) = uVar15;
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
            uVar2 = FUN_01ccddc0(param_2);
            uVar3 = FUN_01ccddd0(param_2);
            FUN_01cd43b0(param_2,uVar2,uVar3);
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          }
          else if (uVar5 - 3 < 2) {
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
            uVar4 = *(undefined8 *)(lVar6 + 200);
            lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
            uVar15 = *(undefined8 *)(lVar6 + 0xd0);
            iVar9 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
            iVar8 = 2;
            if (1 < iVar9) {
              iVar9 = iVar9 + -1;
              do {
                lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
                uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(lVar6 + 200));
                lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar8 + -1);
                uVar15 = FUN_00b90620(uVar15,*(undefined8 *)(lVar6 + 0xd0));
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            *(undefined8 *)(param_2 + 0xb8) = uVar4;
            *(undefined8 *)(param_2 + 0xc0) = uVar15;
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
            uVar2 = FUN_01ccddc0(param_2);
            uVar3 = FUN_01ccddd0(param_2);
            FUN_01cd43b0(param_2,uVar2,uVar3);
            *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
            *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          }
        }
        else if (uVar5 == 6) {
          uVar14 = 0;
          uVar19 = 0;
          iVar9 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
          iVar8 = 1;
          uVar5 = 0;
          if (0 < iVar9) {
            do {
              iVar7 = iVar8 + -1;
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              FUN_01ab2a30(uVar4);
              uVar5 = FUN_0040c850();
              uVar15 = FUN_00b90650(uVar14,uVar5 ^ 0x8000000000000000);
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              FUN_01ab2a60(uVar4);
              uVar5 = FUN_0040c850();
              uVar4 = FUN_00b90650(uVar15,uVar5 ^ 0x8000000000000000);
              lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              uVar5 = FUN_0040c850(*(undefined8 *)(lVar6 + 0x90));
              uVar4 = FUN_00b90650(uVar4,uVar5 ^ 0x8000000000000000);
              lVar6 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
              uVar5 = FUN_0040c850(*(undefined8 *)(lVar6 + 0x98));
              uVar14 = FUN_00b90650(uVar4,uVar5 ^ 0x8000000000000000);
              uVar19 = uVar14 ^ 0x8000000000000000;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + -1;
              uVar5 = uVar14;
            } while (iVar9 != 0);
          }
          *(ulonglong *)(param_2 + 0xb8) = uVar5;
          *(ulonglong *)(param_2 + 0xc0) = uVar19;
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        }
        else if (uVar5 == 7) {
          uVar17 = 0;
          uVar18 = 0;
          uVar4 = 0;
          uVar15 = 0;
          uVar20 = 0;
          uVar16 = 0;
          iVar9 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))
                            (*(longlong **)(param_1 + 0xe0));
          iVar8 = 1;
          if (0 < iVar9) {
            do {
              uVar15 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                 (*(longlong **)(param_1 + 0xe0),iVar8 + -1);
              cVar1 = FUN_004113d0(uVar15,&LAB_00f12330);
              uVar15 = uVar4;
              uVar16 = uVar20;
              if (cVar1 != '\0') {
                uVar15 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                   (*(longlong **)(param_1 + 0xe0),iVar8 + -1);
                lVar6 = FUN_004113f0(uVar15,&LAB_00f12330);
                uVar15 = FUN_00b90650(uVar17,*(undefined8 *)(lVar6 + 0xa8));
                uVar17 = FUN_00b90650(uVar15,*(double *)(lVar6 + 0xa8) + *(double *)(lVar6 + 0xb8));
                uVar15 = FUN_00b90620(uVar18,*(undefined8 *)(lVar6 + 0xa8));
                uVar18 = FUN_00b90620(uVar15,*(double *)(lVar6 + 0xa8) + *(double *)(lVar6 + 0xb8));
                uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(lVar6 + 0xb0));
                uVar15 = FUN_00b90650(uVar4,*(double *)(lVar6 + 0xb0) + *(double *)(lVar6 + 0xc0));
                uVar4 = FUN_00b90620(uVar20,*(undefined8 *)(lVar6 + 0xb0));
                uVar16 = FUN_00b90620(uVar4,*(double *)(lVar6 + 0xb0) + *(double *)(lVar6 + 0xc0));
              }
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + -1;
              uVar4 = uVar15;
              uVar20 = uVar16;
            } while (iVar9 != 0);
          }
          *(undefined8 *)(param_2 + 0xb8) = uVar15;
          *(undefined8 *)(param_2 + 0xc0) = uVar16;
          *(double *)(param_2 + 0xb8) =
               *(double *)(param_2 + 0xb8) -
               (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) * 0.1;
          *(double *)(param_2 + 0xc0) =
               *(double *)(param_2 + 0xc0) +
               (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) * 0.1;
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          uVar2 = FUN_01ccdde0(param_2);
          uVar3 = FUN_01ccde00(param_2);
          FUN_01cd43b0(param_2,uVar2,uVar3);
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        }
      }
    }
  }
  return;
}

