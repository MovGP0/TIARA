/* Ghidra address: 0060ce60 */
/* Ghidra symbol: FUN_0060ce60 */


ulonglong FUN_0060ce60(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x1c);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) == 0) {
      uVar2 = thunk_FUN_0410f747(0xc);
    }
    else {
      FUN_0060cee0(param_1);
      uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + 0x1c);
    }
  }
  return uVar2;
}

