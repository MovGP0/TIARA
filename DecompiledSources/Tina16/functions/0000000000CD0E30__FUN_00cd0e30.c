/* Ghidra address: 00cd0e30 */
/* Ghidra symbol: FUN_00cd0e30 */


longlong FUN_00cd0e30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00ccfdc0(&DAT_00cc7120,1);
  *(undefined1 *)(lVar1 + 0x50) = *(undefined1 *)(param_1 + 0x50);
  *(undefined1 *)(lVar1 + 0x51) = *(undefined1 *)(param_1 + 0x51);
  *(undefined1 *)(lVar1 + 8) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(lVar1 + 9) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(lVar1 + 10) = *(undefined1 *)(param_1 + 10);
  FUN_00414ad0(lVar1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  FUN_00414ad0(lVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
  FUN_00414ad0(lVar1 + 0x20,*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(lVar1 + 0x34) = *(undefined1 *)(param_1 + 0x34);
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return lVar1;
}

