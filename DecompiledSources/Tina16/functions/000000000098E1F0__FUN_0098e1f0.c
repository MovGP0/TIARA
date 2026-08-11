/* Ghidra address: 0098e1f0 */
/* Ghidra symbol: FUN_0098e1f0 */


void FUN_0098e1f0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x40) != param_2) {
    *(char *)(param_1 + 0x40) = param_2;
    uVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10) - 1;
    if (-1 < (int)uVar5) {
      iVar3 = 0;
      iVar4 = (uVar5 >> 1) + 1;
      do {
        lVar1 = *(longlong *)(param_1 + 0x48);
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)iVar3 * 8);
        *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)iVar3 * 8) =
             *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)(uVar5 - iVar3) * 8);
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (longlong)(int)(uVar5 - iVar3) * 8) =
             uVar2;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

