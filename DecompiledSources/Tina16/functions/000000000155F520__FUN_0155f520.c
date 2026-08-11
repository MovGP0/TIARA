/* Ghidra address: 0155f520 */
/* Ghidra symbol: FUN_0155f520 */


void FUN_0155f520(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x750),0);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x68);
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x750) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x750),iVar3);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x68);
      if (iVar1 < iVar4) {
        *(int *)(param_1 + 0x24) = iVar3;
        iVar4 = iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

