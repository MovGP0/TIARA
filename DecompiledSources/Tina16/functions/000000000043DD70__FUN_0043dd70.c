/* Ghidra address: 0043dd70 */
/* Ghidra symbol: FUN_0043dd70 */


longlong FUN_0043dd70(longlong param_1,short *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_48 [32];
  
  iVar4 = 0;
  if (param_2 != (short *)0x0) {
    iVar4 = *(int *)(param_2 + -2);
  }
  if ((iVar4 != 0x26) || (*param_2 != 0x7b)) {
    FUN_0043dcb0(auStack_48);
  }
  lVar3 = FUN_00416740(param_2);
  iVar4 = 0;
  do {
    uVar2 = FUN_0043dd30(auStack_48,lVar3 + 2 + (longlong)((3 - iVar4) * 2) * 2);
    *(undefined1 *)(param_1 + iVar4) = uVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (*(short *)(lVar3 + 0x12) != 0x2d) {
    FUN_0043dcb0(auStack_48);
  }
  iVar4 = 2;
  lVar3 = lVar3 + 0x14;
  puVar1 = (undefined1 *)(param_1 + 4);
  do {
    puVar6 = puVar1;
    lVar5 = lVar3;
    uVar2 = FUN_0043dd30(auStack_48,lVar5 + 4);
    *puVar6 = uVar2;
    uVar2 = FUN_0043dd30(auStack_48,lVar5);
    puVar6[1] = uVar2;
    if (*(short *)(lVar5 + 8) != 0x2d) {
      FUN_0043dcb0(auStack_48);
    }
    iVar4 = iVar4 + -1;
    lVar3 = lVar5 + 10;
    puVar1 = puVar6 + 2;
  } while (iVar4 != 0);
  uVar2 = FUN_0043dd30(auStack_48,lVar5 + 10);
  puVar6[2] = uVar2;
  uVar2 = FUN_0043dd30(auStack_48,lVar5 + 0xe);
  puVar6[3] = uVar2;
  puVar6 = puVar6 + 4;
  if (*(short *)(lVar5 + 0x12) != 0x2d) {
    FUN_0043dcb0(auStack_48);
  }
  lVar5 = lVar5 + 0x14;
  iVar4 = 6;
  do {
    uVar2 = FUN_0043dd30(auStack_48,lVar5);
    *puVar6 = uVar2;
    puVar6 = puVar6 + 1;
    lVar5 = lVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_1;
}

