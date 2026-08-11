/* Ghidra address: 0136d530 */
/* Ghidra symbol: FUN_0136d530 */


void FUN_0136d530(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int iVar13;
  int local_3c;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_3c = 1;
    while (local_3c <= *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1) {
      piVar6 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c);
      piVar7 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c + -1);
      if (*piVar6 == *piVar7) {
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c);
        lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c + -1);
        if (*(int *)(lVar8 + 4) != *(int *)(lVar9 + 4)) goto LAB_0136d5d7;
        FUN_004ae870(*(undefined8 *)(param_1 + 0x18),local_3c);
      }
      else {
LAB_0136d5d7:
        local_3c = local_3c + 1;
      }
    }
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
    piVar6 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar4);
    piVar7 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
    if (*piVar6 == *piVar7) {
      lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar4);
      lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
      if (*(int *)(lVar8 + 4) == *(int *)(lVar9 + 4)) {
        FUN_004ae870(*(undefined8 *)(param_1 + 0x18),iVar4);
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) < 3) {
      return;
    }
    plVar10 = (longlong *)FUN_017b8a10(0,&PTR_FUN_017b8668,0x68);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) * 4;
    puVar11 = (undefined4 *)FUN_004095c0((longlong)(iVar3 + 0x20));
    *puVar11 = 0x68;
    puVar11[1] = 0x105;
    puVar11[2] = iVar3 + 0x14;
    uVar12 = FUN_00b95b20(0,0,0,0);
    *(undefined8 *)(puVar11 + 3) = uVar12;
    puVar11[5] = 0x800000;
    puVar11[6] = 0xfffffffe;
    *(undefined2 *)(puVar11 + 7) = 1;
    *(undefined2 *)((longlong)puVar11 + 0x1e) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    piVar6 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
    iVar4 = *piVar6;
    lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
    iVar1 = *(int *)(lVar8 + 4);
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
    local_3c = 0;
    if (-1 < iVar13 + -1) {
      do {
        piVar6 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c);
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c);
        uVar5 = FUN_00b959a0(*piVar6 - iVar4,*(int *)(lVar8 + 4) - iVar1);
        puVar11[(longlong)local_3c + 8] = uVar5;
        local_3c = local_3c + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    FUN_004ae7e0(plVar10[8],puVar11);
    FUN_019aba00(plVar10);
    puVar11 = (undefined4 *)FUN_004095c0((longlong)(iVar3 + 0x20));
    *puVar11 = 0x68;
    puVar11[1] = 0x105;
    puVar11[2] = iVar3 + 0x14;
    uVar12 = FUN_00b95b20(0,0,0,0);
    *(undefined8 *)(puVar11 + 3) = uVar12;
    puVar11[5] = 0x800000;
    puVar11[6] = 0xfffffffe;
    *(undefined2 *)(puVar11 + 7) = 1;
    *(undefined2 *)((longlong)puVar11 + 0x1e) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    piVar6 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
    iVar4 = *piVar6;
    lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
    iVar1 = *(int *)(lVar8 + 4);
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
    local_3c = 0;
    if (-1 < iVar13 + -1) {
      do {
        piVar6 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c);
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_3c);
        uVar5 = FUN_00b959a0(*piVar6 - iVar4,*(int *)(lVar8 + 4) - iVar1);
        puVar11[(longlong)local_3c + 8] = uVar5;
        local_3c = local_3c + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    lVar8 = FUN_004aeac0(plVar10[8],0);
    puVar11[5] = *(undefined4 *)(lVar8 + 0x14);
    puVar11[6] = *(undefined4 *)(lVar8 + 0x18);
    *(undefined2 *)(puVar11 + 7) = *(undefined2 *)(lVar8 + 0x1c);
    FUN_00c3c3f0(plVar10[8]);
    FUN_004ae7e0(plVar10[8],puVar11);
    *(int *)((longlong)plVar10 + 0xc) = iVar4;
    *(int *)(plVar10 + 2) = iVar1;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar10);
    FUN_0199e310(plVar2,0,1,0);
    FUN_01994230(plVar2);
    FUN_01993f30(plVar2,plVar10,1,0);
    FUN_019965a0(plVar2,plVar10);
    uVar12 = FUN_0198d430(plVar2);
    (**(code **)(*plVar10 + 0xa0))(plVar10,uVar12);
  }
  FUN_01364ff0(param_1,param_2,param_3);
  return;
}

