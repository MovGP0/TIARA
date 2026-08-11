/* Ghidra address: 004a4fd0 */
/* Ghidra symbol: FUN_004a4fd0 */


longlong FUN_004a4fd0(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = 0;
  if ((DAT_02011630 != 0) && (uVar2 = *(int *)(DAT_02011630 + 0x10) - 1, -1 < (int)uVar2)) {
    do {
      if (*(uint *)(DAT_02011630 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      lVar1 = (**(code **)(*(longlong *)(DAT_02011630 + 8) + (longlong)(int)uVar2 * 8))(param_1);
    } while ((lVar1 == 0) && (uVar2 = uVar2 - 1, uVar2 != 0xffffffff));
  }
  return lVar1;
}

