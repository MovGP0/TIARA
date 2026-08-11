/* Ghidra address: 006604f0 */
/* Ghidra symbol: FUN_006604f0 */


undefined8 FUN_006604f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x20) == '\0')) &&
     ((lVar2 = *(longlong *)(param_1 + 0x38), *(longlong *)(lVar2 + 0x90) != param_1 ||
      (*(char *)(param_1 + 0x20) == '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar1;
}

