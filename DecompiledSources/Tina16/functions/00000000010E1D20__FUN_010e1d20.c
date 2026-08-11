/* Ghidra address: 010e1d20 */
/* Ghidra symbol: FUN_010e1d20 */


undefined8 FUN_010e1d20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    if (*(char *)(param_1 + 0x860) == '\0') {
      lVar3 = lVar1;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x8c0) + 0x408) == lVar1) ||
         ((lVar3 = *(longlong *)(param_1 + 0x8c0), *(longlong *)(lVar3 + 0x88) != 0 &&
          (lVar1 == *(longlong *)(lVar3 + 0x88))))) {
        uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      else {
        uVar2 = 0;
      }
    }
    else if ((*(longlong *)(*(longlong *)(param_1 + 0x8c0) + 0x408) == lVar1) ||
            ((*(longlong *)(param_1 + 0x8d8) != 0 && (lVar1 == *(longlong *)(param_1 + 0x8d8))))) {
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

