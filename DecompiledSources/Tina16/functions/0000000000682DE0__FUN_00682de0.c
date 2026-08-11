/* Ghidra address: 00682de0 */
/* Ghidra symbol: FUN_00682de0 */


ulonglong FUN_00682de0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0064c370(param_1,param_2);
  if ((char)param_2 == '\0') {
    uVar1 = (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x130) + 0x20) != '\x12');
  }
  else if ((char)param_2 == '\x01') {
    uVar1 = (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x130) + 0x21) != '\x1e');
  }
  return uVar1;
}

