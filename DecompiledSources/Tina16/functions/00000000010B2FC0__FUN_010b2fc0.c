/* Ghidra address: 010b2fc0 */
/* Ghidra symbol: FUN_010b2fc0 */


void FUN_010b2fc0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      cVar1 = FUN_010af9d0(uVar2);
      if (cVar1 == '\0') {
        FUN_010af600(uVar2,param_2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

