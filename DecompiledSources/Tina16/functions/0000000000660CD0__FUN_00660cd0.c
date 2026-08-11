/* Ghidra address: 00660cd0 */
/* Ghidra symbol: FUN_00660cd0 */


ulonglong FUN_00660cd0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_00660620(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_006604f0(param_1), cVar1 != '\0')) {
    uVar2 = FUN_00660670(param_1);
    return uVar2;
  }
  return (ulonglong)*(uint *)(param_1 + 0x40);
}

