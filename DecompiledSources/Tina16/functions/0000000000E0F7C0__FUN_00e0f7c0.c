/* Ghidra address: 00e0f7c0 */
/* Ghidra symbol: FUN_00e0f7c0 */


longlong FUN_00e0f7c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00e0f700(&DAT_00e0cda8,1);
  FUN_00e0f7a0(lVar1,*(undefined4 *)(param_1 + 8));
  FUN_00414ad0(lVar1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  FUN_00414ad0(lVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FUN_00414ad0(lVar1 + 0x20,*(undefined8 *)(param_1 + 0x20));
  FUN_00414ad0(lVar1 + 0x28,*(undefined8 *)(param_1 + 0x28));
  return lVar1;
}

