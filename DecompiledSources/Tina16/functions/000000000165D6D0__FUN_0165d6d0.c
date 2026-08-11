/* Ghidra address: 0165d6d0 */
/* Ghidra symbol: FUN_0165d6d0 */


ulonglong FUN_0165d6d0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x1f8);
  uVar1 = 0;
  while( true ) {
    uVar3 = uVar1;
    if ((int)uVar4 <= (int)(uVar3 + 1)) {
      if ((*(int *)(param_1 + 0x1f8) == 0) ||
         (*(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)(int)uVar3 * 0x10) != param_2))
      {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = (ulonglong)uVar3;
      }
      return uVar2;
    }
    uVar2 = (longlong)(int)(uVar3 + uVar4) / 2;
    uVar1 = (uint)uVar2;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)(int)uVar1 * 0x10) == param_2)
    break;
    if (param_2 < *(ulonglong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)(int)uVar1 * 0x10)) {
      uVar4 = uVar1;
      uVar1 = uVar3;
    }
  }
  return uVar2 & 0xffffffff;
}

