/* Ghidra address: 01749eb0 */
/* Ghidra symbol: FUN_01749eb0 */


void FUN_01749eb0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffe78;
  undefined8 uVar11;
  undefined8 in_stack_fffffffffffffe80;
  undefined8 *puVar12;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar13;
  byte local_141;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0 [16];
  undefined8 local_60 [2];
  undefined8 local_50;
  short local_45;
  short local_43;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_3d;
  undefined4 local_35;
  byte *local_30;
  
  local_140 = 0;
  local_130 = 0;
  local_138 = (longlong *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_108 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_01749f42:
    if (local_res18 == (longlong *)0x0) goto LAB_0174a633;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_01749f42;
  }
  plVar8 = (longlong *)param_1[5];
  if (*(char *)((longlong)plVar8 + 0xb) != '\0') goto LAB_0174a633;
  (**(code **)(*plVar8 + 0x2d0))(plVar8,0,&local_30);
  if (param_1[8] == 0) {
    lVar6 = FUN_01d06fb0(param_1[5],*(undefined1 *)(param_1[5] + 0xd1));
    param_1[8] = lVar6;
  }
  if ((param_6 == '\0') || (param_1[8] == 0)) {
LAB_0174a3cd:
    if (param_2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*(longlong *)param_1[5] + 0x2a8))((longlong *)param_1[5],param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
    }
    (**(code **)(*param_1 + 8))(param_1,&local_100,param_2,param_5,param_6);
    uVar11 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe80 >> 8),1);
    uVar7 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe88 >> 8),1);
    FUN_01d048c0(param_1[5],local_100 + 4,local_fc + 4,(longlong)&local_e8 + 4,&local_e8,uVar11,
                 uVar7);
    puVar12 = &local_f0;
    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    FUN_01d048c0(param_1[5],local_f8 + -0xc,local_f4 + -2,(longlong)&local_f0 + 4,puVar12,uVar11,
                 uVar7);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar4 = (undefined4)((ulonglong)puVar12 >> 0x20);
    if (param_2 != (longlong *)0x0) {
      uVar5 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      uVar11 = CONCAT44(uVar4,(undefined4)local_f0);
      uVar7 = CONCAT44(uVar3,uVar5);
      (**(code **)(*param_2 + 0x60))
                (param_2,local_e8._4_4_,(undefined4)local_e8,local_f0._4_4_,uVar11,uVar7);
      uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x100))(local_res18,&local_138);
      (**(code **)(*local_138 + 0x100))(local_138,&local_130,L"interactive");
      cVar2 = FUN_0043fc50(local_130,0);
      if (cVar2 != '\0') {
        FUN_01749b20(param_1,&local_140,local_res18,local_res20,CONCAT44(uVar4,(uint)*local_30),
                     CONCAT44(uVar3,0xfffffffc),CONCAT44(uVar13,0xfffffffc),param_2,1);
        goto LAB_0174a616;
      }
    }
    FUN_01749b20(param_1,&local_108,local_res18,local_res20,CONCAT44(uVar4,(uint)*local_30),
                 CONCAT44(uVar3,0xfffffffc),CONCAT44(uVar13,0xfffffffc),param_2,1);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x108))(local_108,L"showtext",L"0:ascii");
    }
  }
  else {
    cVar2 = FUN_01d07320(param_1[5]);
    uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
    if (cVar2 < '\0') goto LAB_0174a3cd;
    cVar2 = FUN_00c3d380(param_1[8],&local_50,&local_45);
    if (cVar2 != '\0') {
      cVar2 = FUN_01d07320(param_1[5]);
      *(int *)(param_1 + 2) = (int)cVar2;
      FUN_01a9d8b0(param_2,(char)param_1[2]);
      FUN_01a9a720(param_2,*(undefined4 *)(param_1[5] + 0xc),*(undefined4 *)(param_1[5] + 0x10));
      uVar3 = FUN_0173cca0(param_1[5],param_5,param_6);
      FUN_01a9a770(param_2,uVar3);
      FUN_01a9a780(param_2,*(undefined1 *)(param_1[5] + 0xd1),*(undefined1 *)(param_1[5] + 0xd3));
      uVar9 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe78 >> 8),local_3e);
      puVar12 = (undefined8 *)CONCAT44(uVar4,local_3d);
      uVar7 = FUN_01a9f1e0(param_2,local_41,local_40,local_3f,uVar9,puVar12,local_50);
      bVar1 = *local_30;
      local_141 = 0;
      uVar11 = local_50;
      do {
        lVar6 = FUN_00609e10(uVar7);
        FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),&DAT_00cdebaf);
        plVar8 = (longlong *)FUN_00609e10(uVar7);
        iVar10 = (uint)local_141 * -8 + 0x42;
        uVar4 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar10,6);
        if ((1 << (local_141 & 0x1f) & (uint)bVar1) != 0) {
          plVar8 = (longlong *)FUN_00609e10(uVar7);
          uVar9 = uVar9 & 0xffffffffffffff00;
          (**(code **)(*plVar8 + 0xb0))(plVar8,iVar10,6,uVar4,uVar9);
        }
        uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_141 = local_141 + 1;
      } while (local_141 != 8);
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        if (*(int *)((longlong)param_1 + 0x14) == (int)param_1[2]) {
          FUN_00410f20(uVar7);
          uVar3 = (undefined4)(uVar9 >> 0x20);
        }
        else {
          puVar12 = (undefined8 *)0x0;
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          FUN_01a9f420(param_2,(longlong)local_45,(longlong)local_43,local_35,uVar7,0,uVar11);
          uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
          uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
        }
      }
      else if ((char)param_1[7] == '\0') {
        FUN_00498350(local_60,(uint)*(byte *)((longlong)param_1 + 0x39) * -8 + 0x18,0xfffffff4,
                     (uint)*(byte *)((longlong)param_1 + 0x39) * -8 + 0x1f,0xfffffffc);
        puVar12 = local_60;
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        FUN_01a9f420(param_2,(longlong)local_45,(longlong)local_43,local_35,uVar7,puVar12,uVar11);
        uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      }
      else {
        uVar9 = 1;
        local_141 = 0;
        do {
          if ((1 << (local_141 & 0x1f) & (uint)(*(byte *)((longlong)param_1 + 0x3a) ^ *local_30)) !=
              0) {
            FUN_00498350(&local_118,(uint)local_141 * -8 + 0x18,0xfffffff4,
                         (uint)local_141 * -8 + 0x1f,0xfffffffc);
            (&local_f0)[uVar9 * 2] = local_118;
            (&local_e8)[uVar9 * 2] = uStack_110;
            uVar9 = (ulonglong)(byte)((char)uVar9 + 1);
          }
          local_141 = local_141 + 1;
        } while (local_141 != 8);
        puVar12 = local_e0;
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),(char)uVar9);
        FUN_01a9f420(param_2,(longlong)local_45,(longlong)local_43,local_35,uVar7,puVar12,uVar11);
        uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      }
      uVar9 = (ulonglong)puVar12 & 0xffffffff00000000;
      FUN_01749b20(param_1,&local_120,local_res18,local_res20,
                   CONCAT44(uVar3,(uint)*(byte *)((longlong)param_1 + 0x3a)),uVar9,
                   CONCAT44(uVar4,0xffffffe4),param_2,0);
      FUN_01749b20(param_1,&local_128,local_res18,local_res20,*local_30,uVar9 & 0xffffffff00000000,
                   0xffffffe4,param_2,1);
    }
  }
LAB_0174a616:
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    *(byte *)((longlong)param_1 + 0x3a) = *local_30;
  }
LAB_0174a633:
  FUN_00417840(&local_140,&LAB_00b9fca0,2);
  FUN_00414480(&local_130);
  FUN_00417840(&local_128,&LAB_00b9fca0,2);
  FUN_0041b800(&local_108);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

