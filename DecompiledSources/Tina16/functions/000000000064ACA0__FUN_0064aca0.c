/* Ghidra address: 0064aca0 */
/* Ghidra symbol: FUN_0064aca0 */


longlong FUN_0064aca0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = thunk_FUN_04129e10(*param_1);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_006485b0(lVar1);
    if (lVar2 != 0) break;
    lVar1 = thunk_FUN_03de17fb(lVar1);
  }
  return lVar2;
}

