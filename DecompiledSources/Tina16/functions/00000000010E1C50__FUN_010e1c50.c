/* Ghidra address: 010e1c50 */
/* Ghidra symbol: FUN_010e1c50 */


undefined8 FUN_010e1c50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    if (*(char *)(param_1 + 0x860) == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x8c0);
      if ((*(longlong *)(lVar2 + 0x88) == 0) || (lVar1 != *(longlong *)(lVar2 + 0x88))) {
        uVar3 = 0;
      }
      else {
        uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
    else if ((*(longlong *)(param_1 + 0x8d8) == 0) || (lVar1 != *(longlong *)(param_1 + 0x8d8))) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return uVar3;
}

