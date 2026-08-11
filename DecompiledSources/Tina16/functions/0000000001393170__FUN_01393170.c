/* Ghidra address: 01393170 */
/* Ghidra symbol: FUN_01393170 */


void FUN_01393170(byte param_1,longlong *param_2,undefined1 param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double in_stack_ffffffffffffff38;
  ulonglong in_stack_ffffffffffffff48;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  char local_49 [49];
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60[0] = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  uVar10 = FUN_00b921a0(0);
  cVar2 = FUN_017d1390(param_2[0x98]);
  if ((cVar2 != '\0') || (cVar2 = FUN_01b07dd0(param_2), cVar2 != '\0')) {
    FUN_013901c0(&DAT_01393fec,1,param_3,param_2);
  }
  FUN_0165dc50(param_2[0x22]);
  if (param_2[0x98] != 0) {
    lVar5 = FUN_01d347d0(param_2[0x98],0);
    FUN_01b07850(param_2,param_2[0x23],*(undefined8 *)(lVar5 + 8));
  }
  *PTR_DAT_02005558 = 0;
  param_2[0x75] = 0x3ff0000000000000;
  *(undefined1 *)(param_2 + 0x27b) = 0;
  uVar8 = 0;
  lVar5 = FUN_0138ff40(param_2,0);
  if ((((*(char *)((longlong)param_2 + 0x5db) == '\x02') && (lVar5 != 0)) &&
      (lVar5 == param_2[0x278])) && ((char)param_2[0x279] == '\x05')) {
    *(undefined1 *)(param_2 + 0x27b) = 1;
    *(undefined1 *)((longlong)param_2 + 0x49c) = 1;
    FUN_013900d0();
    uVar8 = 0x1586;
    FUN_01b04ef0(0x10c,0x1586,param_2[0x262],0);
  }
  while (((double)param_2[0x75] <= *(double *)((longlong)param_2 + 0x695) &&
         ((char)param_2[0x27b] == '\0'))) {
    bVar1 = *(byte *)((longlong)param_2 + 0x5db);
    uVar6 = (ulonglong)bVar1;
    if (bVar1 < 8) {
      uVar7 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (bVar1 & 0x1f);
      uVar8 = (ulonglong)uVar7;
      bVar9 = (uVar7 & 0xde) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      if (uVar6 < 3) {
        if (uVar6 == 1) {
          uVar3 = FUN_0040c770((double)param_2[0x75] - 1.0);
          lVar5 = FUN_017c58f0(param_2[0x13e],param_2[0x13f],param_2[0x140],
                               *(short *)((longlong)param_2 + 0x9ee) + -1,uVar3,(char)param_2[0x141]
                               ,in_stack_ffffffffffffff48 & 0xffffffffffffff00);
          param_2[0xd4] = lVar5;
          FUN_016f5520(param_2,0);
          uVar8 = 0;
          FUN_01374e80(param_2,0);
        }
        else if (uVar6 == 2) {
          if (*(int *)(*(longlong *)(param_2[0x14] + 0x470) + 0x10) < 2) {
            uVar3 = FUN_0040c770((double)param_2[0x75] - 1.0);
            uVar11 = FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0xb15),
                                  *(undefined8 *)((longlong)param_2 + 0xb1d),param_2[0x165],
                                  *(short *)((longlong)param_2 + 0xb25) + -1,uVar3,
                                  *(undefined1 *)((longlong)param_2 + 0xb27),
                                  in_stack_ffffffffffffff48 & 0xffffffffffffff00);
            if (*(longlong *)((longlong)param_2 + 0xa09) == 0) {
              FUN_004169a0(local_60,(longlong)param_2 + 0xa15);
              uVar3 = (**(code **)(**(longlong **)(param_2[0x14] + 0x438) + 0xb8))
                                (*(longlong **)(param_2[0x14] + 0x438),local_60[0]);
              FUN_00b8fd60(&local_68,uVar11,6,0,1);
              FUN_004b5450(*(undefined8 *)(param_2[0x14] + 0x438),uVar3,local_68);
              FUN_01440040(param_2[0x14],param_2[0x262],0);
              FUN_019af810(param_2[0x14],8);
            }
            else {
              *(undefined8 *)param_2[0x27a] = uVar11;
              FUN_01cc5c10(param_2[0x16],uVar11);
            }
            FUN_016f5520(param_2,0);
            uVar8 = 0;
            FUN_01374e80(param_2,0);
          }
          else {
            FUN_013900d0(param_2);
            FUN_012b4a50(param_2[0xb1],1);
            FUN_0138ff40(param_2,1);
            FUN_016f5520(param_2,0);
            uVar8 = 0;
            FUN_01374e80(param_2,0);
          }
        }
      }
      else if (uVar6 - 3 < 2) {
        FUN_013900d0(param_2);
        FUN_01150d10(param_2[0xb2],param_2[0x75]);
        FUN_0138ff40(param_2,1);
        FUN_016f5520(param_2,0);
        uVar8 = 0;
        FUN_01374e80(param_2,0);
      }
      else if (uVar6 == 6) {
        if ((double)param_2[0x75] == 2.0) {
          FUN_013900d0(param_2);
          FUN_01390180(param_2);
          uVar11 = CONCAT71((int7)(uVar8 >> 8),8);
          FUN_016f1c10(param_2,uVar11);
          uVar8 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          FUN_0138ff40(param_2,uVar8);
        }
      }
      else if (uVar6 == 7) {
        uVar3 = FUN_0040c770((double)param_2[0x75] - 1.0);
        uVar11 = FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0xb15),
                              *(undefined8 *)((longlong)param_2 + 0xb1d),param_2[0x165],
                              *(short *)((longlong)param_2 + 0xb25) + -1,uVar3,
                              *(undefined1 *)((longlong)param_2 + 0xb27),
                              in_stack_ffffffffffffff48 & 0xffffffffffffff00);
        FUN_016cfc70(param_2[0x14],8,uVar11,1);
        FUN_016f5520(param_2,0);
        uVar8 = 0;
        FUN_01374e80(param_2,0);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      cVar2 = FUN_017d1390(param_2[0x98]);
      if ((cVar2 != '\0') || (cVar2 = FUN_01b07dd0(param_2), cVar2 != '\0')) {
        FUN_017dcfd0(param_2[0x1b],0,1);
        FUN_017d9ab0(param_2[0x1b],0);
        if (*(char *)((longlong)param_2 + 0x325) == '\0') {
          FUN_01af25b0(param_2[0x1e2],0,&DAT_01394014,2);
          cVar2 = FUN_01b07dd0(param_2);
          if (cVar2 == '\0') {
            FUN_016f5430(param_2,1,0);
          }
          else {
            FUN_016f39b0(param_2,1,0);
          }
          FUN_01af25b0(param_2[0x1e2],0,&DAT_01394010,1);
        }
        else {
          FUN_01af25b0(param_2[0x1e2],1,&DAT_0139400e,0);
          FUN_016f6430(param_2,1,0);
          FUN_016f3620(param_2,0,1);
          FUN_01af25b0(param_2[0x1e2],0,&DAT_01394010,1);
        }
        uVar8 = 0;
        FUN_017d9ab0(param_2[0x1b],0);
        if (param_2[0x98] != 0) {
          lVar5 = FUN_01d347d0(param_2[0x98],0);
          uVar8 = param_2[0x23];
          FUN_01b07850(param_2,uVar8,*(undefined8 *)(lVar5 + 8));
        }
      }
      uVar8 = CONCAT71((int7)(uVar8 >> 8),2);
      FUN_01af25d0(param_2[0x1e2],uVar8,4);
      FUN_0165dc50(param_2[0x22]);
    }
    uVar11 = CONCAT71((int7)(uVar8 >> 8),7);
    FUN_016f6430(param_2,uVar11,0);
    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    in_stack_ffffffffffffff38 = (double)param_2[0x75] - 1.0;
    uVar6 = 0;
    in_stack_ffffffffffffff48 = 0;
    FUN_017ce930(param_2,uVar11,0,0,in_stack_ffffffffffffff38,0,0);
    *(undefined4 *)(param_2 + 0x93) = 0;
    if ((*PTR_DAT_02002b78 != '\0') || (*(char *)((longlong)param_2 + 0x335) != '\0')) {
      uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),8);
      FUN_017d2950(param_2,uVar11);
    }
    uVar8 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    FUN_017dcfd0(param_2[0x1b]);
    iVar4 = 0;
    dVar12 = -1.0;
    param_2[0x74] = 0;
    while (((double)param_2[0x74] <= *(double *)((longlong)param_2 + 0x96d) &&
            *(double *)((longlong)param_2 + 0x96d) != (double)param_2[0x74] &&
           ((char)param_2[0x27b] == '\0'))) {
      if (param_1 < 8) {
        bVar9 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_1 & 0x1f) & 5U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (((bVar9) || (*PTR_DAT_02002b78 != '\0')) || (*(char *)((longlong)param_2 + 0x335) != '\0')
         ) {
        in_stack_ffffffffffffff38 =
             (double)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),iVar4);
        uVar6 = CONCAT71((int7)(uVar6 >> 8),*(undefined1 *)((longlong)param_2 + 0x975));
        in_stack_ffffffffffffff48 = CONCAT71((int7)(in_stack_ffffffffffffff48 >> 8),param_1 == 2);
        uVar11 = FUN_017c58f0(*(undefined8 *)((longlong)param_2 + 0x965),
                              *(undefined8 *)((longlong)param_2 + 0x96d),0,
                              *(undefined2 *)((longlong)param_2 + 0x963),in_stack_ffffffffffffff38,
                              uVar6,in_stack_ffffffffffffff48);
        lVar5 = FUN_00b90650(*(undefined8 *)((longlong)param_2 + 0x96d),uVar11);
        param_2[0x74] = lVar5;
        if (((*PTR_DAT_02002b78 != '\0') || (*(char *)((longlong)param_2 + 0x335) != '\0')) &&
           (local_49[0] = '\x01', *PTR_DAT_020052b8 != '\0')) {
          in_stack_ffffffffffffff38 = 1e-15;
          FUN_00b8fec0(&local_78,param_2[0x74],2,0,0x3cd203af9ee75616);
          FUN_00416ba0(&local_70,L" f = ",local_78);
          FUN_0132bb80(*(undefined8 *)PTR_DAT_02002da0,local_70,0);
        }
      }
      else {
        uVar11 = FUN_010e1630(3,0,0,0);
        lVar5 = FUN_004113f0(uVar11,&PTR_FUN_01133e90);
        if (lVar5 != 0) {
          lVar5 = FUN_01138ff0(lVar5,local_49);
          param_2[0x74] = lVar5;
        }
      }
      if (dVar12 < 0.0) {
        dVar12 = (double)param_2[0x74];
      }
      FUN_01af25d0(param_2[0x1e2]);
      FUN_01af2990(param_2[0x1e2],
                   (double)iVar4 + ((double)param_2[0x75] - 1.0) * (double)(int)param_2[0x27e]);
      if (dVar12 * 10.0 < (double)param_2[0x74]) {
        dVar12 = (double)param_2[0x74];
      }
      uVar8 = 0;
      FUN_017d9ab0(param_2[0x1b]);
      if (param_1 != 1 || local_49[0] != '\0') {
        FUN_016f6430(param_2,8,(double)param_2[0x74] * 6.283185307179586);
        FUN_016f3620(param_2,(double)param_2[0x74] * 6.283185307179586,8);
        uVar8 = (ulonglong)param_1;
        in_stack_ffffffffffffff38 = 0.0;
        uVar6 = 0;
        in_stack_ffffffffffffff48 = 0;
        FUN_016f8860(param_2,uVar8,8,param_2[0x74],0,0,0);
      }
      iVar4 = iVar4 + 1;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      if (param_1 == 1) {
        uVar8 = 0;
        lVar5 = FUN_010e1630(4);
        if (lVar5 != 0) {
          uVar11 = FUN_0065b870(lVar5);
          uVar8 = 0x534;
          thunk_FUN_041b2403(uVar11);
        }
        if (*PTR_DAT_02002b78 != '\0') {
          uVar8 = CONCAT71((int7)(uVar8 >> 8),8);
          FUN_017d2ab0(param_2);
        }
      }
      cVar2 = FUN_01af2a10(param_2[0x1e2]);
      if (cVar2 != '\0') {
        uVar11 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1);
        *(undefined8 *)PTR_DAT_02005168 = uVar11;
        in_stack_ffffffffffffff38 =
             (double)((ulonglong)in_stack_ffffffffffffff38 & 0xffffffffffffff00);
        FUN_013d4bc0(*(undefined8 *)PTR_DAT_02005168,*(undefined2 *)((longlong)param_2 + 0x976),0,0,
                     in_stack_ffffffffffffff38);
        uVar8 = 0;
        FUN_01af29f0(param_2[0x1e2]);
      }
    }
    if ((((*(char *)((longlong)param_2 + 0x5db) == '\x01') &&
         (*(char *)((longlong)param_2 + 0x69e) != '\0')) ||
        ((*(char *)((longlong)param_2 + 0x5db) == '\x02' &&
         (*(char *)((longlong)param_2 + 0x69f) != '\0')))) &&
       (((double)param_2[0x75] <= *(double *)((longlong)param_2 + 0x695) &&
         *(double *)((longlong)param_2 + 0x695) != (double)param_2[0x75] &&
        (*(char *)((longlong)param_2 + 0x49c) == '\0')))) {
      uVar8 = (ulonglong)*(ushort *)((longlong)param_2 + 0x976);
      FUN_013d4bc0(param_2[0x16],uVar8,0,0,1);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),4);
      in_stack_ffffffffffffff38 = 0.0;
      FUN_017cc020(param_2 + 0x16,uVar8,param_1 == 1,*(undefined8 *)(param_2[0x14] + 0x360),0,
                   uVar6 & 0xffffffffffffff00);
      bVar1 = *(byte *)((longlong)param_2 + 0x5db);
      if (bVar1 < 8) {
        uVar7 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (bVar1 & 0x1f);
        uVar8 = (ulonglong)uVar7;
        bVar9 = (uVar7 & 0xde) != 0;
      }
      else {
        bVar9 = false;
      }
      if ((bVar9) && (bVar1 == 2)) {
        if (*(int *)(*(longlong *)(param_2[0x14] + 0x470) + 0x10) < 2) {
          if (*(longlong *)((longlong)param_2 + 0xa09) != 0) {
            iVar4 = FUN_01b07e10(param_2,*(longlong *)((longlong)param_2 + 0xa09));
            uVar8 = *(ulonglong *)(param_2[0x56] + -8 + (longlong)iVar4 * 8);
            param_2[0x278] = uVar8;
            FUN_012b4370();
          }
        }
        else {
          FUN_012b49a0(param_2[0xb1]);
        }
      }
    }
    param_2[0x75] = (longlong)((double)param_2[0x75] + 1.0);
  }
  param_2[0x75] = (longlong)((double)param_2[0x75] - 1.0);
  FUN_013900d0();
  if (*(char *)((longlong)param_2 + 0x335) != '\0') {
    FUN_0138fd60(param_2[0x15],param_2);
    FUN_019904f0(param_2[0x15],param_2[0x27c],(int)param_2[0x27d],
                 *(undefined1 *)((longlong)param_2 + 0x12f2),
                 (ulonglong)in_stack_ffffffffffffff38 & 0xffffffffffffff00,
                 *(undefined1 *)((longlong)param_2 + 0x12f3),param_2[0x264],8,0,0x14);
  }
  lVar5 = FUN_00b921a0(uVar10);
  param_2[0x1e4] = lVar5;
  FUN_00414560(&local_78,4);
  return;
}

