/* Ghidra address: 0044ec20 */
/* Ghidra symbol: FUN_0044ec20 */


undefined8 FUN_0044ec20(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = &DAT_0200c688;
  do {
    if (*piVar4 == 0) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
        iVar1 = 0;
      }
      UNLOCK();
      if (iVar1 == 0) {
        if (*(longlong *)(piVar4 + 2) == 0) {
          uVar2 = thunk_FUN_0416e139(0,0,0,0);
          *(undefined8 *)(piVar4 + 2) = uVar2;
        }
        return *(undefined8 *)(piVar4 + 2);
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 4;
    if (iVar3 == 0x20) {
      uVar2 = thunk_FUN_0416e139(0,0,0,0);
      thunk_FUN_0419e928(uVar2);
      return uVar2;
    }
  } while( true );
}

