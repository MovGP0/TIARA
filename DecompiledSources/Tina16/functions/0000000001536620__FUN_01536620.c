/* Ghidra address: 01536620 */
/* Ghidra symbol: FUN_01536620 */


void FUN_01536620(longlong *param_1,char param_2,undefined1 param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 **ppuVar11;
  undefined **ppuVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined1 *in_stack_fffffffffffffeb8;
  undefined8 *local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c4 [4];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 *local_40 [4];
  
  local_110 = (undefined **)0x0;
  local_118 = (undefined8 *)0x0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  *(undefined1 *)(param_1 + 0x277) = 0;
  ppuVar11 = local_40;
  lVar7 = FUN_01536320(param_1,ppuVar11);
  ppuVar12 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar11 >> 8),6);
  puVar17 = (undefined8 *)local_c4;
  plVar8 = (longlong *)FUN_01b05ad0(lVar7,ppuVar12,0,local_c4 + 1,puVar17,local_c4 + 2);
  param_1[0x273] = *plVar8;
  param_1[0x75] = 0x3ff0000000000000;
  while ((uVar4 = (undefined4)((ulonglong)puVar17 >> 0x20),
         (double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         ((char)param_1[0x277] == '\0'))) {
    bVar1 = *(byte *)((longlong)param_1 + 0x5db);
    if (bVar1 < 8) {
      bVar14 = ((int)CONCAT71((int7)((ulonglong)ppuVar12 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      if (bVar1 == 1) {
        uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
        lVar10 = FUN_017c58f0(param_1[0x13e],param_1[0x13f],param_1[0x140],
                              *(short *)((longlong)param_1 + 0x9ee) + -1,CONCAT44(uVar4,uVar3),
                              (char)param_1[0x141],
                              (ulonglong)in_stack_fffffffffffffeb8 & 0xffffffffffffff00);
        param_1[0xd4] = lVar10;
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      else if (bVar1 == 2) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
          uVar15 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                                *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                                *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar4,uVar3),
                                *(undefined1 *)((longlong)param_1 + 0xb27),
                                (ulonglong)in_stack_fffffffffffffeb8 & 0xffffffffffffff00);
          if (*(longlong *)((longlong)param_1 + 0xa09) == 0) {
            FUN_004169a0(&local_d0,(longlong)param_1 + 0xa15);
            uVar4 = (**(code **)(**(longlong **)(param_1[0x14] + 0x438) + 0xb8))
                              (*(longlong **)(param_1[0x14] + 0x438),local_d0);
            FUN_00b8fd60(&local_d8,uVar15,6,0,1);
            FUN_004b5450(*(undefined8 *)(param_1[0x14] + 0x438),uVar4,local_d8);
            FUN_01440040(param_1[0x14],param_1[0x262],0);
            FUN_019af810(param_1[0x14],8);
          }
          else {
            *(undefined8 *)param_1[0x272] = uVar15;
            FUN_01cc5c10(param_1[0x16],uVar15);
          }
          FUN_016f5520(param_1,0);
          FUN_01374e80(param_1,0);
        }
        else {
          FUN_012b4a50(param_1[0xb1],1);
          FUN_016f5520(param_1,0);
          FUN_01374e80(param_1,0);
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        FUN_01150d10(param_1[0xb2],param_1[0x75]);
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      else if (bVar1 == 7) {
        uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
        uVar15 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                              *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                              *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar4,uVar3),
                              *(undefined1 *)((longlong)param_1 + 0xb27),
                              (ulonglong)in_stack_fffffffffffffeb8 & 0xffffffffffffff00);
        FUN_016cfc70(param_1[0x14],8,uVar15,1);
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      FUN_01af25d0(param_1[0x1e2],2,4,param_1 + 0x75);
    }
    in_stack_fffffffffffffeb8 = (undefined1 *)0x0;
    FUN_017ce930(param_1,1,0,0,(double)param_1[0x75] - 1.0,0,0);
    *(undefined4 *)(param_1 + 0x93) = 0;
    lVar10 = *(longlong *)(param_1[0x16] + 8);
    lVar9 = FUN_01d347d0(lVar10,*(int *)(lVar10 + 0x10) - *(int *)((longlong)param_1 + 0x691));
    FUN_01cc0ae0(lVar9,&local_e8);
    FUN_00416cd0(&local_e0,4,local_e8,&DAT_0153778c,param_1[0x274],&DAT_0153779c);
    FUN_01cc09f0(lVar9,local_e0);
    if (*(char *)((longlong)param_1 + 0x9a6) == '\x04') {
      *(undefined1 *)(lVar9 + 0x18) = 0;
    }
    lVar9 = FUN_01d347d0(lVar10,(*(int *)(lVar10 + 0x10) - *(int *)((longlong)param_1 + 0x691)) + 1)
    ;
    FUN_01cc0ae0(lVar9,&local_f8);
    FUN_00416cd0(&local_f0,4,local_f8,&DAT_0153778c,param_1[0x274],&DAT_015377b0);
    FUN_01cc09f0(lVar9,local_f0);
    if (*(char *)((longlong)param_1 + 0x9a6) == '\x05') {
      *(undefined1 *)(lVar9 + 0x18) = 0;
    }
    lVar9 = FUN_01d347d0(lVar10,(*(int *)(lVar10 + 0x10) - *(int *)((longlong)param_1 + 0x691)) + 2)
    ;
    FUN_01cc0ae0(lVar9,&local_108);
    FUN_00416cd0(&local_100,4,local_108,&DAT_0153778c,param_1[0x274],&DAT_015377c4);
    FUN_01cc09f0(lVar9,local_100);
    if (*(char *)((longlong)param_1 + 0x9a6) == '\x04') {
      *(undefined1 *)(lVar9 + 0x18) = 0;
    }
    lVar10 = FUN_01d347d0(lVar10,(*(int *)(lVar10 + 0x10) - *(int *)((longlong)param_1 + 0x691)) + 3
                         );
    FUN_01cc0ae0(lVar10,&local_118);
    puVar17 = (undefined8 *)param_1[0x274];
    puVar18 = &DAT_015377d8;
    FUN_00416cd0(&local_110,4,local_118,&DAT_0153778c,puVar17,&DAT_015377d8);
    ppuVar12 = local_110;
    FUN_01cc09f0(lVar10);
    if (*(char *)((longlong)param_1 + 0x9a6) == '\x05') {
      *(undefined1 *)(lVar10 + 0x18) = 0;
    }
    uVar5 = 0;
    while (((int)uVar5 <= (int)(uint)*(ushort *)((longlong)param_1 + 0x993) &&
           ((char)param_1[0x277] == '\0'))) {
      if ((param_2 == '\0') || (*PTR_DAT_02002b78 != '\0')) {
        puVar17 = (undefined8 *)CONCAT44((int)((ulonglong)puVar17 >> 0x20),uVar5);
        puVar18 = (undefined *)
                  CONCAT71((int7)((ulonglong)puVar18 >> 8),
                           *(undefined1 *)((longlong)param_1 + 0x9a5));
        in_stack_fffffffffffffeb8 =
             (undefined1 *)((ulonglong)in_stack_fffffffffffffeb8 & 0xffffffffffffff00);
        lVar10 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0x995),
                              *(undefined8 *)((longlong)param_1 + 0x99d),0,
                              *(undefined2 *)((longlong)param_1 + 0x993),puVar17,puVar18,
                              in_stack_fffffffffffffeb8);
        param_1[0x74] = lVar10;
      }
      else {
        uVar15 = FUN_010e1630(3,0,0,0);
        ppuVar12 = &PTR_FUN_01133e90;
        lVar10 = FUN_004113f0(uVar15,&PTR_FUN_01133e90);
        if (lVar10 != 0) {
          ppuVar12 = (undefined **)(local_c4 + 3);
          lVar10 = FUN_01138ff0(lVar10,ppuVar12);
          param_1[0x74] = lVar10;
        }
      }
      ppuVar12 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar12 >> 8),1);
      FUN_01af25d0(param_1[0x1e2]);
      FUN_01af2990(param_1[0x1e2],
                   (double)(int)uVar5 +
                   ((double)param_1[0x75] - 1.0) * (double)*(ushort *)((longlong)param_1 + 0x993));
      if (param_2 != '\x01' || local_c4[3] != '\0') {
        if (lVar7 != 0) {
          *local_40[0] = 0;
          FUN_016f5520(param_1,lVar7);
          FUN_01374e80(param_1,lVar7);
        }
        if (uVar5 == 0) {
          FUN_017dcfd0(param_1[0x1b],0,1);
          FUN_015363d0(param_1,param_3,&DAT_015377de);
          FUN_01b07850(param_1,param_1[0x23],param_1[0x275]);
        }
        else {
          FUN_01b07850(param_1,param_1[0x275],param_1[0x23]);
        }
        if (param_1[0x98] != 0) {
          lVar10 = FUN_01d347d0(param_1[0x98],0);
          FUN_01b07850(param_1,param_1[0x23],*(undefined8 *)(lVar10 + 8));
        }
        FUN_016f6430(param_1,7,0);
        FUN_016f6430(param_1,8,(double)param_1[0x74] * 6.283185307179586);
        FUN_017dcfd0(param_1[0x1b],1,1);
        FUN_016f3620(param_1,(double)param_1[0x74] * 6.283185307179586,8);
        lVar10 = param_1[0x9e];
        if (*(int *)(lVar10 + 0x10) == 0) {
          FUN_00594f90();
        }
        FUN_017c8650(&local_50,param_1,**(undefined8 **)(lVar10 + 8));
        lVar10 = param_1[0x9e];
        if (*(uint *)(lVar10 + 0x10) < 2) {
          FUN_00594f90();
        }
        FUN_017c8650(&local_60,param_1,*(undefined8 *)(*(longlong *)(lVar10 + 8) + 8));
        if (lVar7 != 0) {
          *local_40[0] = 1;
          FUN_016f5520(param_1,lVar7);
          FUN_01374e80(param_1,lVar7);
        }
        if (uVar5 == 0) {
          FUN_017dcfd0(param_1[0x1b],0,1);
          FUN_015363d0(param_1,param_3,&DAT_015377de);
          FUN_01b07850(param_1,param_1[0x23],param_1[0x276]);
        }
        else {
          FUN_01b07850(param_1,param_1[0x276],param_1[0x23]);
        }
        if (param_1[0x98] != 0) {
          lVar10 = FUN_01d347d0(param_1[0x98],0);
          FUN_01b07850(param_1,param_1[0x23],*(undefined8 *)(lVar10 + 8));
        }
        FUN_016f6430(param_1,7,0);
        FUN_016f6430(param_1,8,(double)param_1[0x74] * 6.283185307179586);
        FUN_017dcfd0(param_1[0x1b],1,1);
        FUN_016f3620(param_1,(double)param_1[0x74] * 6.283185307179586,8);
        lVar10 = param_1[0x9e];
        if (*(uint *)(lVar10 + 0x10) < 3) {
          FUN_00594f90();
        }
        FUN_017c8650(&local_80,param_1,*(undefined8 *)(*(longlong *)(lVar10 + 8) + 0x10));
        lVar10 = param_1[0x9e];
        if (*(uint *)(lVar10 + 0x10) < 4) {
          FUN_00594f90();
        }
        FUN_017c8650(&local_70,param_1,*(undefined8 *)(*(longlong *)(lVar10 + 8) + 0x18));
        FUN_01cc47e0(param_1[0x16],param_1[0x74]);
        puVar17 = &local_80;
        puVar18 = (undefined *)param_1[0x273];
        in_stack_fffffffffffffeb8 = local_90;
        FUN_00c44cb0(*(undefined1 *)((longlong)param_1 + 0x9a6),&local_50,&local_60,&local_70,
                     puVar17,puVar18,in_stack_fffffffffffffeb8,local_a0,local_b0,local_c4 + 4);
        uVar15 = FUN_00c44590(local_90);
        uVar16 = FUN_00c445d0(local_90);
        FUN_01cc48a0(param_1[0x16],0,uVar15,uVar16);
        if (uVar5 == 0) {
          puVar17 = local_48;
          FUN_01cc6830(param_1[0x16],0,5,local_50,local_48);
        }
        if (uVar5 == *(ushort *)((longlong)param_1 + 0x993)) {
          puVar17 = local_48;
          FUN_01cc68e0(param_1[0x16],0,5,local_50,local_48);
        }
        uVar15 = FUN_00c44590(local_a0);
        uVar16 = FUN_00c445d0(local_a0);
        FUN_01cc48a0(param_1[0x16],1,uVar15,uVar16);
        if (uVar5 == 0) {
          puVar17 = local_58;
          FUN_01cc6830(param_1[0x16],1,5,local_60,local_58);
        }
        if (uVar5 == *(ushort *)((longlong)param_1 + 0x993)) {
          puVar17 = local_58;
          FUN_01cc68e0(param_1[0x16],1,5,local_60,local_58);
        }
        uVar15 = FUN_00c44590(local_c4 + 4);
        uVar16 = FUN_00c445d0(local_c4 + 4);
        FUN_01cc48a0(param_1[0x16],2,uVar15,uVar16);
        if (uVar5 == 0) {
          puVar17 = local_78;
          FUN_01cc6830(param_1[0x16],2,5,local_80,local_78);
        }
        if (uVar5 == *(ushort *)((longlong)param_1 + 0x993)) {
          puVar17 = local_78;
          FUN_01cc68e0(param_1[0x16],2,5,local_80,local_78);
        }
        uVar15 = FUN_00c44590(local_b0);
        uVar16 = FUN_00c445d0(local_b0);
        ppuVar12 = (undefined **)0x0;
        FUN_01cc48a0(param_1[0x16],3,uVar15,uVar16);
        if (uVar5 == 0) {
          ppuVar12 = (undefined **)0x0;
          puVar17 = local_68;
          FUN_01cc6830(param_1[0x16],3,5,local_70,local_68);
        }
        if (uVar5 == *(ushort *)((longlong)param_1 + 0x993)) {
          ppuVar12 = (undefined **)0x0;
          puVar17 = local_68;
          FUN_01cc68e0(param_1[0x16],3,5,local_70,local_68);
        }
      }
      uVar5 = uVar5 + 1;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      if (param_2 == '\x01') {
        ppuVar12 = (undefined **)0x0;
        lVar10 = FUN_010e1630(8);
        if (lVar10 != 0) {
          uVar15 = FUN_0065b870(lVar10);
          ppuVar12 = (undefined **)0x534;
          thunk_FUN_041b2403(uVar15);
        }
      }
      cVar2 = FUN_01af2a10(param_1[0x1e2]);
      if (cVar2 != '\0') {
        uVar15 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1);
        *(undefined8 *)PTR_DAT_02005168 = uVar15;
        uVar4 = FUN_01536240(param_1 + 0xbb);
        puVar17 = (undefined8 *)((ulonglong)puVar17 & 0xffffffffffffff00);
        FUN_013d6a00(*(undefined8 *)PTR_DAT_02005168,uVar4,0,0,puVar17);
        ppuVar12 = (undefined **)0x0;
        FUN_01af29f0(param_1[0x1e2]);
      }
    }
    if ((((*(char *)((longlong)param_1 + 0x5db) == '\x01') &&
         (*(char *)((longlong)param_1 + 0x69e) != '\0')) ||
        ((*(char *)((longlong)param_1 + 0x5db) == '\x02' &&
         (*(char *)((longlong)param_1 + 0x69f) != '\0')))) &&
       (((double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         *(double *)((longlong)param_1 + 0x695) != (double)param_1[0x75] &&
        (*(char *)((longlong)param_1 + 0x49c) == '\0')))) {
      uVar5 = FUN_01536240(param_1 + 0xbb);
      uVar13 = (ulonglong)uVar5;
      FUN_013d6a00(param_1[0x16],uVar13,0,0,1);
      ppuVar12 = (undefined **)CONCAT71((int7)(uVar13 >> 8),6);
      puVar17 = (undefined8 *)0x0;
      FUN_017cc020(param_1 + 0x16,ppuVar12,param_2 == '\x01',*(undefined8 *)(param_1[0x14] + 0x360),
                   0,(ulonglong)puVar18 & 0xffffffffffffff00);
      if (*(byte *)((longlong)param_1 + 0x5db) < 8) {
        bVar14 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                  (*(byte *)((longlong)param_1 + 0x5db) & 0x1f) & 0xdeU) != 0;
      }
      else {
        bVar14 = false;
      }
      if ((bVar14) && (*(char *)((longlong)param_1 + 0x5db) == '\x02')) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          if (*(longlong *)((longlong)param_1 + 0xa09) != 0) {
            iVar6 = FUN_01b07e10(param_1,*(undefined8 *)((longlong)param_1 + 0xa09));
            param_1[0x271] = *(longlong *)(param_1[0x56] + -8 + (longlong)iVar6 * 8);
            ppuVar12 = (undefined **)param_1[0x271];
            FUN_012b4370(param_1);
          }
        }
        else {
          FUN_012b49a0(param_1[0xb1]);
        }
      }
    }
    param_1[0x75] = (longlong)((double)param_1[0x75] + 1.0);
  }
  param_1[0x75] = (longlong)((double)param_1[0x75] - 1.0);
  FUN_00414560(&local_118,10);
  return;
}

