/* Ghidra address: 00c56c50 */
/* Ghidra symbol: FUN_00c56c50 */


void FUN_00c56c50(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_005ff880(*(undefined8 *)(param_1 + 0x490),*(undefined8 *)(param_1 + 0xb8));
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x508) < 0x80000000) {
    iVar3 = *(uint *)(param_1 + 0x508) + 1;
    do {
      iVar2 = 0;
      if (*(uint *)(param_1 + 0x504) < 0x80000000) {
        iVar4 = *(uint *)(param_1 + 0x504) + 1;
        do {
          FUN_00c55c70(param_1,iVar1 * *(int *)(param_1 + 0x504) + iVar2,0);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00c55c70(param_1,*(undefined4 *)(param_1 + 0x4f8),*(undefined1 *)(param_1 + 0x50d));
  FUN_00c55f20(param_1);
  return;
}

