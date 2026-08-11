/* Ghidra address: 00452200 */
/* Ghidra symbol: FUN_00452200 */


void FUN_00452200(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong local_20;
  
  FUN_00451da0(*(undefined8 *)(param_1 + 0x38),&local_20);
  *(int *)(local_20 + 0x10) = *(int *)(local_20 + 0x10) + 1;
  uVar2 = *(uint *)(local_20 + 0x10);
  iVar3 = FUN_00427ab0();
  if ((*(int *)(param_1 + 0x40) != iVar3) && (uVar2 < 2)) {
    FUN_00452060();
    while( true ) {
      LOCK();
      piVar1 = (int *)(param_1 + 0x18);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (0 < iVar3 + -1) break;
      LOCK();
      piVar1 = (int *)(param_1 + 0x18);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar3 == 0xfffe) {
        FUN_00452040(param_1);
      }
      thunk_FUN_0419965d(0);
      FUN_00452060();
    }
  }
  return;
}

