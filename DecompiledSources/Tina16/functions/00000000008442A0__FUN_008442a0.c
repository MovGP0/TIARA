/* Ghidra address: 008442a0 */
/* Ghidra symbol: FUN_008442a0 */


ulonglong FUN_008442a0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0064c370(param_1,param_2);
  if ((char)param_2 == '\0') {
    uVar1 = (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x130) + 0x20) != '\x12');
  }
  else if ((char)param_2 == '\x01') {
    uVar1 = (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x130) + 0x21) != '\x1f');
  }
  return uVar1;
}

