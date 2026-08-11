/* Ghidra address: 01bf8250 */
/* Ghidra symbol: FUN_01bf8250 */


void FUN_01bf8250(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_2 == *(longlong *)(param_1 + 0xd0)) || ((*(ushort *)(param_1 + 0x34) & 8) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_0061cfb0();
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

