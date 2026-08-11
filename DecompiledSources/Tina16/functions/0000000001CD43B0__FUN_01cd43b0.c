/* Ghidra address: 01cd43b0 */
/* Ghidra symbol: FUN_01cd43b0 */


void FUN_01cd43b0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  int local_84;
  int local_80;
  int local_7c;
  double local_68;
  double local_60;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  local_90 = auStack_b8;
  local_40 = *(undefined8 *)(param_1 + 0xb8);
  local_48 = *(undefined8 *)(param_1 + 0xc0);
  local_4c = *(undefined4 *)(param_1 + 0x74);
  FUN_01cd4340(param_1);
  FUN_01cd4100(param_1);
  if ((*(char *)(*(longlong *)(param_1 + 0x68) + 0x58) != '\x02') ||
     (cVar1 = FUN_01cd6670(param_1), cVar1 != '\0')) {
    lVar4 = FUN_004113f0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_01ac9770);
    if ((*(char *)(lVar4 + 0x10b) == '\0') && (cVar1 = FUN_01cd6670(param_1), cVar1 == '\0')) {
      if (*(char *)(param_1 + 0x70) != '\x02') {
        return;
      }
      dVar7 = (double)FUN_00c43d10(*(double *)(param_1 + 0xc0) / *(double *)(param_1 + 0xb8));
      if ((double)*(int *)(param_1 + 0x74) <= dVar7) {
        return;
      }
      *(undefined4 *)(param_1 + 0x90) = 2;
      return;
    }
    lVar4 = FUN_004113f0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_01ac9770);
    if (*(char *)(lVar4 + 0x10c) == '\0') {
      uVar5 = FUN_01cd6670(param_1);
      if ((byte)uVar5 < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        if (*(char *)(param_1 + 0x70) != '\x02') {
          return;
        }
        dVar7 = (double)FUN_00c43d10(*(double *)(param_1 + 0xc0) / *(double *)(param_1 + 0xb8));
        if ((double)*(int *)(param_1 + 0x74) <= dVar7) {
          return;
        }
        *(undefined4 *)(param_1 + 0x90) = 2;
        return;
      }
    }
  }
  uVar5 = FUN_01cd6670(param_1);
  if ((byte)uVar5 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x30U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    return;
  }
  uVar5 = FUN_01cd6670(param_1);
  if ((byte)uVar5 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0xc0U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    return;
  }
  local_58 = 0;
  if (*(byte *)(param_1 + 0x70) < 2) {
    dVar7 = (double)FUN_0040c850(*(double *)(param_1 + 0xd0) - *(double *)(param_1 + 200));
    if (dVar7 < 1e-18) {
      iVar2 = FUN_00f060d0(*(undefined8 *)(param_1 + 200));
      dVar7 = (double)FUN_00c43d20((double)iVar2);
      *(double *)(param_1 + 200) = *(double *)(param_1 + 200) - dVar7;
      iVar2 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xd0));
      dVar7 = (double)FUN_00c43d20((double)iVar2);
      *(double *)(param_1 + 0xd0) = *(double *)(param_1 + 0xd0) + dVar7;
    }
  }
  else if (*(byte *)(param_1 + 0x70) == 2) {
    dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xd0));
    dVar8 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 200));
    dVar7 = (double)FUN_0040c850(dVar7 - dVar8);
    if (dVar7 < 1e-18) {
      iVar2 = FUN_00f060d0(*(undefined8 *)(param_1 + 200));
      dVar7 = (double)FUN_00c43d20((double)iVar2);
      *(double *)(param_1 + 200) = *(double *)(param_1 + 200) - dVar7;
      iVar2 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xd0));
      dVar7 = (double)FUN_00c43d20((double)iVar2);
      *(double *)(param_1 + 0xd0) = *(double *)(param_1 + 0xd0) + dVar7;
    }
  }
  if (*(byte *)(param_1 + 0x70) < 2) {
    dVar7 = (double)FUN_0040c850(*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
    dVar8 = (double)FUN_0040c850(*(double *)(param_1 + 0xd0) - *(double *)(param_1 + 200));
    if (dVar7 / dVar8 < 1e-14) {
      dVar7 = (double)FUN_0040c850(*(double *)(param_1 + 0xd0) - *(double *)(param_1 + 200));
      *(double *)(param_1 + 0xb8) =
           (*(double *)(param_1 + 0xb8) + *(double *)(param_1 + 0xc0)) / 2.0 - (dVar7 * 1e-14) / 2.0
      ;
      dVar7 = (double)FUN_0040c850(*(double *)(param_1 + 0xd0) - *(double *)(param_1 + 200));
      *(double *)(param_1 + 0xc0) =
           (*(double *)(param_1 + 0xb8) + *(double *)(param_1 + 0xc0)) / 2.0 + (dVar7 * 1e-14) / 2.0
      ;
    }
  }
  else if (*(byte *)(param_1 + 0x70) == 2) {
    dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
    dVar8 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
    FUN_0040c850(dVar7 - dVar8);
    dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xd0));
    dVar8 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 200));
    FUN_0040c850(dVar7 - dVar8);
  }
  if (*(byte *)(param_1 + 0x70) < 2) {
    cVar1 = FUN_01cd6750(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
      uVar5 = FUN_00f062b0(*(undefined8 *)(param_1 + 0xb8),(double)iVar2);
      *(undefined8 *)(param_1 + 0xb8) = uVar5;
      uVar3 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xc0));
      uVar5 = FUN_00f06210(*(undefined8 *)(param_1 + 0xc0),uVar3);
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
    }
    else {
      iVar2 = FUN_00f060d0(*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
      uVar5 = FUN_00f062b0(*(undefined8 *)(param_1 + 0xb8),(double)iVar2);
      *(undefined8 *)(param_1 + 0xb8) = uVar5;
      uVar3 = FUN_00f060d0(*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
      uVar5 = FUN_00f06210(*(undefined8 *)(param_1 + 0xc0),uVar3);
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
    }
    if (0.0 <= *(double *)(param_1 + 0xc0) * *(double *)(param_1 + 0xb8)) {
      if (*(double *)(param_1 + 0xc0) == 0.0) {
        local_50 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
      }
      else if (*(double *)(param_1 + 0xb8) == 0.0) {
        local_50 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xc0));
      }
      else {
        FUN_0040c850(*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
        local_50 = FUN_00f060d0();
        local_50 = local_50 + -1;
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x68) + 0x58) != '\x02') ||
         (cVar1 = FUN_01cd6670(param_1), cVar1 != '\0')) {
        uVar5 = FUN_00f062b0(*(undefined8 *)(param_1 + 0xb8),(double)local_50);
        *(undefined8 *)(param_1 + 0xb8) = uVar5;
        uVar5 = FUN_00f06210(*(undefined8 *)(param_1 + 0xc0),local_50);
        *(undefined8 *)(param_1 + 0xc0) = uVar5;
      }
      do {
        local_68 = (double)FUN_01cd4080(param_1,*(undefined8 *)(param_1 + 0xb8),local_50);
        local_60 = (double)FUN_01cd4080(param_1,*(undefined8 *)(param_1 + 0xc0),local_50);
        local_54 = 0x12;
        while (local_54 = local_54 + -1, local_54 != 0) {
          dVar7 = (double)FUN_0040c850(local_60 - local_68);
          lVar4 = (longlong)local_54;
          dVar7 = (double)FUN_0040af40(dVar7 / *(double *)(&DAT_01feecb8 + lVar4 * 8));
          if (((dVar7 == 0.0) &&
              (dVar7 = (double)FUN_0040c850(local_60 - local_68),
              (double)(param_2 + -1) <= dVar7 / *(double *)(&DAT_01feecb8 + lVar4 * 8))) &&
             ((*(char *)(*(longlong *)(param_1 + 0x68) + 0x58) != '\x02' ||
              ((cVar1 = FUN_01cd6670(param_1), cVar1 != '\0' ||
               (dVar7 = (double)FUN_0040af40(*(undefined8 *)(&DAT_01feecb8 + (longlong)local_54 * 8)
                                            ), dVar7 == 0.0)))))) break;
        }
        dVar7 = (double)FUN_0040c850(local_60 - local_68);
        if (((double)(param_3 + -1) < dVar7 / *(double *)(&DAT_01feecb8 + (longlong)local_54 * 8))
           && (*(char *)(*(longlong *)(param_1 + 0x68) + 0x58) != '\x02')) {
          dVar7 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xb8));
          dVar8 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xc0));
          if (dVar7 <= dVar8) {
            uVar5 = FUN_00f063c0(*(undefined8 *)(param_1 + 0xb8),(double)local_50);
            *(undefined8 *)(param_1 + 0xb8) = uVar5;
          }
          else {
            uVar5 = FUN_00f06350(*(undefined8 *)(param_1 + 0xc0),(double)local_50);
            *(undefined8 *)(param_1 + 0xc0) = uVar5;
          }
        }
        local_58 = local_58 + 1;
        dVar7 = (double)FUN_0040c850(local_60 - local_68);
      } while (((double)(param_3 + -1) < dVar7 / *(double *)(&DAT_01feecb8 + (longlong)local_54 * 8)
               ) && (local_58 < 0x3e9));
      dVar7 = (double)FUN_0040c850(local_60 - local_68);
      uVar3 = FUN_0040c770(dVar7 / *(double *)(&DAT_01feecb8 + (longlong)local_54 * 8));
      FUN_01cd6740(param_1,uVar3);
    }
    else {
      local_7c = FUN_00f060d0(*(undefined8 *)(param_1 + 0xc0));
      local_80 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
      local_84 = local_80;
      if (local_80 < local_7c) {
        local_84 = local_7c;
      }
      local_50 = local_84;
      uVar5 = FUN_00f062b0(*(undefined8 *)(param_1 + 0xb8),(double)local_84);
      *(undefined8 *)(param_1 + 0xb8) = uVar5;
      uVar5 = FUN_00f06210(*(undefined8 *)(param_1 + 0xc0),local_50);
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
      do {
        local_68 = (double)FUN_01cd4080(param_1,*(undefined8 *)(param_1 + 0xb8),local_50);
        local_60 = (double)FUN_01cd4080(param_1,*(undefined8 *)(param_1 + 0xc0),local_50);
        local_54 = 0x12;
        do {
          do {
            local_54 = local_54 + -1;
            dVar7 = (double)FUN_0040c850(local_60 - local_68);
            lVar4 = (longlong)local_54;
            dVar7 = (double)FUN_0040af40(dVar7 / *(double *)(&DAT_01feecb8 + lVar4 * 8));
          } while (dVar7 != 0.0);
          dVar7 = (double)FUN_0040af40(local_60 / *(double *)(&DAT_01feecb8 + lVar4 * 8));
        } while (((dVar7 != 0.0) ||
                 (dVar7 = (double)FUN_0040c850(local_60 - local_68),
                 dVar7 / *(double *)(&DAT_01feecb8 + lVar4 * 8) < (double)(param_2 + -1))) ||
                ((*(char *)(*(longlong *)(param_1 + 0x68) + 0x58) == '\x02' &&
                 ((cVar1 = FUN_01cd6670(param_1), cVar1 == '\0' &&
                  (dVar7 = (double)FUN_0040af40(*(undefined8 *)
                                                 (&DAT_01feecb8 + (longlong)local_54 * 8)),
                  dVar7 != 0.0))))));
        dVar7 = (double)FUN_0040c850(local_60 - local_68);
        if ((double)(param_3 + -1) < dVar7 / *(double *)(&DAT_01feecb8 + (longlong)local_54 * 8)) {
          dVar7 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xb8));
          dVar8 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xc0));
          if (dVar7 <= dVar8) {
            uVar5 = FUN_00f063c0(*(undefined8 *)(param_1 + 0xb8),(double)local_50);
            *(undefined8 *)(param_1 + 0xb8) = uVar5;
          }
          else {
            uVar5 = FUN_00f06350(*(undefined8 *)(param_1 + 0xc0),(double)local_50);
            *(undefined8 *)(param_1 + 0xc0) = uVar5;
          }
        }
        local_58 = local_58 + 1;
        dVar7 = (double)FUN_0040c850(local_60 - local_68);
      } while (((double)(param_3 + -1) < dVar7 / *(double *)(&DAT_01feecb8 + (longlong)local_54 * 8)
               ) && (local_58 < 0x3e9));
      dVar7 = (double)FUN_0040c850(local_60 - local_68);
      uVar3 = FUN_0040c770(dVar7 / *(double *)(&DAT_01feecb8 + (longlong)local_54 * 8));
      FUN_01cd6740(param_1,uVar3);
    }
    if (*(int *)(param_1 + 0x74) < 1) {
      FUN_01cd6740(param_1,1);
    }
    if (param_3 < *(int *)(param_1 + 0x74)) {
      FUN_01cd6740(param_1,param_3);
    }
  }
  else if (*(byte *)(param_1 + 0x70) == 2) {
    iVar2 = FUN_00f060d0(*(undefined8 *)(param_1 + 0xb8));
    uVar5 = FUN_00c43d20((double)iVar2);
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
    uVar3 = FUN_00f06110(*(undefined8 *)(param_1 + 0xc0));
    uVar5 = FUN_00f06210(*(undefined8 *)(param_1 + 0xc0),uVar3);
    *(undefined8 *)(param_1 + 0xc0) = uVar5;
    FUN_0040c850(*(undefined8 *)(param_1 + 0xc0));
    dVar7 = (double)FUN_00c43d10();
    FUN_0040c850(*(undefined8 *)(param_1 + 0xb8));
    dVar8 = (double)FUN_00c43d10();
    uVar3 = FUN_0040c840(dVar7 - dVar8);
    FUN_01cd6740(param_1,uVar3);
    if (*(int *)(param_1 + 0x74) < 1) {
      FUN_01cd6740(param_1,1);
    }
    if (param_3 < *(int *)(param_1 + 0x74)) {
      FUN_01cd6740(param_1,param_3);
    }
  }
  if (*(byte *)(param_1 + 0x70) < 2) {
    *(double *)(param_1 + 0x78) =
         (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) /
         (double)*(int *)(param_1 + 0x74);
  }
  else if (*(byte *)(param_1 + 0x70) == 2) {
    dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
    dVar8 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
    uVar5 = FUN_00c43d20((dVar7 - dVar8) / (double)*(int *)(param_1 + 0x74));
    *(undefined8 *)(param_1 + 0x78) = uVar5;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar5 = FUN_01cd6670(param_1);
    if ((byte)uVar5 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar6 = false;
    }
    if ((!bVar6) || (cVar1 = FUN_01ce33d0(*(undefined8 *)(param_1 + 0x68)), cVar1 != '\x01'))
    goto LAB_01cd53b3;
  }
  FUN_01cd6740(param_1,1);
LAB_01cd53b3:
  if ((*(char *)(param_1 + 0x70) == '\x02') &&
     (dVar7 = (double)FUN_00c43d10(*(double *)(param_1 + 0xc0) / *(double *)(param_1 + 0xb8)),
     dVar7 < (double)*(int *)(param_1 + 0x74))) {
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  return;
}

