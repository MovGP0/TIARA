/* Ghidra address: 00b1ac40 */
/* Ghidra symbol: FUN_00b1ac40 */


void FUN_00b1ac40(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = FUN_00b1a9a0(param_1);
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_00b1a8d0(param_1,uVar2);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x30),uVar2 & 0xffffffff);
    iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    iVar4 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
        if (lVar3 != 0) {
          iVar7 = *(int *)(lVar3 + 0x10);
          iVar5 = 0;
          if (-1 < iVar7 + -1) {
            do {
              iVar1 = FUN_004aeac0(lVar3,iVar5);
              if ((int)uVar2 < iVar1) {
                iVar1 = FUN_004aeac0(lVar3,iVar5);
                FUN_004aedb0(lVar3,iVar5,(longlong)(iVar1 + -1));
              }
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

