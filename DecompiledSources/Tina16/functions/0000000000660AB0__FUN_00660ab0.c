/* Ghidra address: 00660ab0 */
/* Ghidra symbol: FUN_00660ab0 */


undefined8 FUN_00660ab0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_00660e20(lVar1);
    if (lVar2 != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x28);
  }
  return 1;
}

