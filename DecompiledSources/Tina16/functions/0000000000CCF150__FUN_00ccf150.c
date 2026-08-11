/* Ghidra address: 00ccf150 */
/* Ghidra symbol: FUN_00ccf150 */


void FUN_00ccf150(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar1 = FUN_00ccfdc0(&DAT_00cc7120,1);
    *(longlong *)(param_1 + 0x1c0) = lVar1;
    *(longlong *)(lVar1 + 0x60) = param_1;
    FUN_00414ad0(lVar1 + 0x10,*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 8));
    FUN_00414ad0(*(longlong *)(param_1 + 0x1c0) + 0x18,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x10));
    FUN_00414ad0(*(longlong *)(param_1 + 0x1c0) + 0x20,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x18));
    FUN_00414ad0(*(longlong *)(param_1 + 0x1c0) + 0x28,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x20));
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + 0x2c);
    *(undefined1 *)(lVar1 + 0x34) = *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + 0x30);
    FUN_00414ad0(lVar1 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x38));
    FUN_00414ad0(*(longlong *)(param_1 + 0x1c0) + 0x40,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x40));
    *(bool *)(*(longlong *)(param_1 + 0x1c0) + 0x51) = *(longlong *)(param_1 + 0x218) != 0;
    if ((*(longlong *)(param_1 + 0x1d8) == 0) && (*(longlong *)(param_1 + 0x1e8) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    *(undefined1 *)(lVar1 + 0x50) = uVar2;
    *(undefined1 *)(lVar1 + 8) = *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + 0x28);
    *(undefined1 *)(lVar1 + 9) = *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + 0x29);
    *(undefined1 *)(lVar1 + 10) = *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + 0x2a);
    FUN_00ccff70(lVar1,0);
  }
  return;
}

