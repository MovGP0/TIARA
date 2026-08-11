/* Ghidra address: 01756730 */
/* Ghidra symbol: FUN_01756730 */


void FUN_01756730(longlong *param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double *pdVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  double dVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined1 local_e9;
  undefined8 local_e8;
  undefined8 local_e0 [2];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c [23];
  
  local_e0[0] = 0;
  if (param_1[0xb] != 0) {
    FUN_00410f20(param_1[0xb]);
  }
  param_1[0xb] = 0;
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0xe00) != 0)) {
    pdVar8 = (double *)FUN_01cfde70(param_1[5],1,0,&local_b9,&local_ba,&local_bb);
    dVar1 = *pdVar8;
    pdVar8 = (double *)FUN_01cfde70(param_1[5],3,0,&local_b9,&local_ba,&local_bb);
    dVar16 = *pdVar8;
    pdVar8 = (double *)FUN_01cfde70(param_1[5],4,0,&local_b9,&local_ba,&local_bb);
    dVar2 = *pdVar8;
    pdVar8 = (double *)FUN_01cfde70(param_1[5],5,0,&local_b9,&local_ba,&local_bb);
    dVar12 = *pdVar8;
    pdVar8 = (double *)FUN_01cfde70(param_1[5],6,0,&local_b9,&local_ba,&local_bb);
    dVar13 = *pdVar8;
    puVar14 = &local_ba;
    pcVar9 = (char *)FUN_01cfde70(param_1[5],8,0,&local_b9,puVar14,&local_bb);
    uVar6 = (undefined4)((ulonglong)puVar14 >> 0x20);
    cVar4 = *pcVar9;
    if (cVar4 == '\0') {
      local_e8 = FUN_01cc6f70(&PTR_FUN_01cb8cd8,1,*(undefined8 *)(param_1[6] + 0xe00));
      dVar12 = dVar12 * dVar1;
      dVar13 = dVar13 * dVar1;
      local_e9 = 0;
    }
    else if (cVar4 == '\x01') {
      local_e8 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,*(undefined8 *)(param_1[6] + 0xe00));
      local_e9 = 0;
    }
    else if (cVar4 == '\x02') {
      local_e8 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,*(undefined8 *)(param_1[6] + 0xe00));
      local_e9 = 1;
    }
    lVar3 = param_1[6];
    *(double *)(lVar3 + 0xdd0) = dVar2 - dVar16;
    *(double *)(lVar3 + 0xdd8) = dVar2 - dVar16;
    (**(code **)(*(longlong *)param_1[5] + 0x288))((longlong *)param_1[5],local_e0);
    FUN_00f19c70(local_e8,*(undefined8 *)(lVar3 + 0xe00),0,2,CONCAT44(uVar6,2),dVar16,dVar2,local_e9
                 ,4,dVar12,dVar13,local_e0[0],param_1 + 0xb);
    (**(code **)(*param_1 + 8))(param_1,&local_cc,param_2,param_3,param_4);
    uVar10 = CONCAT71((int7)((ulonglong)dVar16 >> 8),1);
    FUN_01d048c0(param_1[5],local_cc,local_c8,&local_8c,&local_90,uVar10,1);
    uVar17 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    FUN_01d048c0(param_1[5],local_c4,local_c0,&local_94,&local_98,uVar17,1);
    FUN_01a98380(param_2,local_8c,local_90,&local_88,&local_84);
    FUN_01a98380(param_2,local_94,local_98,&local_80,local_7c);
    local_84 = local_84 + 1;
    local_7c[0] = local_7c[0] + -1;
    local_80 = local_80 + -2;
    local_88 = local_88 + 2;
    (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_88);
    iVar5 = FUN_00b905f0(local_80 - local_88,local_7c[0] - local_84);
    uVar6 = FUN_0040c770((double)iVar5 * 0.05);
    uVar6 = FUN_00b905f0(0xe,uVar6);
    uVar6 = FUN_00b905e0(8,uVar6);
    lVar3 = param_1[0xb];
    *(undefined4 *)(lVar3 + 0x90) = uVar6;
    *(undefined1 *)(lVar3 + 0xb0) = 1;
    uVar10 = FUN_01a97e00(param_2);
    (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar10,0);
    FUN_01a97ea0(param_2,uVar10);
    (**(code **)(*param_1 + 8))(param_1,&local_a8,param_2,param_3,param_4);
    uVar10 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
    FUN_01d048c0(param_1[5],local_a8,local_a4,&local_ac,&local_b0,uVar10,1);
    puVar15 = &local_b8;
    uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    FUN_01d048c0(param_1[5],local_a0,local_9c,&local_b4,puVar15,uVar10,1);
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar6 = (undefined4)((ulonglong)puVar15 >> 0x20);
    if (param_4 != '\0') {
      cVar4 = FUN_01d07320(param_1[5]);
      if (-1 < cVar4) {
        plVar11 = (longlong *)FUN_00609e10(DAT_0210ffb0);
        uVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,0,0);
        (**(code **)(*param_2 + 0x60))
                  (param_2,local_ac,local_b0,local_b4,CONCAT44(uVar6,local_b8),
                   CONCAT44(uVar18,uVar7));
        goto LAB_01756da8;
      }
    }
    uVar7 = (**(code **)(*param_2 + 0xd0))(param_2,0);
    (**(code **)(*param_2 + 0x60))
              (param_2,local_ac,local_b0,local_b4,CONCAT44(uVar6,local_b8),CONCAT44(uVar18,uVar7));
  }
LAB_01756da8:
  FUN_00414480(local_e0);
  return;
}

