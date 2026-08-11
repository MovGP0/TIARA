/* Ghidra address: 00b4ff50 */
/* Ghidra symbol: FUN_00b4ff50 */


void FUN_00b4ff50(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (iVar2 != 0) {
    iVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),iVar2 + -1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2) = 1;
    lVar4 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar2);
    cVar1 = FUN_00b14cb0((uint)*(ushort *)(lVar4 + 0x48) +
                         (*(int *)(param_1 + 0x98) - (uint)*(ushort *)(param_1 + 0x78)));
    if (cVar1 != '\0') {
      lVar4 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar2);
      cVar1 = FUN_00b14cd0((uint)*(ushort *)(lVar4 + 0x4a) +
                           (*(int *)(param_1 + 0xa0) - (uint)*(ushort *)(param_1 + 0x88)));
      if (cVar1 != '\0') {
        lVar4 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar2);
        iVar7 = (uint)*(ushort *)(lVar4 + 0x48) +
                (*(int *)(param_1 + 0x98) - (uint)*(ushort *)(param_1 + 0x78));
        lVar4 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar2);
        iVar8 = (uint)*(ushort *)(lVar4 + 0x4a) +
                (*(int *)(param_1 + 0xa0) - (uint)*(ushort *)(param_1 + 0x88));
        uVar5 = FUN_00b4fb40(*(undefined8 *)(param_1 + 0x70),iVar7,iVar8);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))
                          (*(longlong **)(param_1 + 0x70),uVar5);
        if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x34))) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3) = 0;
        }
        uVar5 = FUN_00b4fb40(*(undefined8 *)(param_1 + 0x70),iVar7,iVar8);
        uVar6 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar2);
        FUN_00b4e720(uVar5,uVar6);
      }
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10) + -1;
    if (0 < iVar2) {
      do {
        iVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),iVar2);
        iVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),iVar2 + -1);
        uVar5 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar3);
        uVar6 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar7);
        FUN_00b4e720(uVar5,uVar6);
        *(undefined1 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3) = 0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40));
  }
  return;
}

