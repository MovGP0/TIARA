/* Ghidra address: 006e2780 */
/* Ghidra symbol: FUN_006e2780 */


ulonglong FUN_006e2780(longlong param_1,char param_2)

{
  ulonglong uVar1;
  
  if (param_2 == '\0') {
    uVar1 = (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x130) + 0x20) != '\x12');
  }
  else if (param_2 == '\x01') {
    uVar1 = (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x130) + 0x21) != '\x1f');
  }
  else {
    uVar1 = FUN_0064c370();
  }
  return uVar1;
}

