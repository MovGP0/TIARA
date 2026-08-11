/* Ghidra address: 0060cea0 */
/* Ghidra symbol: FUN_0060cea0 */


ulonglong FUN_0060cea0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x18);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) == 0) {
      uVar2 = thunk_FUN_0410f747(0xc);
    }
    else {
      FUN_0060cee0(param_1);
      uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + 0x18);
    }
  }
  return uVar2;
}

