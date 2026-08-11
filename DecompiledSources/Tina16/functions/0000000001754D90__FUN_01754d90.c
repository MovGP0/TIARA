/* Ghidra address: 01754d90 */
/* Ghidra symbol: FUN_01754d90 */


void FUN_01754d90(longlong *param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 local_d0 [2];
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c [21];
  
  local_d0[0] = 0;
  if (param_1[0xb] != 0) {
    FUN_00410f20(param_1[0xb]);
  }
  param_1[0xb] = 0;
  if ((param_1[6] == 0) || (*(longlong *)(param_1[6] + 0xe00) == 0)) goto LAB_017554ca;
  puVar10 = (undefined8 *)FUN_01cfde70(param_1[5],1,0,&local_89,&local_8a,&local_8b);
  uVar13 = *puVar10;
  pdVar11 = (double *)FUN_01cfde70(param_1[5],2,0,&local_89,&local_8a,&local_8b);
  dVar1 = *pdVar11;
  pdVar11 = (double *)FUN_01cfde70(param_1[5],3,0,&local_89,&local_8a,&local_8b);
  dVar2 = *pdVar11;
  pdVar11 = (double *)FUN_01cfde70(param_1[5],4,0,&local_89,&local_8a,&local_8b);
  dVar3 = *pdVar11;
  puVar15 = &local_8a;
  pdVar11 = (double *)FUN_01cfde70(param_1[5],5,0,&local_89,puVar15,&local_8b);
  uVar8 = (undefined4)((ulonglong)puVar15 >> 0x20);
  dVar4 = *pdVar11;
  lVar5 = param_1[6];
  if (*(char *)(lVar5 + 0xdca) == '\0') {
    uVar12 = FUN_00b90650(*(undefined8 *)(lVar5 + 0xdd0),uVar13);
    *(undefined8 *)(param_1[6] + 0xdd0) = uVar12;
    lVar5 = param_1[6];
    uVar12 = FUN_00b90620(*(undefined8 *)(param_1[6] + 0xdd0),uVar13);
    *(undefined8 *)(lVar5 + 0xdd8) = uVar12;
    *(undefined1 *)(lVar5 + 0xdca) = 0;
  }
  else {
    *(undefined8 *)(lVar5 + 0xdd0) = uVar13;
    *(undefined8 *)(lVar5 + 0xdd8) = uVar13;
  }
  uVar12 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,*(undefined8 *)(param_1[6] + 0xe00));
  (**(code **)(*(longlong *)param_1[5] + 0x288))((longlong *)param_1[5],local_d0);
  uVar17 = 0;
  FUN_00f1ad50(uVar12,*(undefined8 *)(param_1[6] + 0xe00),0,0,CONCAT44(uVar8,4),0,uVar13,0,4,
               -dVar2 + dVar1,dVar2 + dVar1,0,4,-dVar4 + dVar3,dVar4 + dVar3,local_d0[0],
               param_1 + 0xb);
  if (param_1[0xb] == 0) goto LAB_017554ca;
  (**(code **)(*param_1 + 8))(param_1,&local_bc,param_2,param_3,param_4);
  uVar13 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
  FUN_01d048c0(param_1[5],local_bc + -1,local_b8 + -1,&local_7c,&local_80,uVar13,1);
  uVar12 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  FUN_01d048c0(param_1[5],local_b4 + 1,local_b0 + 1,&local_84,&local_88,uVar12,1);
  FUN_01a98380(param_2,local_7c,local_80,&local_78,&local_74);
  FUN_01a98380(param_2,local_84,local_88,&local_70,local_6c);
  local_74 = local_74 + 1;
  local_6c[0] = local_6c[0] + -1;
  local_70 = local_70 + -2;
  local_78 = local_78 + 2;
  (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_78);
  iVar7 = FUN_00b905f0(local_70 - local_78,local_6c[0] - local_74);
  uVar8 = FUN_0040c770((double)iVar7 * 0.05);
  uVar8 = FUN_00b905f0(0xe,uVar8);
  uVar8 = FUN_00b905e0(8,uVar8);
  lVar5 = param_1[0xb];
  *(undefined4 *)(lVar5 + 0x90) = uVar8;
  *(undefined1 *)(lVar5 + 0xb0) = 1;
  uVar13 = FUN_01a97e00(param_2);
  (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar13,0);
  FUN_01a97ea0(param_2,uVar13);
  if (param_4 == '\0') {
LAB_0175533d:
    lVar5 = param_1[0xb];
    *(undefined4 *)(lVar5 + 0x48) = 0xffffff;
    *(undefined4 *)(lVar5 + 0xa8) = 0xc0c0c0;
  }
  else {
    cVar6 = FUN_01d07320(param_1[5]);
    if (cVar6 < '\0') goto LAB_0175533d;
    plVar14 = (longlong *)FUN_00609e10(DAT_0210ffb0);
    uVar8 = (**(code **)(*plVar14 + 0x30))(plVar14,0,0);
    lVar5 = param_1[0xb];
    *(undefined4 *)(lVar5 + 0x48) = uVar8;
    *(undefined4 *)(lVar5 + 0xa8) = 0x808080;
  }
  (**(code **)(*param_1 + 8))(param_1,&local_9c,param_2,param_3,param_4);
  uVar13 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
  FUN_01d048c0(param_1[5],local_9c,local_98,&local_a0,&local_a4,uVar13,1);
  puVar16 = &local_ac;
  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  FUN_01d048c0(param_1[5],local_94,local_90,&local_a8,puVar16,uVar13,1);
  uVar18 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar8 = (undefined4)((ulonglong)puVar16 >> 0x20);
  if (param_4 != '\0') {
    cVar6 = FUN_01d07320(param_1[5]);
    if (-1 < cVar6) {
      plVar14 = (longlong *)FUN_00609e10(DAT_0210ffb0);
      uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,0,0);
      (**(code **)(*param_2 + 0x60))
                (param_2,local_a0,local_a4,local_a8,CONCAT44(uVar8,local_ac),CONCAT44(uVar18,uVar9))
      ;
      goto LAB_017554ca;
    }
  }
  uVar9 = (**(code **)(*param_2 + 0xd0))(param_2,0);
  (**(code **)(*param_2 + 0x60))
            (param_2,local_a0,local_a4,local_a8,CONCAT44(uVar8,local_ac),CONCAT44(uVar18,uVar9));
LAB_017554ca:
  FUN_00414480(local_d0);
  return;
}

