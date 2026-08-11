/* Ghidra address: 00a0b6a0 */
/* Ghidra symbol: FUN_00a0b6a0 */


ulonglong FUN_00a0b6a0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x48) + 0x18);
    }
    else {
      FUN_00a0a4e0(param_1);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x5c);
    }
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  return uVar2;
}

