/* Ghidra address: 00452290 */
/* Ghidra symbol: FUN_00452290 */


ulonglong FUN_00452290(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong local_20 [2];
  
  FUN_00451da0(*(undefined8 *)(param_1 + 0x38),local_20);
  *(int *)(local_20[0] + 0x10) = *(int *)(local_20[0] + 0x10) + -1;
  if (*(int *)(local_20[0] + 0x10) == 0) {
    FUN_00451e30(*(undefined8 *)(param_1 + 0x38),local_20);
    local_20[0] = FUN_00427ab0();
    if (*(int *)(param_1 + 0x40) != (int)local_20[0]) {
      LOCK();
      piVar1 = (int *)(param_1 + 0x18);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar3 = iVar2 + 1;
      local_20[0] = (ulonglong)uVar3;
      if (uVar3 == 0xffff) {
        local_20[0] = FUN_00452040(param_1);
      }
      else if ((int)uVar3 < 1) {
        local_20[0] = (ulonglong)(uint)((int)uVar3 / 0xffff);
        if ((int)uVar3 % 0xffff == 0) {
          local_20[0] = FUN_00452040(param_1);
        }
      }
    }
  }
  return local_20[0];
}

