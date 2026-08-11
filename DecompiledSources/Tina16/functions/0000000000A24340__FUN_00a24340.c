/* Ghidra address: 00a24340 */
/* Ghidra symbol: FUN_00a24340 */


undefined8 FUN_00a24340(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x1f0);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  *(undefined4 *)(lVar3 + 0x20) = *puVar4;
  *(undefined4 *)(lVar3 + 0x24) = uVar6;
  *(undefined4 *)(lVar3 + 0x28) = uVar7;
  *(undefined4 *)(lVar3 + 0x2c) = uVar8;
  if ((*(int *)(param_1 + 0x118) == 0) || (*(int *)(lVar3 + 0x68) != 0)) {
    iVar2 = *(int *)(param_1 + 0x170);
  }
  else {
    FUN_00a248a0(lVar3,*(undefined4 *)(lVar3 + 0x6c));
    iVar2 = *(int *)(param_1 + 0x170);
  }
  if (0 < iVar2) {
    lVar11 = 0;
    do {
      FUN_00a249a0(lVar3,(int)**(short **)(param_2 + lVar11 * 8) >> ((byte)uVar1 & 0x1f),1);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x170));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(lVar3 + 0x28);
  *puVar5 = *(undefined8 *)(lVar3 + 0x20);
  puVar5[1] = uVar9;
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 != 0) {
    iVar10 = *(int *)(lVar3 + 0x68);
    if (*(int *)(lVar3 + 0x68) == 0) {
      *(int *)(lVar3 + 0x68) = iVar2;
      *(uint *)(lVar3 + 0x6c) = *(int *)(lVar3 + 0x6c) + 1U & 7;
      iVar10 = iVar2;
    }
    *(int *)(lVar3 + 0x68) = iVar10 + -1;
  }
  return 1;
}

