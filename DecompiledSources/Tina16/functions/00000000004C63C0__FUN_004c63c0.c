/* Ghidra address: 004c63c0 */
/* Ghidra symbol: FUN_004c63c0 */


bool FUN_004c63c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if ((((param_2 == 0) || (*(longlong *)(param_2 + 8) != *(longlong *)(param_1 + 0x68))) ||
      (param_3 == 0)) || (*(longlong *)(param_3 + 8) != *(longlong *)(param_1 + 0x60))) {
    bVar4 = false;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar2 = *(longlong *)(param_3 + 0x10);
    if (lVar1 == lVar2) {
      bVar4 = true;
    }
    else if ((lVar1 == 0) || (lVar2 == 0)) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_0043e420(lVar1,lVar2);
      bVar4 = iVar3 == 0;
    }
  }
  return bVar4;
}

