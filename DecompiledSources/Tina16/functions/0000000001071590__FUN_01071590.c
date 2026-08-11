/* Ghidra address: 01071590 */
/* Ghidra symbol: FUN_01071590 */


ulonglong FUN_01071590(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(byte *)(param_1 + 0x718) == 0) {
    uVar1 = FUN_0160f0c0(param_1 + 0x718);
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x718);
  }
  return uVar1;
}

