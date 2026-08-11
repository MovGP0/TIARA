/* Ghidra address: 0187ffb0 */
/* Ghidra symbol: FUN_0187ffb0 */


void FUN_0187ffb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar4);
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar4);
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar4);
        FUN_0058cfc0(uVar2,uVar3,param_2);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

