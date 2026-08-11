/* Ghidra address: 00412160 */
/* Ghidra symbol: FUN_00412160 */


longlong FUN_00412160(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 1;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    while( true ) {
      lVar1 = (**(code **)PTR_PTR_020069a0)();
      LOCK();
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (lVar2 == 0) {
        *(longlong *)(param_1 + 0x10) = lVar1;
        lVar2 = 0;
      }
      UNLOCK();
      if ((lVar2 != 0) && (bVar4 = lVar1 != 0, lVar1 = lVar2, bVar4)) {
        (**(code **)(PTR_PTR_020069a0 + 8))();
      }
      if (lVar1 != 0) break;
      thunk_FUN_0419965d(iVar3);
      if (iVar3 < 0x201) {
        iVar3 = iVar3 * 2;
      }
      else {
        iVar3 = 1;
      }
    }
  }
  return lVar1;
}

