/* Ghidra address: 013eb440 */
/* Ghidra symbol: FUN_013eb440 */


void FUN_013eb440(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(longlong *)(param_1 + 0x6f0) + 0x10) == 0) {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6b0),0);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      pbVar1 = (byte *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x6f0),iVar2);
      *(byte **)(param_1 + 0x6f8) = pbVar1;
      FUN_0074b490(*(undefined8 *)(param_1 + 0x6b0),*pbVar1 - 1);
      if (**(char **)(param_1 + 0x6f8) == '\x01') {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),
                     *(undefined8 *)(*(char **)(param_1 + 0x6f8) + 1));
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 9));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0064cf60(param_1,0x482);
  return;
}

