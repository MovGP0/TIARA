/* Ghidra address: 011778a0 */
/* Ghidra symbol: FUN_011778a0 */


undefined8 FUN_011778a0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 local_9a0 [150];
  uint local_4ec [303];
  
  FUN_005fd4e0(param_2[0xf],*(undefined4 *)(*param_1 + 0x2c));
  FUN_005fc860(param_2[0xe],0);
  FUN_011767e0(*param_1,0x58);
  puVar5 = &DAT_020417ac;
  puVar8 = local_4ec;
  for (lVar3 = 0x96; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)puVar8 = *(undefined8 *)puVar5;
    puVar5 = puVar5 + 2;
    puVar8 = puVar8 + 2;
  }
  *puVar8 = *puVar5;
  iVar4 = 0;
  iVar7 = *(int *)(*param_1 + 0x18);
  if (iVar7 - 1U < 0x80000000) {
    do {
      if (*(int *)(*param_1 + 0x20) - 2U < 0x80000000) {
        iVar10 = *(int *)(*param_1 + 0x20) + -1;
        do {
          uVar1 = local_4ec[iVar4];
          (**(code **)(*param_2 + 200))(param_2,uVar1,*(undefined4 *)(*param_1 + 4));
          (**(code **)(*param_2 + 0xc0))(param_2,uVar1,*(undefined4 *)(*param_1 + 0xc));
          iVar4 = iVar4 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_011767e0(*param_1,0x59);
  puVar6 = (undefined8 *)&DAT_020417ac;
  puVar9 = local_9a0;
  for (lVar3 = 0x96; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)puVar9 = *(undefined4 *)puVar6;
  iVar4 = 0;
  iVar7 = *(int *)(*param_1 + 0x1c);
  if (iVar7 - 1U < 0x80000000) {
    do {
      if (*(int *)(*param_1 + 0x24) - 2U < 0x80000000) {
        iVar10 = *(int *)(*param_1 + 0x24) + -1;
        do {
          uVar2 = *(undefined4 *)((longlong)local_9a0 + (longlong)iVar4 * 4);
          (**(code **)(*param_2 + 200))(param_2,*(undefined4 *)*param_1,uVar2);
          (**(code **)(*param_2 + 0xc0))(param_2,*(undefined4 *)(*param_1 + 8),uVar2);
          iVar4 = iVar4 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_005fd4e0(param_2[0xf],*(undefined4 *)(*param_1 + 0x28));
  FUN_005fc860(param_2[0xe],0);
  FUN_011766f0(param_1,0x58);
  puVar5 = &DAT_020412f8;
  puVar8 = local_4ec;
  for (lVar3 = 0x96; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)puVar8 = *(undefined8 *)puVar5;
    puVar5 = puVar5 + 2;
    puVar8 = puVar8 + 2;
  }
  *puVar8 = *puVar5;
  if (-1 < *(int *)(*param_1 + 0x18)) {
    iVar7 = *(int *)(*param_1 + 0x18) + 1;
    puVar5 = local_4ec;
    do {
      (**(code **)(*param_2 + 200))(param_2,*puVar5,*(undefined4 *)(*param_1 + 4));
      (**(code **)(*param_2 + 0xc0))(param_2,*puVar5,*(undefined4 *)(*param_1 + 0xc));
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_011766f0(param_1,0x59);
  puVar6 = (undefined8 *)&DAT_020412f8;
  puVar9 = local_9a0;
  for (lVar3 = 0x96; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)puVar9 = *(undefined4 *)puVar6;
  if (*(uint *)(*param_1 + 0x1c) < 0x80000000) {
    iVar7 = *(uint *)(*param_1 + 0x1c) + 1;
    puVar6 = local_9a0;
    do {
      (**(code **)(*param_2 + 200))(param_2,*(undefined4 *)*param_1,*(undefined4 *)puVar6);
      (**(code **)(*param_2 + 0xc0))(param_2,*(undefined4 *)(*param_1 + 8),*(undefined4 *)puVar6);
      puVar6 = (undefined8 *)((longlong)puVar6 + 4);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 0;
}

