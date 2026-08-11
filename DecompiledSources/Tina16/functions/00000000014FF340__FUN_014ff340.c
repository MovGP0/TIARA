/* Ghidra address: 014ff340 */
/* Ghidra symbol: FUN_014ff340 */


void FUN_014ff340(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = -1000000000000.0;
  dVar6 = (*(double *)(PTR_DAT_02004010 + 0x7e0) / *(double *)(PTR_DAT_02004010 + 0x7e8)) / 10.0;
  *(undefined1 *)(param_1 + 0x740) = 0;
  do {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if ((*(char *)(param_1 + 0x780) == '\x01') && (*(char *)(param_1 + 0x741) == '\0')) {
      FUN_00f835c0(*(undefined2 *)(param_1 + 0x782));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x728);
    *(undefined1 *)(param_1 + 0x744) = 0;
    if (*(char *)(param_1 + 0x745) != '\0') {
      if (*(double *)(param_1 + 0x750) < *(double *)PTR_DAT_02004c18 - 1e-12) {
        FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) + 1e-12,
                     param_1 + 0x768,param_1 + 0x770);
        *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_1 + 0x770);
      }
      else {
        if (*(char *)(param_1 + 0x74a) == '\0') {
          if (*(double *)(param_1 + 0x760) < *(double *)(param_1 + 0x758) ||
              *(double *)(param_1 + 0x760) == *(double *)(param_1 + 0x758)) {
            *(undefined8 *)PTR_DAT_02004c18 = *(undefined8 *)(param_1 + 0x760);
            *(undefined8 *)PTR_DAT_02001328 = *(undefined8 *)(param_1 + 0x760);
            if (*PTR_DAT_02002d10 != '\0') {
              return;
            }
            FUN_01aacd10(uVar1);
            dVar5 = (double)FUN_0040c850(*(double *)PTR_DAT_02004c18 - *(double *)(param_1 + 0x9b8))
            ;
            if (1e-18 <= dVar5) {
              *(undefined4 *)(param_1 + 0x9c0) = 0;
            }
            else {
              *(int *)(param_1 + 0x9c0) = *(int *)(param_1 + 0x9c0) + 1;
            }
            *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)PTR_DAT_02004c18;
            if ((*(int *)(PTR_DAT_02004010 + 0x82e) != 2) && (*(int *)(param_1 + 0x9c0) == 0x32)) {
              FUN_016fd9b0(L"Analysis can\'t be performed: use delay by the components",0x1597);
              *PTR_DAT_02002d10 = 1;
            }
            if (*PTR_DAT_02002d10 != '\0') {
              if (*(char *)(param_1 + 0x741) == '\0') {
                *(undefined1 *)(param_1 + 0x74c) = 0;
                FUN_01500130(param_1,*(undefined8 *)PTR_DAT_02004030);
                FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
                *(undefined4 *)(param_1 + 0x508) = 0;
                return;
              }
              FUN_01c87d20(*(undefined8 *)PTR_DAT_02004e40);
            }
            uVar4 = FUN_01aab9a0(uVar1);
            *(undefined8 *)(param_1 + 0x760) = uVar4;
            if (*(double *)(param_1 + 0x760) < *(double *)(param_1 + 0x758) ||
                *(double *)(param_1 + 0x760) == *(double *)(param_1 + 0x758)) {
              *(undefined8 *)PTR_DAT_02001328 = *(undefined8 *)(param_1 + 0x760);
              cVar2 = FUN_01aacb90(uVar1);
              if (cVar2 != '\0') {
                *(undefined8 *)PTR_DAT_02001328 = *(undefined8 *)(param_1 + 0x760);
                FUN_01aacd10(uVar1);
                uVar4 = FUN_01aab9a0(uVar1);
                *(undefined8 *)(param_1 + 0x760) = uVar4;
              }
            }
          }
          else {
            *(undefined8 *)PTR_DAT_02004c18 = *(undefined8 *)(param_1 + 0x758);
            *(undefined8 *)PTR_DAT_02001328 = *(undefined8 *)(param_1 + 0x758);
            FUN_01521af0(uVar1,*(double *)PTR_DAT_02004c18 + 1e-12,param_1 + 0x758);
            cVar2 = '\x01';
            if (*(char *)(param_1 + 0x741) != '\0') {
              cVar2 = FUN_015273d0(uVar1,*(undefined8 *)PTR_DAT_02004c18);
            }
            cVar3 = FUN_01aab810(uVar1,*(undefined8 *)PTR_DAT_02004c18,PTR_DAT_02004a70);
            if (cVar3 != '\0' || cVar2 != '\0') {
              uVar4 = FUN_01aab9a0(uVar1);
              *(undefined8 *)(param_1 + 0x760) = uVar4;
            }
          }
        }
        if (*(char *)(param_1 + 0x741) == '\0') {
          FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(undefined8 *)PTR_DAT_02004c18,
                       *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
        }
        *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)PTR_DAT_02004c18;
        if (((*(char *)(param_1 + 0x741) != '\0') &&
            (dVar6 - 1e-12 <= *(double *)PTR_DAT_02004c18 - dVar7)) &&
           (dVar5 = (double)FUN_0040af40(*(double *)PTR_DAT_02004c18 / dVar6 + 5e-13), dVar5 < 1e-12
           )) {
          uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
          thunk_FUN_041b2403(uVar4,0x1237,0,0);
          dVar7 = *(double *)PTR_DAT_02004c18;
        }
        if (*(char *)(param_1 + 0x741) == '\0') {
          FUN_01500350(param_1,*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) + 1e-12,
                       *(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
        }
        *(undefined1 *)(param_1 + 0x744) = 1;
      }
      if (*(double *)(param_1 + 0x750) == *(double *)PTR_DAT_020011b0) {
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
        (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700));
        *(undefined1 *)(param_1 + 0x747) = 1;
        *(undefined1 *)(param_1 + 0x748) = 1;
      }
      *(undefined1 *)(param_1 + 0x746) = 1;
    }
    if (*(char *)(param_1 + 0x746) != '\0') {
      if (*(char *)(param_1 + 0x741) == '\0') {
        FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) + 1e-12,
                     param_1 + 0x778,param_1 + 0x770);
        FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) - 1e-12);
        if (*(char *)(param_1 + 0x744) != '\0') {
          if (*(double *)(param_1 + 0x758) <= *(double *)(param_1 + 0x770) &&
              *(double *)(param_1 + 0x770) != *(double *)(param_1 + 0x758)) {
            *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x758);
          }
          if (*(double *)(param_1 + 0x760) <= *(double *)(param_1 + 0x770) &&
              *(double *)(param_1 + 0x770) != *(double *)(param_1 + 0x760)) {
            *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x760);
          }
        }
        if ((*(double *)(param_1 + 0x750) == *(double *)(param_1 + 0x770)) ||
           (*(double *)(param_1 + 0x750) == *(double *)(param_1 + 0x768))) {
          if (*(double *)(param_1 + 0x750) != *(double *)PTR_DAT_020011b0) {
            *(undefined1 *)(param_1 + 0x747) = 0;
          }
        }
        else {
          FUN_014fe7d0(param_1,*(undefined8 *)(param_1 + 0x750));
          FUN_014fe060(param_1,*(undefined8 *)(param_1 + 0x750),*(undefined8 *)(param_1 + 0x768),
                       *(undefined8 *)(param_1 + 0x770));
          *(undefined1 *)(param_1 + 0x747) = *(undefined1 *)(param_1 + 0x748);
        }
      }
      else {
        FUN_01aad5c0(uVar1,*(undefined8 *)(param_1 + 0x738));
        cVar2 = FUN_01aad610(uVar1);
        if (cVar2 != '\0') {
          FUN_01aad670(uVar1);
          FUN_014fe7d0(param_1,*(undefined8 *)(param_1 + 0x750));
        }
      }
    }
  } while (*(char *)(param_1 + 0x747) == '\0');
  *(undefined1 *)(param_1 + 0x740) = 1;
  return;
}

