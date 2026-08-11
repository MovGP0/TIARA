/* Ghidra address: 00ac0ab0 */
/* Ghidra symbol: FUN_00ac0ab0 */


void FUN_00ac0ab0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  if (0 < iVar5) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar5);
      if (*(char *)(lVar2 + 0x31) == param_2) {
        uVar3 = FUN_004aeac0(param_1,iVar5);
        cVar1 = FUN_00a554f0(uVar3);
        if (cVar1 != '\0') {
          uVar3 = FUN_004aeac0(param_1,iVar5);
          FUN_00aa8ac0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),uVar3,0);
        }
        FUN_004ae870(param_1,iVar5);
        if (iVar5 < 2) {
          return;
        }
        iVar6 = *(int *)(param_1 + 0x10) + -1;
        if (iVar6 < iVar5) {
          return;
        }
        iVar6 = (iVar6 - iVar5) + 1;
        do {
          uVar3 = FUN_004aeac0(param_1,iVar5);
          uVar4 = FUN_004aeac0(param_1,iVar5 + -1);
          FUN_00a52e30(uVar3,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x280),iVar5);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        return;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

