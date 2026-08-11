/* Ghidra address: 00bfaa50 */
/* Ghidra symbol: FUN_00bfaa50 */


ulonglong FUN_00bfaa50(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_00c10e70(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x498) == '\0')) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x4cc);
  }
  else {
    uVar2 = FUN_00bfaa90(param_1);
    uVar2 = uVar2 >> 0x20;
  }
  return uVar2;
}

