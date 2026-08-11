/* Ghidra address: 00bd12c0 */
/* Ghidra symbol: FUN_00bd12c0 */


bool FUN_00bd12c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  iVar1 = FUN_00bd10d0(param_1);
  if (iVar1 == 0) {
    bVar3 = *(int *)(param_1 + 0x2c) == 0;
  }
  else {
    lVar2 = FUN_00bd10f0(param_1);
    bVar3 = *(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x2c);
  }
  return bVar3;
}

