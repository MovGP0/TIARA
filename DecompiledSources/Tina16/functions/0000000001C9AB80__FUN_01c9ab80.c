/* Ghidra address: 01c9ab80 */
/* Ghidra symbol: FUN_01c9ab80 */


void FUN_01c9ab80(longlong param_1)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x2750) != 0) {
    _write_log2(*(undefined8 *)(param_1 + 0x2738));
    FUN_01601740(*(undefined8 *)(param_1 + 0x2738),*(undefined8 *)(param_1 + 0x2740),
                 *(undefined8 *)(param_1 + 0x2750),0);
    if (*(longlong *)PTR_DAT_020044c0 != 0) {
      FUN_014ba190(*(undefined8 *)PTR_DAT_020044c0);
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x2750) + 0x7b8) != '\0') &&
       (*(longlong *)PTR_DAT_02004a90 != 0)) {
      FUN_01ba3da0();
    }
  }
  if (*(longlong *)PTR_DAT_020019c8 != 0) {
    if (*(char *)(*(longlong *)PTR_DAT_020019c8 + 0xd5f) != '\0') {
      local_20 = *(longlong *)PTR_DAT_020019c8;
      local_28 = FUN_00f847d0;
      FUN_00f834f0(&local_28);
    }
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5f) = 0;
    local_28 = FUN_01c88e70;
    local_20 = param_1;
    FUN_00f834f0(&local_28);
  }
  if (*(longlong *)PTR_DAT_020019c8 != 0) {
    if (*(char *)(*(longlong *)PTR_DAT_020019c8 + 0xd5a) == '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar1,0x1241,0,0);
    }
    else {
      FUN_00f85440(*(undefined8 *)PTR_DAT_020019c8);
    }
    if ((*(longlong *)PTR_DAT_020019c8 == 0) ||
       (*(int *)(*(longlong *)PTR_DAT_020019c8 + 0xd28) != 1)) {
      *(undefined1 *)(param_1 + 0x27c1) = 0;
    }
    else {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar1,0x1241,0,0);
    }
  }
  return;
}

