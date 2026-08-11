/* Ghidra address: 012d0f30 */
/* Ghidra symbol: FUN_012d0f30 */


ulonglong FUN_012d0f30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,char param_6,double param_7,undefined1 param_8)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  uint local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  uint local_94;
  longlong local_90;
  undefined1 local_80 [8];
  double local_78;
  double local_70;
  double local_68;
  double local_60 [7];
  
  local_b0 = param_1;
  if (param_6 == '\x03') {
    local_94 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x628);
    local_a8 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_4);
    local_a0 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_5);
    FUN_0113f830(param_2,local_a8,local_60,&local_68);
    FUN_0113f830(param_3,local_a0,&local_70,&local_78);
    cVar2 = FUN_012d0e80(auStack_f8,local_60[0],local_70,0x3f847ae147ae147b);
    if ((cVar2 == '\0') ||
       (cVar2 = FUN_012d0e80(auStack_f8,local_68,local_78,0x3f847ae147ae147b), cVar2 == '\0')) {
      unaff_RDI = 0;
    }
    else {
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    }
    if ((char)unaff_RDI == '\0') {
      local_d8 = L"Min & max values are different";
      local_d0 = local_d0 & 0xffffff00;
      FUN_012d2550(local_b0,8,6,param_8);
    }
    else {
      local_90 = FUN_00409570((longlong)(int)((local_94 + 1) * 0x10));
      lVar3 = FUN_00409570((longlong)(int)((local_94 + 1) * 0x10));
      uVar4 = FUN_0113e810(&DAT_0113e408,1,0,0);
      local_d8 = (wchar_t *)((local_68 - local_60[0]) / (double)(int)local_94);
      local_d0 = local_94;
      local_c8 = local_90;
      local_c0 = 0;
      FUN_0113eac0(uVar4,param_2,local_a8,local_60[0]);
      local_d8 = (wchar_t *)((local_78 - local_70) / (double)(int)local_94);
      local_d0 = local_94;
      local_c0 = 0;
      local_c8 = lVar3;
      FUN_0113eac0(uVar4,param_3,local_a0,local_70);
      FUN_00410f20(uVar4);
      dVar11 = 0.0;
      (**(code **)(*local_a0 + 0x70))(local_a0,param_3);
      dVar9 = (double)FUN_0040c850();
      (**(code **)(*local_a0 + 0x68))(local_a0,param_3);
      dVar10 = (double)FUN_0040c850();
      if (dVar10 < dVar9) {
        dVar10 = dVar9;
      }
      if (dVar10 < 1e-15) {
        dVar10 = 1e-15;
      }
      iVar6 = 0;
      dVar9 = 0.0;
      uVar5 = local_94;
      if (-1 < (int)(local_94 - 1)) {
        do {
          dVar9 = (*(double *)(lVar3 + (longlong)iVar6 * 0x10) -
                  *(double *)(local_90 + (longlong)iVar6 * 0x10)) / dVar10;
          dVar11 = dVar11 + dVar9 * dVar9;
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 - 1;
          dVar9 = dVar11;
        } while (uVar5 != 0);
      }
      dVar10 = (double)FUN_0040c760(dVar9 / (double)(int)local_94);
      *(double *)(*(longlong *)(local_b0 + 0x18) + 0x10) = dVar10 * 100.0;
      bVar1 = *(double *)(*(longlong *)(local_b0 + 0x18) + 0x10) <= param_7;
      unaff_RDI = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar1);
      FUN_004095f0(local_90);
      FUN_004095f0(lVar3);
      if (!bVar1) {
        local_d8 = L"Comparison failed";
        local_d0 = local_d0 & 0xffffff00;
        FUN_012d2550(local_b0,9,6,param_8);
      }
    }
  }
  else if (param_6 == '\x04') {
    local_a8 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cba328,1,param_4);
    local_a0 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cba328,1,param_5);
    (**(code **)(*local_a8 + 0x10))(local_a8,param_2,0);
    (**(code **)(*local_a0 + 0x10))(local_a0,param_3,0);
    local_94 = FUN_01cc7250(local_a8,param_2);
    uVar5 = FUN_01cc7250(local_a0,param_3);
    if (local_94 == uVar5) {
      local_90 = FUN_00409570((longlong)(int)(local_94 << 4));
      lVar3 = FUN_00409570((longlong)(int)(local_94 << 4));
      dVar12 = 0.0;
      dVar11 = 0.0;
      uVar8 = (ulonglong)(local_94 - 1);
      iVar6 = 0;
      dVar10 = 0.0;
      dVar9 = 0.0;
      if (-1 < (int)(local_94 - 1)) {
        uVar8 = (ulonglong)local_94;
        do {
          lVar7 = (longlong)iVar6;
          (**(code **)(*local_a8 + 0x30))
                    (local_a8,local_90 + lVar7 * 0x10,local_90 + lVar7 * 0x10 + 8,0);
          uVar4 = FUN_00c43c40(*(undefined8 *)(local_90 + lVar7 * 0x10 + 8),0x401921fb54442d18);
          *(undefined8 *)(local_90 + lVar7 * 0x10 + 8) = uVar4;
          (**(code **)(*local_a0 + 0x30))(local_a0,lVar3 + lVar7 * 0x10,lVar3 + 8 + lVar7 * 0x10);
          uVar4 = FUN_00c43c40(*(undefined8 *)(lVar3 + 8 + lVar7 * 0x10),0x401921fb54442d18);
          *(undefined8 *)(lVar3 + 8 + lVar7 * 0x10) = uVar4;
          dVar9 = (double)FUN_0040c850(*(undefined8 *)(lVar3 + lVar7 * 0x10));
          dVar10 = (double)FUN_0040c850(*(undefined8 *)(local_90 + lVar7 * 0x10));
          if (dVar10 < dVar9) {
            dVar10 = dVar9;
          }
          dVar10 = (*(double *)(lVar3 + (longlong)iVar6 * 0x10) -
                   *(double *)(local_90 + (longlong)iVar6 * 0x10)) / (dVar10 + 1e-06);
          dVar12 = dVar12 + dVar10 * dVar10;
          dVar9 = (double)FUN_0040c850(*(undefined8 *)(lVar3 + 8 + (longlong)iVar6 * 0x10));
          dVar10 = (double)FUN_0040c850(*(undefined8 *)(local_90 + (longlong)iVar6 * 0x10 + 8));
          if (dVar10 < dVar9) {
            dVar10 = dVar9;
          }
          dVar10 = (*(double *)(lVar3 + 8 + (longlong)iVar6 * 0x10) -
                   *(double *)(local_90 + (longlong)iVar6 * 0x10 + 8)) / (dVar10 + 1e-06);
          dVar11 = dVar11 + dVar10 * dVar10;
          iVar6 = iVar6 + 1;
          uVar5 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar5;
          dVar10 = dVar12;
          dVar9 = dVar11;
        } while (uVar5 != 0);
      }
      dVar11 = (double)FUN_0040c760(dVar10 / (double)(int)local_94);
      dVar11 = dVar11 * 100.0;
      dVar10 = (double)FUN_0040c760(dVar9 / (double)(int)local_94);
      dVar10 = dVar10 * 100.0;
      if (*(char *)(local_b0 + 0x10) == '\0') {
        if (dVar10 < dVar11) {
          dVar10 = dVar11;
        }
        *(double *)(*(longlong *)(local_b0 + 0x18) + 0x10) = dVar10;
      }
      else {
        *(double *)(*(longlong *)(local_b0 + 0x18) + 0x10) = dVar11;
        *(double *)(*(longlong *)(local_b0 + 0x18) + 0x18) = dVar10;
      }
      bVar1 = *(double *)(*(longlong *)(local_b0 + 0x18) + 0x10) <= param_7;
      unaff_RDI = CONCAT71((int7)(uVar8 >> 8),bVar1);
      FUN_004095f0(local_90);
      FUN_004095f0(lVar3);
      if (!bVar1) {
        local_d8 = L"Comparison failed";
        local_d0 = local_d0 & 0xffffff00;
        FUN_012d2550(local_b0,9,8,param_8);
      }
    }
    else {
      local_d8 = L"Number of frequency points is different";
      local_d0 = local_d0 & 0xffffff00;
      FUN_012d2550(local_b0,8,8,param_8);
    }
  }
  else {
    local_a8 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_4);
    local_a0 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_5);
    (**(code **)(*local_a8 + 0x10))(local_a8,param_2,0);
    (**(code **)(*local_a0 + 0x10))(local_a0,param_3,0);
    local_94 = FUN_01cc7250(local_a8,param_2);
    uVar5 = FUN_01cc7250(local_a0,param_3);
    if (local_94 == uVar5) {
      local_90 = FUN_00409570((longlong)(int)(local_94 << 4));
      lVar3 = FUN_00409570((longlong)(int)(local_94 << 4));
      dVar11 = 0.0;
      (**(code **)(*local_a0 + 0x70))(local_a0,param_3);
      dVar9 = (double)FUN_0040c850();
      (**(code **)(*local_a0 + 0x68))(local_a0,param_3);
      dVar10 = (double)FUN_0040c850();
      if (dVar10 < dVar9) {
        dVar10 = dVar9;
      }
      if (dVar10 < 1e-06) {
        dVar10 = 1e-06;
      }
      uVar8 = (ulonglong)(local_94 - 1);
      iVar6 = 0;
      dVar9 = 0.0;
      if (-1 < (int)(local_94 - 1)) {
        uVar8 = (ulonglong)local_94;
        do {
          lVar7 = (longlong)iVar6;
          (**(code **)(*local_a8 + 0x30))(local_a8,local_80,local_90 + lVar7 * 0x10,0);
          *(undefined8 *)(local_90 + lVar7 * 0x10 + 8) = 0;
          (**(code **)(*local_a0 + 0x30))(local_a0,local_80,lVar3 + lVar7 * 0x10);
          *(undefined8 *)(lVar3 + 8 + lVar7 * 0x10) = 0;
          dVar9 = (*(double *)(lVar3 + lVar7 * 0x10) - *(double *)(local_90 + lVar7 * 0x10)) /
                  dVar10;
          dVar11 = dVar11 + dVar9 * dVar9;
          iVar6 = iVar6 + 1;
          uVar5 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar5;
          dVar9 = dVar11;
        } while (uVar5 != 0);
      }
      dVar10 = (double)FUN_0040c760(dVar9 / (double)(int)local_94);
      *(double *)(*(longlong *)(local_b0 + 0x18) + 0x10) = dVar10 * 100.0;
      bVar1 = *(double *)(*(longlong *)(local_b0 + 0x18) + 0x10) <= param_7;
      unaff_RDI = CONCAT71((int7)(uVar8 >> 8),bVar1);
      FUN_004095f0(local_90);
      FUN_004095f0(lVar3);
      if (!bVar1) {
        local_d8 = L"Comparison failed";
        local_d0 = local_d0 & 0xffffff00;
        FUN_012d2550(local_b0,9,1,param_8);
      }
    }
    else {
      local_d8 = L"Number of points is different";
      local_d0 = local_d0 & 0xffffff00;
      FUN_012d2550(local_b0,8,1,param_8);
    }
  }
  FUN_00410f20(local_a8);
  FUN_00410f20(local_a0);
  return unaff_RDI & 0xffffffff;
}

