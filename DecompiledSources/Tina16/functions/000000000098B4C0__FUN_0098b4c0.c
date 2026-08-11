/* Ghidra address: 0098b4c0 */
/* Ghidra symbol: FUN_0098b4c0 */


undefined8 FUN_0098b4c0(longlong param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x1c) + 1;
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + -4) >> 1;
  }
  if (iVar3 <= (int)uVar4) {
    iVar5 = (uVar4 - iVar3) + 1;
    do {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x10) + -2 + (longlong)iVar3 * 2);
      if (sVar1 == 0x28) {
        return 1;
      }
      cVar2 = FUN_008ff300(sVar1);
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

