/* Ghidra address: 01567ca0 */
/* Ghidra symbol: FUN_01567ca0 */


void FUN_01567ca0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  short *psVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  undefined8 *puVar16;
  double *pdVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 in_stack_ffffffffffffebf0;
  int local_13c8;
  undefined8 local_13c0 [261];
  int local_b92;
  undefined8 local_a88 [202];
  undefined1 local_438;
  int local_25a;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 local_100 [2];
  double local_f0 [4];
  double local_d0;
  char *local_70;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  
  local_438 = 0;
  puVar16 = local_a88;
  for (lVar14 = 0x127; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_13c0;
  for (lVar14 = 0x127; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100[0] = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  sVar4 = FUN_01d03160(param_2);
  (**(code **)(*param_2 + 0x288))(param_2,&local_40);
  FUN_015f0d60(local_100,local_40,0xfffffffd,0,0);
  FUN_00416880(&local_40,local_100[0]);
  if (local_40 == 0) {
    FUN_004169a0(&local_40,(longlong)param_2 + 0xfe);
  }
  if ((*(char *)(param_1 + 0x94e) == '\0') ||
     ((((((sVar4 != 0x43 && (sVar4 != 0x34)) && (sVar4 != 0x3b)) &&
        ((sVar4 != 0x462 && (sVar4 != 0x464)))) && (cVar2 = FUN_01d3f2d0(sVar4), cVar2 == '\0')) &&
      (cVar2 = FUN_01d40240(sVar4), cVar2 == '\0')))) {
    if ((char)param_2[0xac] == '\0') {
      if ((sVar4 == 0xa5) || (sVar4 == 0xad)) {
        FUN_017ff4a0(param_2,&local_110);
        uVar19 = local_110;
        FUN_00416cd0(&local_108,3,local_40,L"_cmp_id_",local_110);
        FUN_0043e1a0(&local_48,local_108);
        uVar10 = FUN_01565b80(&DAT_0154ac40,1,local_48,param_2,uVar19 & 0xffffffffffffff00);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x9b8),uVar10);
      }
      if (sVar4 == 0xa8) {
        FUN_017ff4a0(param_2,&local_120);
        FUN_00416cd0(&local_118,3,local_40,L"_cmp_id_",local_120);
        FUN_0043e1a0(&local_48,local_118);
        uVar10 = FUN_01565b80(&DAT_0154ac40,1,local_48,param_2,1);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x9b8),uVar10);
      }
      if (sVar4 == 0x118) {
        FUN_017ff4a0(param_2,&local_130);
        FUN_00416cd0(&local_128,3,local_40,L"_cmp_id_",local_130);
        FUN_0043e1a0(&local_48,local_128);
        psVar11 = (short *)FUN_01cfde70(param_2,1,1,&local_61,&local_62,&local_63);
        sVar1 = *psVar11;
        FUN_017ff4f0(param_2,&local_140);
        FUN_0043f750(&local_148,(int)sVar1);
        in_stack_ffffffffffffebf0 = 0;
        FUN_00416cd0(&local_138,5,local_48,&DAT_01568884,local_140,&DAT_01568884,local_148);
        (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x78))
                  (*(longlong **)(param_1 + 0x9b0),local_138);
      }
    }
    cVar2 = FUN_0154cd20(param_1,param_2);
    if (cVar2 == '\0') {
      FUN_01d3f6f0(sVar4);
    }
    else {
      lVar14 = FUN_0156f530(&DAT_0156e6b0,1);
      FUN_0156f6c0(lVar14,sVar4);
      FUN_0156f6d0(lVar14,local_40);
      *(longlong **)(lVar14 + 0x40) = param_2;
      *(undefined4 *)(lVar14 + 0xf4) = param_3;
      FUN_01571080(*(undefined8 *)(param_1 + 0x8f0),lVar14);
      iVar6 = (**(code **)(*param_2 + 0x1c8))(param_2);
      if (sVar4 == 0x5dd) {
        local_13c8 = 1;
      }
      else if ((sVar4 == 0xa5) || (sVar4 == 0xad)) {
        local_13c8 = 3;
        iVar6 = iVar6 + -2;
      }
      else if (sVar4 == 0xa8) {
        local_13c8 = 0;
        iVar6 = iVar6 + -6;
      }
      else if (sVar4 == 0x118) {
        local_13c8 = 0;
        iVar6 = iVar6 + -2;
      }
      else {
        local_13c8 = 0;
      }
      if (local_13c8 <= iVar6 + -1) {
        iVar18 = ((iVar6 + -1) - local_13c8) + 1;
        do {
          (**(code **)(*param_2 + 0x298))(param_2,&local_58,local_13c8);
          uVar7 = (**(code **)(*param_2 + 0x210))(param_2,local_13c8);
          lVar12 = FUN_015710a0(&DAT_0156d6c8,1,uVar7,*(undefined1 *)(param_1 + 0x94e));
          FUN_0156f740(lVar14,lVar12);
          cVar2 = FUN_00e0f210(*(undefined8 *)(param_1 + 0x938),*(undefined4 *)(lVar12 + 0x30),
                               param_1 + 0xa10);
          if (cVar2 != '\0') {
            FUN_00414ad0(lVar12 + 0x20,*(undefined8 *)(param_1 + 0xa10));
          }
          cVar2 = FUN_015fd300(lVar12,*(undefined8 *)(param_1 + 0xa10));
          if (cVar2 != '\0') {
            FUN_01571520(lVar12,*(undefined8 *)PTR_PTR_02005730);
          }
          if (local_40 != 0) {
            FUN_00416ba0(lVar12 + 0x60,local_40,&DAT_01568894);
          }
          lVar13 = FUN_01571ef0(*(undefined8 *)(param_1 + 0x750),uVar7);
          if (lVar13 != 0) {
            FUN_01571a60(lVar13,&local_58);
            uVar10 = FUN_01571920(lVar13,&local_150);
            FUN_01571860(lVar12,local_58,
                         CONCAT71((int7)((ulonglong)uVar10 >> 8),local_150 == 0) & 0xffffffff);
          }
          cVar2 = FUN_01d3f1d0(param_2);
          if (cVar2 == '\0') {
            if ((sVar4 == 0xa5) || (iVar8 = local_13c8, sVar4 == 0xad)) {
              iVar8 = local_13c8 + -3;
            }
            iVar8 = FUN_0154f930(param_1,lVar14,iVar8,iVar6);
          }
          else {
            iVar8 = FUN_00e0f510(*(undefined8 *)(param_1 + 0x938),param_2,uVar7,&local_60);
          }
          FUN_015714d0(lVar12,iVar8);
          cVar2 = FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),uVar7,&local_38);
          uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffebf0 >> 0x20);
          if ((cVar2 != '\0') && (*(char *)(param_1 + 0x958) != '\0')) {
            if ((iVar8 == 1) || (iVar8 == 3)) {
              *(undefined1 *)(local_38 + 0x38) = 1;
            }
            if ((iVar8 == 2) || (iVar8 == 3)) {
              *(undefined1 *)(local_38 + 0x39) = 1;
            }
            iVar9 = FUN_00416db0(local_40,L"Test1");
            if (iVar9 == 0) {
              *(undefined4 *)(param_1 + 0x928) = 1;
            }
            in_stack_ffffffffffffebf0 = CONCAT44(uVar7,iVar8);
            FUN_015650e0(param_1,param_2,local_13c8,&local_2c,&local_30,in_stack_ffffffffffffebf0);
            if (local_2c == -1) {
              *(undefined4 *)(param_1 + 0x928) = 1;
            }
            else {
              FUN_01575100(local_38,param_2,*(int *)(*(longlong *)(lVar14 + 0x28) + 0x10) + -1,
                           local_2c,local_30);
            }
          }
          local_13c8 = local_13c8 + 1;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      lVar12 = FUN_00e0f340(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)(lVar14 + 0x40));
      if ((((lVar12 != 0) &&
           (iVar6 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar12 + 0x828) + 0x18),
                                 *(undefined8 *)PTR_PTR_020038b0), iVar6 == 0)) &&
          (iVar6 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar12 + 0x828) + 8),L"cqpic"),
          iVar6 != 0)) &&
         (cVar2 = FUN_015fa060(*(undefined8 *)(*(longlong *)(lVar12 + 0x828) + 8)), cVar2 != '\0'))
      {
        uVar10 = FUN_015710a0(&DAT_0156d6c8,1,0xfffffffd,*(undefined1 *)(param_1 + 0x94e));
        FUN_01571520(uVar10,L"ponrst_n");
        FUN_0156f740(lVar14,uVar10);
      }
      cVar2 = FUN_01d3f1d0(param_2);
      if (cVar2 == '\0') {
        FUN_01d3eed0(param_2,local_f0);
        FUN_0156f730(lVar14,(local_f0[1] + local_d0) / 2.0);
        pdVar15 = local_f0;
        pdVar17 = (double *)(lVar14 + 0x68);
        for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar17 = *pdVar15;
          pdVar15 = pdVar15 + 1;
          pdVar17 = pdVar17 + 1;
        }
        if (((sVar4 == 0x45e) || (sVar4 == 0x462)) ||
           ((sVar4 == 0x464 || ((sVar4 == 0x43 || (cVar2 = FUN_01d40240(sVar4), cVar2 != '\0'))))))
        {
          *(undefined1 *)(lVar14 + 0xfc) = 0;
        }
        cVar2 = FUN_01d3d530(sVar4);
        if (((cVar2 != '\0') || (cVar2 = FUN_01d3d590(sVar4), cVar2 != '\0')) || (sVar4 == 0x45d)) {
          cVar2 = FUN_01d3d530(sVar4);
          if ((cVar2 == '\0') && (sVar4 != 0x45d)) {
            cVar2 = FUN_01d40050(sVar4);
            if (cVar2 == '\0') {
              (**(code **)(*param_2 + 0x2d0))(param_2,3,&local_70);
            }
            else {
              (**(code **)(*param_2 + 0x2d0))(param_2,4,&local_70);
            }
          }
          else {
            (**(code **)(*param_2 + 0x2d0))(param_2,4,&local_70);
          }
          cVar2 = *local_70;
          if (((*(char *)(param_1 + 0x954) == '\0') &&
              (FUN_01569cb0(param_1,local_a88), local_25a != 2)) &&
             ((cVar2 != '\0' || (FUN_01569cb0(param_1,local_13c0), local_b92 == 1)))) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)(lVar14 + 0xfc) = uVar3;
        }
        uVar7 = FUN_01d03160(param_2);
        cVar2 = FUN_01d3d590(uVar7);
        if (cVar2 != '\0') {
          uVar5 = FUN_01d03160(param_2);
          cVar2 = FUN_01d40050(uVar5);
          if (cVar2 == '\0') {
            psVar11 = (short *)FUN_01cfde70(param_2,1,3,&local_61,&local_62,&local_63);
            sVar4 = *psVar11;
            if (sVar4 == 1) {
              *(undefined4 *)(lVar14 + 0xf0) = 0;
            }
            else if (sVar4 == 2) {
              *(undefined4 *)(lVar14 + 0xf0) = 1;
            }
            else if (sVar4 == 3) {
              *(undefined4 *)(lVar14 + 0xf0) = 2;
            }
            else if (sVar4 == 4) {
              *(undefined4 *)(lVar14 + 0xf0) = 3;
            }
          }
        }
      }
    }
  }
  FUN_00417840(local_13c0,&DAT_01d0d0b8,2);
  FUN_00414560(&local_150,10);
  FUN_004144d0(local_100);
  FUN_00414560(&local_60,5);
  return;
}

