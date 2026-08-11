/* Ghidra address: 0137dde0 */
/* Ghidra symbol: FUN_0137dde0 */


void FUN_0137dde0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70 [8];
  
  FUN_0113f830(param_2,*(undefined8 *)(param_1 + 0x60),local_70,&local_78);
  dVar9 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
  uVar8 = FUN_0113e810(&DAT_0113e408,1,0,0);
  iVar2 = *(int *)(param_1 + 0xc0);
  FUN_00c42780(0x4000000000000000,(double)iVar2);
  uVar4 = FUN_0040c770();
  FUN_0113eac0(uVar8,param_2,*(undefined8 *)(param_1 + 0x60),local_70[0],
               (local_78 - local_70[0]) / (double)iVar2,iVar2,*(undefined8 *)(param_1 + 0x110),0);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  iVar6 = *(int *)(param_1 + 0x108);
  if (iVar6 < 4) {
    if (iVar6 == 3) {
      FUN_010bf370(uVar4,*(undefined8 *)(param_1 + 0x110),&local_80,&local_88);
    }
    else if (iVar6 == 0) {
      local_80 = 1.0;
      local_88 = 1.0;
    }
    else if (iVar6 == 1) {
      FUN_010bf1f0(uVar4,*(undefined8 *)(param_1 + 0x110),&local_80,&local_88);
    }
    else if (iVar6 == 2) {
      FUN_010bf470(uVar4,*(undefined8 *)(param_1 + 0x110),&local_80,&local_88);
    }
  }
  else if (iVar6 == 4) {
    FUN_010bf2b0(uVar4,*(undefined8 *)(param_1 + 0x110),&local_80,&local_88);
  }
  else if (iVar6 == 5) {
    FUN_010bf130(uVar4,*(undefined8 *)(param_1 + 0x110),&local_80,&local_88);
  }
  else if (iVar6 == 6) {
    local_80 = 1.0;
  }
  FUN_0113edb0(uVar8,uVar4,*(undefined8 *)(param_1 + 0x110));
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  iVar5 = FUN_0040c840(*(double *)(param_1 + 0xa0) * (local_78 - local_70[0]));
  iVar6 = FUN_0040c840((*(double *)(param_1 + 0xa8) * (local_78 - local_70[0]) - dVar9) + 1.0);
  iVar6 = (iVar6 - iVar5) + 1;
  if (iVar2 / 2 < iVar6) {
    iVar6 = iVar2 / 2;
  }
  dVar12 = (local_78 - local_70[0]) / (double)iVar2;
  dVar9 = 1.0 / ((double)iVar2 * dVar12);
  *(double *)(param_3 + 0x38) = local_88 * dVar9;
  local_ac = 0;
  if (-1 < iVar6 + -1) {
    do {
      iVar7 = iVar2 / 2 + -1;
      if (local_ac + iVar5 < iVar7) {
        iVar7 = local_ac + iVar5;
      }
      if (iVar7 < 1) {
        iVar7 = 0;
      }
      uVar10 = FUN_00b90620(0x3d719799812dea11,(double)iVar7 * dVar9);
      FUN_01cc5240(param_3,uVar10);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar7 * 0x10);
      local_98 = *puVar1;
      uStack_90 = puVar1[1];
      iVar3 = *(int *)(param_1 + 0x104);
      if (iVar3 == 1) {
        dVar11 = (double)FUN_00c44590(&local_98);
        dVar11 = (local_80 * 2.0 * dVar11) / (double)iVar2;
      }
      else if (iVar3 == 2) {
        dVar11 = (double)FUN_00c44590(&local_98);
        dVar11 = local_80 * 2.0 * dVar12 * dVar11;
      }
      else if (iVar3 == 3) {
        dVar11 = (double)FUN_00c44590(&local_98);
        dVar11 = (local_80 * 2.0 * dVar11) / (double)iVar2;
        dVar11 = dVar11 * dVar11;
      }
      else if (iVar3 == 4) {
        dVar11 = (double)FUN_00c44590(&local_98);
        dVar11 = dVar12 * 2.0 * local_80 * dVar11;
        dVar11 = dVar11 * dVar11;
      }
      else {
        dVar11 = (double)FUN_00c44590(&local_98);
      }
      uVar10 = FUN_00c445d0(&local_98);
      FUN_01cc52d0(param_3,dVar11,uVar10);
      FUN_00c44460(&local_a8,dVar11,0);
      puVar1 = (undefined8 *)(param_4 + (longlong)iVar7 * 0x10);
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      local_ac = local_ac + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00410f20(uVar8);
  return;
}

