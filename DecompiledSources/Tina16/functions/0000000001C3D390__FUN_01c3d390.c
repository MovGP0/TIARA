/* Ghidra address: 01c3d390 */
/* Ghidra symbol: FUN_01c3d390 */


ulonglong FUN_01c3d390(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x950);
  }
  return uVar1;
}

