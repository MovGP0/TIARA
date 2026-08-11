/* Ghidra address: 01c3cb30 */
/* Ghidra symbol: FUN_01c3cb30 */


ulonglong FUN_01c3cb30(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6c8)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8))
    ;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x928);
  }
  return uVar1;
}

