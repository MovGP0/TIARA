/* Ghidra address: 00dd2e20 */
/* Ghidra symbol: FUN_00dd2e20 */


double FUN_00dd2e20(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4,
                   byte param_5)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_88;
  double local_80 [10];
  
  dVar8 = (double)FUN_00dd07b0(*(undefined1 *)(param_1 + 6));
  dVar11 = 1.0 / (*(double *)(&DAT_0202dae0 + (ulonglong)*(byte *)(param_1 + 6) * 8) * 2.0);
  uVar4 = FUN_00dd0a10(*(byte *)(param_1 + 6),&local_88,local_80,0);
  if (param_5 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_5 & 0x1f) & 0xa2U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(bool *)(param_1 + 0x20) = dVar8 < param_4;
    *(bool *)(param_1 + 0x21) = dVar8 < param_4;
    *(double *)(param_1 + 0x38) = param_4;
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
    *(undefined8 *)(param_1 + 0x30) = 0x41dfffffffc00000;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    dVar9 = (double)FUN_016ed780(param_3,param_5);
    if (*(double *)(param_1 + 0x30) <= dVar9 && dVar9 != *(double *)(param_1 + 0x30)) {
      if ((*(char *)(param_1 + 0x21) == '\0') || (*(char *)(param_1 + 0x22) != '\0')) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((*(char *)(param_1 + 0x21) == '\0') && (*(char *)(param_1 + 0x22) != '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar7 || bVar1) {
        iVar6 = *(int *)(param_1 + 0x24) + -1;
        iVar3 = 1;
        if (0 < iVar6) {
          puVar5 = (undefined8 *)(param_1 + 0x40);
          do {
            *puVar5 = *(undefined8 *)(param_1 + 0x38 + (longlong)(iVar3 + 1) * 8);
            iVar3 = iVar3 + 1;
            puVar5 = puVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      }
      if ((*(char *)(param_1 + 0x20) == '\0') ||
         (dVar10 = dVar8 - dVar11,
         dVar10 < *(double *)(param_1 + 0x38) || dVar10 == *(double *)(param_1 + 0x38))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((*(char *)(param_1 + 0x20) != '\0') || (*(double *)(param_1 + 0x38) <= dVar8 - dVar11)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar7 || bVar1) {
        if (4999 < *(int *)(param_1 + 0x24)) {
          *(bool *)(param_1 + 0x22) = *(char *)(param_1 + 0x21) == '\0';
          iVar6 = *(int *)(param_1 + 0x24) + -1;
          iVar3 = 1;
          if (0 < iVar6) {
            puVar5 = (undefined8 *)(param_1 + 0x40);
            do {
              *puVar5 = *(undefined8 *)(param_1 + 0x38 + (longlong)(iVar3 + 1) * 8);
              iVar3 = iVar3 + 1;
              puVar5 = puVar5 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          FUN_016fe230(L"Event overflow - one is lost!");
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        if (bVar7) {
          *(double *)(param_1 + 0x38 + (longlong)*(int *)(param_1 + 0x24) * 8) =
               (*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x30)) / 2.0 +
               *(double *)(param_1 + 0x18);
        }
        else {
          *(double *)(param_1 + 0x38 + (longlong)*(int *)(param_1 + 0x24) * 8) =
               (*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x30)) / 2.0 +
               *(double *)(param_1 + 0x10);
        }
        if (*(double *)(param_1 + 0x40) <= dVar9 && dVar9 != *(double *)(param_1 + 0x40)) {
          if (*(char *)(param_1 + 0x21) == '\0') {
            dVar8 = *(double *)(param_1 + 0x10);
          }
          else {
            dVar8 = *(double *)(param_1 + 0x18);
          }
          dVar11 = (double)FUN_00b90620(0,*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30))
          ;
          FUN_016ed960(param_2,param_3,dVar11 + dVar8 / 2.0,0);
        }
      }
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
      if (((*(char *)(param_1 + 0x20) != '\0') && (!bVar7)) ||
         ((bool)(bVar1 & *(char *)(param_1 + 0x20) == '\0'))) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(param_1 + 0x20) = uVar2;
      *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x22);
    }
    *(double *)(param_1 + 0x30) = dVar9;
    *(double *)(param_1 + 0x38) = param_4;
    if (0 < *(int *)(param_1 + 0x24)) {
      if (((*(double *)(param_1 + 0x40) <= dVar9 && dVar9 != *(double *)(param_1 + 0x40)) &&
          (*(char *)(param_1 + 0x21) == '\0')) ||
         ((dVar9 < *(double *)(param_1 + 0x40) || dVar9 == *(double *)(param_1 + 0x40) &&
          (*(char *)(param_1 + 0x21) != '\0')))) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(param_1 + 0x22) = uVar2;
      if (*(char *)(param_1 + 0x21) == '\0') {
        dVar8 = *(double *)(param_1 + 0x10);
      }
      else {
        dVar8 = *(double *)(param_1 + 0x18);
      }
      if ((dVar9 < *(double *)(param_1 + 0x40) - dVar8) || (*(double *)(param_1 + 0x40) <= dVar9)) {
        dVar11 = (double)FUN_00b90620(0,*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30));
        FUN_016ed960(param_2,param_3,dVar11 + dVar8 / 2.0,0);
      }
    }
    param_4 = local_80[0];
    if (*(char *)(param_1 + 0x22) != '\0') {
      param_4 = local_88;
    }
  }
  return param_4;
}

