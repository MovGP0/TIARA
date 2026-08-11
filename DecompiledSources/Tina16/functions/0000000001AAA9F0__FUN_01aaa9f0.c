/* Ghidra address: 01aaa9f0 */
/* Ghidra symbol: FUN_01aaa9f0 */


void FUN_01aaa9f0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  iVar3 = 1;
  uVar5 = (uint)*(ushort *)(param_1 + 0x10);
  if (uVar5 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
    do {
      lVar1 = *plVar4;
      uVar2 = FUN_01aa80b0(param_1,iVar3);
      *(undefined1 *)(lVar1 + 0x562) = uVar2;
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

