/* Ghidra address: 01bd5de0 */
/* Ghidra symbol: FUN_01bd5de0 */


void FUN_01bd5de0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  cVar2 = FUN_01c019e0(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_01c019a0(param_1);
    FUN_00419260(param_1 + 0x558,&DAT_01bd22f8,1,
                 (longlong)*(int *)(*(longlong *)(lVar3 + 0x10) + 0x10));
    iVar6 = 0;
    lVar3 = FUN_01c019a0();
    iVar7 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10);
    iVar5 = 0;
    if (-1 < iVar7 + -1) {
      do {
        uVar4 = FUN_01c019a0(param_1);
        lVar3 = FUN_01bfb960(uVar4,iVar5);
        if (*(longlong *)(lVar3 + 0x80) != 0) {
          uVar4 = FUN_01c019a0(param_1);
          lVar3 = FUN_01bfb960(uVar4,iVar5);
          iVar1 = *(int *)(*(longlong *)(lVar3 + 0x80) + 0x9c);
          *(int *)(*(longlong *)(param_1 + 0x558) + (longlong)iVar5 * 4) = iVar6;
          iVar6 = iVar6 + iVar1 + *(int *)(param_1 + 0x4c4);
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar3 = FUN_01c019a0(param_1);
    *(int *)(*(longlong *)(param_1 + 0x558) +
            (longlong)(*(int *)(*(longlong *)(lVar3 + 0x10) + 0x10) + -1) * 4) = iVar6;
  }
  return;
}

