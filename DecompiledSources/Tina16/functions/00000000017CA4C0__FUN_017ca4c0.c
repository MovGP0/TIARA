/* Ghidra address: 017ca4c0 */
/* Ghidra symbol: FUN_017ca4c0 */


ulonglong FUN_017ca4c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((param_1 != 0) && (cVar1 = FUN_0199c7c0(param_1), cVar1 == '\0')) {
    if (*(byte *)(param_1 + 0x560) != 0) {
      return (ulonglong)*(byte *)(param_1 + 0x560);
    }
    uVar2 = FUN_017ff620(param_1);
    uVar3 = FUN_017ca4c0(uVar2);
    return uVar3;
  }
  return 0;
}

