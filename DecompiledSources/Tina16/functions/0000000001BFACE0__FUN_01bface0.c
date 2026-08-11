/* Ghidra address: 01bface0 */
/* Ghidra symbol: FUN_01bface0 */


undefined8 FUN_01bface0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10);
    if ((((*(int *)(lVar2 + 0x10) < 1) &&
         (lVar2 = *(longlong *)(param_1 + 0x50), *(char *)(lVar2 + 0x30) != '\0')) &&
        (lVar2 = *(longlong *)(param_1 + 0x50), *(char *)(lVar2 + 0x48) == '\x01')) &&
       (((lVar2 = *(longlong *)(param_1 + 0x50), *(char *)(lVar2 + 0x40) != '\0' &&
         (lVar2 = *(longlong *)(param_1 + 0x50), *(char *)(lVar2 + 0x4a) != '\0')) &&
        (lVar2 = *(longlong *)(param_1 + 0x50), *(char *)(lVar2 + 0x49) != '\0')))) {
      uVar1 = 0;
    }
    else {
      uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return uVar1;
}

