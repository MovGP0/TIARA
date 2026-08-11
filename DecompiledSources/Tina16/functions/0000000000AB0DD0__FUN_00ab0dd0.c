/* Ghidra address: 00ab0dd0 */
/* Ghidra symbol: FUN_00ab0dd0 */


void FUN_00ab0dd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x168) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),iVar2);
      *(undefined4 *)(lVar1 + 0x20) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x160) + (longlong)iVar2 * 4);
      FUN_00aab730(lVar1,*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x138),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x13c),
                   *(undefined8 *)(param_1 + 200));
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + *(int *)(lVar1 + 0x20);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

