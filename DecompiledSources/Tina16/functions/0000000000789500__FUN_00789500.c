/* Ghidra address: 00789500 */
/* Ghidra symbol: FUN_00789500 */


bool FUN_00789500(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int local_1c;
  
  local_1c = 0x93;
  bVar2 = false;
  lVar1 = thunk_FUN_03de17fb(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    thunk_FUN_041b2403(lVar1,0x14,0,&local_1c);
    bVar2 = local_1c == 0x11;
  }
  return bVar2;
}

