/* Ghidra address: 00a17ed0 */
/* Ghidra symbol: FUN_00a17ed0 */


void FUN_00a17ed0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  longlong lVar12;
  
  puVar8 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
  param_1[0x4c] = (longlong)puVar8;
  *puVar8 = &LAB_00a18110;
  puVar8[1] = FUN_00a18130;
  *(undefined4 *)(puVar8 + 2) = 0;
  if ((int)param_1[0x31] != 0) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  if (*(int *)((longlong)param_1 + 100) == 0) {
    bVar4 = false;
    iVar1 = (int)param_1[7];
  }
  else {
    bVar4 = 1 < (int)param_1[0x34];
    iVar1 = (int)param_1[7];
  }
  if (0 < iVar1) {
    piVar11 = (int *)(param_1[0x26] + 0x30);
    lVar12 = 0;
    do {
      iVar5 = (piVar11[-10] * piVar11[-3]) / (int)param_1[0x34];
      iVar6 = (piVar11[-3] * piVar11[-9]) / (int)param_1[0x34];
      iVar1 = (int)param_1[0x33];
      iVar2 = *(int *)((longlong)param_1 + 0x19c);
      *(int *)((longlong)puVar8 + lVar12 * 4 + 0xc0) = iVar6;
      if (*piVar11 == 0) {
        puVar8[lVar12 + 0xd] = &LAB_00a18260;
      }
      else if ((iVar5 == iVar1) && (iVar6 == iVar2)) {
        puVar8[lVar12 + 0xd] = &LAB_00a18270;
      }
      else {
        if ((iVar5 * 2 == iVar1) && (iVar6 == iVar2)) {
          if ((!bVar4) || (pcVar9 = FUN_00a18280, (uint)piVar11[-2] < 3)) {
            pcVar9 = FUN_00a186b0;
          }
LAB_00a180a4:
          puVar8[lVar12 + 0xd] = pcVar9;
        }
        else if ((iVar5 * 2 == iVar1) && (iVar6 * 2 == iVar2)) {
          if ((!bVar4) || ((uint)piVar11[-2] < 3)) {
            pcVar9 = FUN_00a18a00;
            goto LAB_00a180a4;
          }
          puVar8[lVar12 + 0xd] = FUN_00a187b0;
          *(undefined4 *)(puVar8 + 2) = 1;
        }
        else if ((iVar1 % iVar5 == 0) && (iVar2 % iVar6 == 0)) {
          puVar8[lVar12 + 0xd] = FUN_00a18b40;
          *(char *)((longlong)puVar8 + lVar12 + 0xe8) = (char)(iVar1 / iVar5);
          *(char *)((longlong)puVar8 + lVar12 + 0xf2) = (char)(iVar2 / iVar6);
        }
        else {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x26;
          (*(code *)*puVar3)(param_1);
        }
        pcVar9 = *(code **)(param_1[1] + 0x10);
        uVar7 = FUN_00a1bc80((int)param_1[0x11],(int)param_1[0x33]);
        uVar10 = (*pcVar9)(param_1,1,uVar7,*(undefined4 *)((longlong)param_1 + 0x19c));
        puVar8[lVar12 + 3] = uVar10;
      }
      lVar12 = lVar12 + 1;
      piVar11 = piVar11 + 0x18;
    } while (lVar12 < (int)param_1[7]);
  }
  return;
}

