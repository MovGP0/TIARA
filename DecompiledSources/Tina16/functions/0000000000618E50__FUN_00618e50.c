/* Ghidra address: 00618e50 */
/* Ghidra symbol: FUN_00618e50 */


ulonglong FUN_00618e50(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar1 = *(int *)PTR_DAT_02005280;
  if (iVar1 < 2) {
    iVar4 = -1;
  }
  else {
    iVar4 = 4000;
  }
  while( true ) {
    uVar3 = *param_1 & 0xfffffffffffffffe;
    LOCK();
    uVar2 = *param_1;
    if (uVar3 == uVar2) {
      *param_1 = uVar3 | 1;
      uVar2 = uVar3;
    }
    UNLOCK();
    if (uVar2 == uVar3) break;
    if (iVar4 < 0) {
      FUN_00428290();
      if (iVar1 < 2) {
        iVar4 = 0;
      }
      else {
        iVar4 = 4000;
      }
    }
    else {
      FUN_00412720();
    }
    iVar4 = iVar4 + -1;
  }
  return uVar3;
}

