/* Ghidra address: 00777c40 */
/* Ghidra symbol: FUN_00777c40 */


bool FUN_00777c40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)) {
    if (DAT_020125ac == 0) {
      DAT_020125ac = thunk_FUN_03ce67dd(L"BDSUnthemedDesigner");
    }
    lVar1 = FUN_0064fca0(param_1,DAT_020125ac,100,0);
    bVar2 = lVar1 == 100;
  }
  return bVar2;
}

