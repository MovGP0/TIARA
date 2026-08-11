/* Ghidra address: 0080c790 */
/* Ghidra symbol: FUN_0080c790 */


bool FUN_0080c790(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x4d6) == '\x02')) &&
      (*(longlong *)(DAT_02012670 + 0xd8) != 0)) &&
     (bVar3 = false, *(char *)(*(longlong *)(DAT_02012670 + 0xd8) + 0x4d6) == '\x01')) {
    iVar2 = thunk_FUN_040bafa9(*(undefined8 *)(lVar1 + 0x698));
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}

