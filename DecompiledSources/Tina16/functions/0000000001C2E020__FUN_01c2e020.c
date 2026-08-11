/* Ghidra address: 01c2e020 */
/* Ghidra symbol: FUN_01c2e020 */


void FUN_01c2e020(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    *(undefined1 *)(param_1 + 0x18 + (longlong)iVar2) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x400);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      pcVar1 = (char *)(param_1 + 0x18 +
                       (longlong)
                       (int)(uint)*(ushort *)
                                   (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8)
                                   + 0x4a));
      *pcVar1 = *pcVar1 + '\x01';
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

