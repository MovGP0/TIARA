/* Ghidra address: 00b539e0 */
/* Ghidra symbol: FUN_00b539e0 */


void FUN_00b539e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x10);
  if (iVar2 != 0) {
    iVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),iVar2 + -1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2) = 1;
    lVar4 = FUN_00b53890(*(undefined8 *)(param_1 + 0xa0),iVar2);
    cVar1 = FUN_00b14cb0((uint)*(ushort *)(lVar4 + 0x3e) +
                         (*(int *)(param_1 + 0xb8) - (uint)*(ushort *)(param_1 + 0xa8)));
    if (cVar1 != '\0') {
      lVar4 = FUN_00b53890(*(undefined8 *)(param_1 + 0xa0),iVar2);
      iVar7 = (uint)*(ushort *)(lVar4 + 0x3e) +
              (*(int *)(param_1 + 0xb8) - (uint)*(ushort *)(param_1 + 0xa8));
      uVar5 = FUN_00b53830(*(undefined8 *)(param_1 + 0xa0),iVar7);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))
                        (*(longlong **)(param_1 + 0xa0),uVar5);
      if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 100))) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3) = 0;
      }
      uVar5 = FUN_00b53830(*(undefined8 *)(param_1 + 0xa0),iVar7);
      uVar6 = FUN_00b53890(*(undefined8 *)(param_1 + 0xa0),iVar2);
      FUN_00b509a0(uVar5,uVar6);
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x10) + -1;
    if (0 < iVar3) {
      do {
        iVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),iVar3);
        iVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),iVar3 + -1);
        uVar5 = FUN_00b53890(*(undefined8 *)(param_1 + 0xa0),iVar7);
        uVar6 = FUN_00b53890(*(undefined8 *)(param_1 + 0xa0),iVar2);
        FUN_00b509a0(uVar5,uVar6);
        *(undefined1 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar7) = 0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (*(char *)(param_1 + 0xc0) != '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2) = 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70));
  }
  return;
}

