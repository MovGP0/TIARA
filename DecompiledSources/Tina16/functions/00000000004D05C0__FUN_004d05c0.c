/* Ghidra address: 004d05c0 */
/* Ghidra symbol: FUN_004d05c0 */


void FUN_004d05c0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  longlong local_30;
  uint local_24;
  longlong local_20;
  
  local_20 = DAT_02011658;
  local_50 = auStack_78;
  LOCK();
  DAT_02011658 = 0;
  UNLOCK();
  puVar1 = auStack_78;
  if (local_20 != 0) {
    local_30 = FUN_004f57c0(local_20);
    iVar2 = *(int *)(local_30 + 0x10);
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        if (*(uint *)(local_30 + 0x10) <= local_24) {
          FUN_00594f90();
        }
        local_40 = *(undefined8 *)(*(longlong *)(local_30 + 8) + (longlong)(int)local_24 * 8);
        FUN_00410f20(local_40);
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00412130(*(undefined8 *)(local_20 + 0x10));
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00410f20(local_20);
  return;
}

