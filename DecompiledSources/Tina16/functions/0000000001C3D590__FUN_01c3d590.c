/* Ghidra address: 01c3d590 */
/* Ghidra symbol: FUN_01c3d590 */


ulonglong FUN_01c3d590(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x260))(*(longlong **)(param_1 + 0x8a0))
    ;
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x938);
  }
  return uVar1;
}

