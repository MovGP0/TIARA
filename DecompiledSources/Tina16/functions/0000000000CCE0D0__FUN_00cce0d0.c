/* Ghidra address: 00cce0d0 */
/* Ghidra symbol: FUN_00cce0d0 */


void FUN_00cce0d0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = FUN_00ccfdc0(&DAT_00cc7120,1);
  *(longlong *)(param_1 + 0x100) = lVar1;
  *(longlong *)(lVar1 + 0x60) = param_1;
  FUN_00414ad0(lVar1 + 0x10,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 8));
  FUN_00414ad0(*(longlong *)(param_1 + 0x100) + 0x18,
               *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x10));
  FUN_00414ad0(*(longlong *)(param_1 + 0x100) + 0x20,
               *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x18));
  FUN_00414ad0(*(longlong *)(param_1 + 0x100) + 0x28,
               *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x100);
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0x2c);
  *(undefined1 *)(lVar1 + 0x34) = *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0x30);
  FUN_00414ad0(lVar1 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x38));
  FUN_00414ad0(*(longlong *)(param_1 + 0x100) + 0x40,
               *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x40));
  *(bool *)(*(longlong *)(param_1 + 0x100) + 0x51) = *(longlong *)(param_1 + 0x148) != 0;
  if ((*(longlong *)(param_1 + 0x108) == 0) && (*(longlong *)(param_1 + 0x118) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x100);
  *(undefined1 *)(lVar1 + 0x50) = uVar2;
  *(undefined1 *)(lVar1 + 8) = *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0x28);
  *(undefined1 *)(lVar1 + 10) = *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0x2a);
  *(undefined1 *)(lVar1 + 9) = *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0x29);
  FUN_00ccff70(lVar1,1);
  return;
}

