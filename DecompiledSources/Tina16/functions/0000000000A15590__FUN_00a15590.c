/* Ghidra address: 00a15590 */
/* Ghidra symbol: FUN_00a15590 */


void FUN_00a15590(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x88);
  param_1[0x45] = (longlong)puVar2;
  *puVar2 = FUN_00a15750;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 4;
    (*(code *)*puVar1)(param_1);
  }
  iVar10 = (int)param_1[0x34];
  if (*(int *)(param_1[0x4c] + 0x10) == 0) {
    iVar7 = (int)param_1[7];
    iVar6 = iVar10;
  }
  else {
    if (iVar10 < 2) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 0x2f;
      (*(code *)*puVar1)(param_1);
      iVar10 = (int)param_1[0x34];
    }
    lVar8 = param_1[0x45];
    lVar3 = (**(code **)param_1[1])(param_1,1,(longlong)(int)param_1[7] << 4);
    *(longlong *)(lVar8 + 0x68) = lVar3;
    iVar7 = (int)param_1[7];
    *(longlong *)(lVar8 + 0x70) = lVar3 + (longlong)iVar7 * 8;
    if (0 < (longlong)iVar7) {
      piVar9 = (int *)(param_1[0x26] + 0x24);
      lVar3 = 0;
      do {
        iVar6 = (*piVar9 * piVar9[-6]) / (int)param_1[0x34];
        iVar7 = iVar6 * (iVar10 + 4);
        lVar4 = (**(code **)param_1[1])(param_1,1,(longlong)(iVar7 * 2) << 3);
        lVar4 = lVar4 + (longlong)iVar6 * 8;
        *(longlong *)(*(longlong *)(lVar8 + 0x68) + lVar3 * 8) = lVar4;
        *(longlong *)(*(longlong *)(lVar8 + 0x70) + lVar3 * 8) = lVar4 + (longlong)iVar7 * 8;
        lVar3 = lVar3 + 1;
        iVar7 = (int)param_1[7];
        piVar9 = piVar9 + 0x18;
      } while (lVar3 < iVar7);
    }
    iVar10 = (int)param_1[0x34];
    iVar6 = iVar10 + 2;
  }
  if (0 < iVar7) {
    piVar9 = (int *)(param_1[0x26] + 0x24);
    lVar8 = 1;
    while( true ) {
      uVar5 = (**(code **)(param_1[1] + 0x10))
                        (param_1,1,*piVar9 * piVar9[-2],((piVar9[-6] * *piVar9) / iVar10) * iVar6);
      puVar2[lVar8 + 1] = uVar5;
      if ((int)param_1[7] <= lVar8) break;
      iVar10 = (int)param_1[0x34];
      lVar8 = lVar8 + 1;
      piVar9 = piVar9 + 0x18;
    }
  }
  return;
}

