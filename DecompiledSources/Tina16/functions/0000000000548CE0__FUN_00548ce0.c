/* Ghidra address: 00548ce0 */
/* Ghidra symbol: FUN_00548ce0 */


bool FUN_00548ce0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_00548d90(param_1);
  if ((*(ushort *)(lVar2 + 8) & 4) == 0) {
    lVar2 = FUN_00548d90(param_1);
    bVar3 = (*(ushort *)(lVar2 + 8) & 2) == 0;
  }
  else {
    lVar2 = FUN_00548d90(param_1);
    cVar1 = FUN_0053c6d0(*(undefined2 *)(lVar2 + 8),0,2);
    bVar3 = cVar1 == '\x02';
  }
  return bVar3;
}

