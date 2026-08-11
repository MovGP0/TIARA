/* Ghidra address: 01bfac70 */
/* Ghidra symbol: FUN_01bfac70 */


undefined8 FUN_01bfac70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0) ||
     ((param_2 != 0 && (lVar1 = FUN_01bfaa70(param_2), lVar1 == *(longlong *)(param_1 + 8))))) {
    uVar3 = 1;
  }
  else {
    lVar1 = FUN_01bfab50(param_1);
    for (lVar1 = *(longlong *)(lVar1 + 0x38); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x38)) {
      lVar2 = FUN_01bfaa70(param_2);
      if (*(longlong *)(lVar1 + 8) == lVar2) {
        return 1;
      }
      lVar1 = FUN_01bfab50(lVar1);
    }
  }
  return uVar3;
}

