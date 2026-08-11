/* Ghidra address: 005b8aa0 */
/* Ghidra symbol: FUN_005b8aa0 */


ulonglong FUN_005b8aa0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((*(byte *)(param_1 + 0x98) & 2) == 0) {
    uVar1 = FUN_00432440(param_2 + (longlong)*(int *)(param_1 + 0x54) * 2);
  }
  else {
    uVar1 = (ulonglong)*(ushort *)(param_2 + (longlong)*(int *)(param_1 + 0x54) * 2);
  }
  return uVar1;
}

