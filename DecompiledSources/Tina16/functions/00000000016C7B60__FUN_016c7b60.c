/* Ghidra address: 016c7b60 */
/* Ghidra symbol: FUN_016c7b60 */


bool FUN_016c7b60(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if (pbVar1 == (byte *)0x0) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_00414f50(pbVar1,param_1 + 0x4e0,(ulonglong)*pbVar1 + 1);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

