/* Ghidra address: 00d39710 */
/* Ghidra symbol: FUN_00d39710 */


ulonglong FUN_00d39710(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_00647eb0(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    uVar2 = (ulonglong)*(uint *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  }
  else {
    uVar2 = GetDpiForWindow(*(undefined8 *)(param_1 + 8));
  }
  return uVar2;
}

