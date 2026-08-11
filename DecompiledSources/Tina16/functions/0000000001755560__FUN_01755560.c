/* Ghidra address: 01755560 */
/* Ghidra symbol: FUN_01755560 */


void FUN_01755560(longlong *param_1,undefined8 param_2,undefined1 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8 [3];
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c [23];
  
  local_d0 = 0;
  if (param_1[0xb] == 0) goto LAB_01755ad3;
  puVar9 = (undefined8 *)FUN_01cfde70(param_1[5],1,0,&local_99,&local_9a,&local_9b);
  uVar14 = *puVar9;
  pdVar10 = (double *)FUN_01cfde70(param_1[5],2,0,&local_99,&local_9a,&local_9b);
  dVar1 = *pdVar10;
  pdVar10 = (double *)FUN_01cfde70(param_1[5],3,0,&local_99,&local_9a,&local_9b);
  dVar2 = *pdVar10;
  pdVar10 = (double *)FUN_01cfde70(param_1[5],4,0,&local_99,&local_9a,&local_9b);
  dVar3 = *pdVar10;
  puVar15 = &local_9a;
  pdVar10 = (double *)FUN_01cfde70(param_1[5],5,0,&local_99,puVar15,&local_9b);
  uVar8 = (undefined4)((ulonglong)puVar15 >> 0x20);
  dVar4 = *pdVar10;
  iVar7 = (**(code **)(**(longlong **)(param_1[0xb] + 0x80) + 0x28))
                    (*(longlong **)(param_1[0xb] + 0x80));
  if (iVar7 == 0) goto LAB_01755ad3;
  lVar11 = (**(code **)(**(longlong **)(param_1[0xb] + 0x80) + 0x30))
                     (*(longlong **)(param_1[0xb] + 0x80),0);
  uVar5 = *(undefined8 *)(lVar11 + 0xd0);
  local_b8[0] = 0;
  uVar12 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,uVar5);
  (**(code **)(*(longlong *)param_1[5] + 0x288))((longlong *)param_1[5],&local_d0);
  FUN_00f1ad50(uVar12,uVar5,0,0,CONCAT44(uVar8,4),0,uVar14,0,4,-dVar2 + dVar1,dVar2 + dVar1,0,4,
               -dVar4 + dVar3,dVar4 + dVar3,local_d0,local_b8);
  FUN_00410f20(param_1[0xb]);
  param_1[0xb] = local_b8[0];
  if (param_4 == '\0') {
LAB_017558a3:
    lVar11 = param_1[0xb];
    *(undefined4 *)(lVar11 + 0x48) = 0xffffff;
    *(undefined4 *)(lVar11 + 0xa8) = 0xc0c0c0;
  }
  else {
    cVar6 = FUN_01d07320(param_1[5]);
    if (cVar6 < '\0') goto LAB_017558a3;
    plVar13 = (longlong *)FUN_00609e10(DAT_0210ffb0);
    uVar8 = (**(code **)(*plVar13 + 0x30))(plVar13,0,0);
    lVar11 = param_1[0xb];
    *(undefined4 *)(lVar11 + 0x48) = uVar8;
    *(undefined4 *)(lVar11 + 0xa8) = 0x808080;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*param_1 + 8))(param_1,&local_c8,param_2,param_3,param_4);
    FUN_01d048c0(param_1[5],local_c8 + -1,local_c4 + -1,&local_8c,&local_90,1,1);
    FUN_01d048c0(param_1[5],local_c0 + 1,local_bc + 1,&local_94,&local_98,1,1);
    FUN_01a98380(param_2,local_8c,local_90,&local_88,&local_84);
    FUN_01a98380(param_2,local_94,local_98,&local_80,local_7c);
    local_84 = local_84 + 1;
    local_7c[0] = local_7c[0] + -1;
    local_80 = local_80 + -2;
    local_88 = local_88 + 2;
    (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_88);
    iVar7 = FUN_00b905f0(local_80 - local_88,local_7c[0] - local_84);
    uVar8 = FUN_0040c770((double)iVar7 * 0.05);
    uVar8 = FUN_00b905f0(0xe,uVar8);
    uVar8 = FUN_00b905e0(8,uVar8);
    lVar11 = param_1[0xb];
    *(undefined4 *)(lVar11 + 0x90) = uVar8;
    *(undefined1 *)(lVar11 + 0xb0) = 1;
    uVar14 = FUN_01a97e00(param_2);
    (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar14,0);
    FUN_01cea900(param_1[0xb],uVar14);
    FUN_01a97ea0(param_2,uVar14);
  }
LAB_01755ad3:
  FUN_00414480(&local_d0);
  return;
}

