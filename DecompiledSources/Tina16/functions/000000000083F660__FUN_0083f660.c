/* Ghidra address: 0083f660 */
/* Ghidra symbol: FUN_0083f660 */


char FUN_0083f660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = '\0';
  lVar2 = FUN_007f9b70(param_1,1);
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_041da4fa();
    while( true ) {
      iVar1 = thunk_FUN_041de4d6(lVar2);
      if ((iVar1 == 0) || (cVar3 != '\0')) break;
      if (lVar2 == *(longlong *)(param_1 + 0x468)) {
        cVar3 = '\x01';
      }
      else {
        lVar2 = thunk_FUN_03de17fb(lVar2);
      }
    }
  }
  else if ((*(longlong *)(lVar2 + 0x4c0) == param_1) &&
          (lVar2 == *(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd0))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  return cVar3;
}

