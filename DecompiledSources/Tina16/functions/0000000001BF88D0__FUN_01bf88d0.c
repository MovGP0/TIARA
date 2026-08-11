/* Ghidra address: 01bf88d0 */
/* Ghidra symbol: FUN_01bf88d0 */


void FUN_01bf88d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x148);
  if ((param_2 == lVar2) || ((*(ushort *)(param_1 + 0x34) & 8) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (lVar2 != 0) {
    FUN_007d7c60(lVar2,*(undefined8 *)(param_1 + 0x140));
  }
  *(longlong *)(param_1 + 0x148) = param_2;
  if (param_2 != 0) {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x140));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x148),param_1);
  }
  if (bVar1) {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar6 + -1) {
      do {
        FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar4);
        lVar2 = FUN_01bfaa70();
        iVar7 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10);
        iVar5 = 0;
        if (-1 < iVar7 + -1) {
          do {
            uVar3 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar4);
            uVar3 = FUN_01bfaa70(uVar3);
            lVar2 = FUN_01bfb960(uVar3,iVar5);
            if (*(longlong *)(lVar2 + 0x80) != 0) {
              uVar3 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar4);
              uVar3 = FUN_01bfaa70(uVar3);
              lVar2 = FUN_01bfb960(uVar3,iVar5);
              (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x260))(*(longlong **)(lVar2 + 0x80));
            }
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

