/* Ghidra address: 01c019e0 */
/* Ghidra symbol: FUN_01c019e0 */


undefined8 FUN_01c019e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x524) == '\0') {
      uVar2 = FUN_01bfaa20(lVar1);
    }
    else if (*(longlong *)(lVar1 + 0x38) == 0) {
      uVar2 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x10);
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x10));
    }
  }
  return uVar2;
}

