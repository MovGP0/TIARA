/* Ghidra address: 0175ae10 */
/* Ghidra symbol: FUN_0175ae10 */


void FUN_0175ae10(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0xd0);
    iVar2 = 1;
    if (0 < iVar4) {
      do {
        lVar3 = (longlong)iVar2;
        puVar1 = (undefined1 *)(param_1 + 8 + lVar3 * 0x30);
        *(undefined1 *)(param_2 + 8 + lVar3 * 0x30) = *puVar1;
        *(undefined1 *)(param_2 + 9 + lVar3 * 0x30) = puVar1[1];
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

