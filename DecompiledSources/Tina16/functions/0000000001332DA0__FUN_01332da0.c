/* Ghidra address: 01332da0 */
/* Ghidra symbol: FUN_01332da0 */


uint FUN_01332da0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint unaff_ESI;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))
                        (*(longlong **)(param_1 + 0x130),iVar3);
      unaff_ESI = (uint)*(byte *)(lVar2 + 0x18);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return unaff_ESI;
}

