/* Ghidra address: 01c3d200 */
/* Ghidra symbol: FUN_01c3d200 */


ulonglong FUN_01c3d200(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x92c);
  }
  return uVar1;
}

