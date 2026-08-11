/* Ghidra address: 005a1d40 */
/* Ghidra symbol: FUN_005a1d40 */


void FUN_005a1d40(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x20);
      if ((*(longlong *)(puVar1 + 2) != 0) || (*(longlong *)(puVar1 + 4) != 0)) {
        if (iVar4 != iVar3) {
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x20);
          *puVar2 = *puVar1;
          FUN_0041b840(puVar2 + 2,*(undefined8 *)(puVar1 + 2));
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
          *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
        }
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0059b5b0(param_1 + 8,iVar4);
  return;
}

