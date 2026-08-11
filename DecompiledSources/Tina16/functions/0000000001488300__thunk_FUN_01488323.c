/* Ghidra address: 01488300 */
/* Ghidra symbol: thunk_FUN_01488323 */


undefined8 thunk_FUN_01488323(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  while( true ) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + -8);
    }
    if (lVar2 + -1 <= (longlong)*(int *)(param_1 + 0x10)) break;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    if (*(int *)(lVar1 + (longlong)*(int *)(param_1 + 0x10) * 0x18) != -1) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}

