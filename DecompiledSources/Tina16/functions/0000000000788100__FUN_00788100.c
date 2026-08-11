/* Ghidra address: 00788100 */
/* Ghidra symbol: FUN_00788100 */


bool FUN_00788100(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 != 0) {
    lVar1 = thunk_FUN_041b2403(param_1,0x67c,0,0);
    bVar2 = lVar1 == 0x77;
  }
  return bVar2;
}

