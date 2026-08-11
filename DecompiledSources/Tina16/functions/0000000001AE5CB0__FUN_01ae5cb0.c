/* Ghidra address: 01ae5cb0 */
/* Ghidra symbol: FUN_01ae5cb0 */


void FUN_01ae5cb0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  for (iVar4 = 0; iVar4 < *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10); iVar4 = iVar4 + 1) {
    uVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0xe8),iVar4);
    cVar1 = FUN_004113d0(uVar2,&DAT_01ccbf00);
    if (cVar1 != '\0') {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),iVar4);
      iVar6 = *(int *)(*(longlong *)(lVar3 + 0xf8) + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar2 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0xf8),iVar5);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0xe8),uVar2);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}

