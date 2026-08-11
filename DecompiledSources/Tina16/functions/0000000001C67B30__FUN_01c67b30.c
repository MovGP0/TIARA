/* Ghidra address: 01c67b30 */
/* Ghidra symbol: FUN_01c67b30 */


ulonglong FUN_01c67b30(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00658560(param_1,param_2);
  if (DAT_01fe7778 == '\0') {
    uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20);
  }
  return uVar1;
}

