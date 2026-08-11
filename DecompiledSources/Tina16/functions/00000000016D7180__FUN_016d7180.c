/* Ghidra address: 016d7180 */
/* Ghidra symbol: FUN_016d7180 */


void FUN_016d7180(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  wchar_t *local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  char *local_50 [5];
  
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80[0] = (wchar_t *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  iVar8 = *(int *)(param_1 + 0x2d8);
  local_ac = 1;
  if (0 < iVar8) {
    do {
      lVar7 = (longlong)local_ac;
      plVar1 = *(longlong **)
                (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) + 0x128);
      sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((((sVar3 == 0xf) ||
            (plVar1 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) + 0x128),
            sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x10)) ||
           (plVar1 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) + 0x128),
           sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xd9)) ||
          ((plVar1 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) + 0x128),
           sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xda ||
           (plVar1 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) + 0x128),
           sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa4)))) ||
         ((plVar1 = *(longlong **)
                     (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) + 0x128),
          sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa6 ||
          (plVar1 = *(longlong **)
                     (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) + 0x128),
          sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa7)))) {
        local_50[0] = *(char **)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8) +
                                0x48);
        FUN_00b909d0(local_50,0x10);
        if (*local_50[0] == '\b') {
          FUN_010d75a0(*(undefined8 *)(param_1 + 0xa0),param_2,*(undefined8 *)(local_50[0] + 9),
                       local_50[0] + 1,&local_58,param_3);
          if (local_58 != 0) {
            FUN_01b05000(local_58,*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar7 * 8)
                                     + 0x128) + 0x98));
          }
          lVar7 = *(longlong *)(local_50[0] + 1);
          *(undefined8 *)(lVar7 + 0x640) = *(undefined8 *)(local_50[0] + 0x11);
          *(undefined4 *)(lVar7 + 0x648) = *(undefined4 *)(local_50[0] + 0x19);
          *(char *)(lVar7 + 0x64c) = local_50[0][0x1d];
        }
        else {
          cVar2 = *local_50[0];
          if ((cVar2 == '\t') && (*(longlong *)(local_50[0] + 0x11) != 0)) {
            FUN_016d7170(param_1,local_50[0] + 1,&local_58);
            if (local_58 != 0) {
              FUN_01b05000(local_58,*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0x2b0) + -8 +
                                         (longlong)local_ac * 8) + 0x128) + 0x98));
            }
          }
          else if (cVar2 == '\n') {
            if ((local_50[0][1] & 0x40U) == 0) {
              FUN_004167d0(local_80,*(undefined8 *)(local_50[0] + 2));
              if (local_80[0] == L"<embedded>") {
                bVar10 = true;
              }
              else if (local_80[0] == (wchar_t *)0x0) {
                bVar10 = false;
              }
              else {
                iVar4 = FUN_0043e420(local_80[0],L"<embedded>");
                bVar10 = iVar4 == 0;
              }
              bVar10 = !bVar10;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              FUN_00414b50(&local_70,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x360));
              FUN_00441640(&local_88,local_70);
              FUN_004167d0(&local_90,*(undefined8 *)(local_50[0] + 2));
              FUN_00416ad0(&local_88,local_90);
              FUN_00441b80(&local_60,local_88);
            }
            else {
              FUN_004167d0(&local_60,*(undefined8 *)(local_50[0] + 2));
            }
            cVar2 = FUN_00440a20(local_60,1);
            if ((cVar2 == '\0') && (*(longlong *)(local_50[0] + 0xe) == 0)) {
              local_a8 = local_60;
              local_a0 = 0x11;
              FUN_00442f70(&local_98,L"Sound file %s not found!",&local_a8,0);
              FUN_01b05000(local_98,0);
            }
            else {
              uVar5 = FUN_016d6430(*(undefined8 *)(param_1 + 0x1360),local_60,
                                   *(undefined8 *)(local_50[0] + 0xe));
              *(undefined4 *)(local_50[0] + 10) = uVar5;
            }
          }
          else if (cVar2 == '\v') {
            cVar2 = FUN_01b23030();
            if (cVar2 != '\0') {
              FUN_01b05000(L"Noise signal is allowed in the Industrial edition only.",0);
            }
            dVar14 = 3.2 / (*(double *)(local_50[0] + 0xb) * 6.283185307179586);
            FUN_00b90650(*(double *)(param_1 + 0x388) / dVar14,0x412e848000000000);
            iVar4 = FUN_0040c840();
            *(int *)(local_50[0] + 0x13) = iVar4 + 1;
            puVar6 = (undefined8 *)FUN_00409570((longlong)((iVar4 + 1) * 0x10));
            *(undefined8 **)(local_50[0] + 0x17) = puVar6;
            dVar15 = 0.0;
            *puVar6 = 0;
            puVar6[1] = 0;
            iVar4 = 2;
            if (1 < *(int *)(local_50[0] + 0x13)) {
              iVar9 = *(int *)(local_50[0] + 0x13) + -1;
              do {
                lVar7 = (longlong)iVar4;
                *(double *)(*(longlong *)(local_50[0] + 0x17) + -0x10 + lVar7 * 0x10) =
                     (double)(iVar4 + -1) * dVar14;
                uVar11 = FUN_00409eb0();
                *(undefined8 *)(*(longlong *)(local_50[0] + 0x17) + -8 + lVar7 * 0x10) = uVar11;
                dVar15 = dVar15 + *(double *)(*(longlong *)(local_50[0] + 0x17) + -8 + lVar7 * 0x10)
                ;
                iVar4 = iVar4 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            iVar4 = *(int *)(local_50[0] + 0x13);
            dVar14 = (double)iVar4;
            dVar12 = 0.0;
            iVar9 = 1;
            if (0 < iVar4) {
              do {
                dVar13 = *(double *)
                          (*(longlong *)(local_50[0] + 0x17) + -8 + (longlong)iVar9 * 0x10) -
                         dVar15 / dVar14;
                dVar12 = dVar12 + dVar13 * dVar13;
                iVar9 = iVar9 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            dVar12 = (double)FUN_0040c760(dVar12 / (double)*(int *)(local_50[0] + 0x13));
            iVar4 = 2;
            if (1 < *(int *)(local_50[0] + 0x13)) {
              iVar9 = *(int *)(local_50[0] + 0x13) + -1;
              do {
                *(double *)(*(longlong *)(local_50[0] + 0x17) + -8 + (longlong)iVar4 * 0x10) =
                     *(double *)(local_50[0] + 3) *
                     ((*(double *)(*(longlong *)(local_50[0] + 0x17) + -8 + (longlong)iVar4 * 0x10)
                      - dVar15 / dVar14) / dVar12);
                iVar4 = iVar4 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
      }
      local_ac = local_ac + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar5 = FUN_016d65a0(*(undefined8 *)(param_1 + 0x1360));
    lVar7 = *(longlong *)(param_1 + 0xb0);
    *(undefined4 *)(lVar7 + 0x4c) = uVar5;
    *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(param_1 + 0x7b0);
  }
  FUN_00414560(&local_98,4);
  FUN_00414560(&local_70,4);
  return;
}

