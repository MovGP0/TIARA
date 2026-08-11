/* Ghidra address: 01814800 */
/* Ghidra symbol: FUN_01814800 */


longlong FUN_01814800(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x10),
                       *(undefined4 *)(param_1 + 0x2c));
  lVar2 = FUN_00410e60(&DAT_01810ed8,1);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  FUN_00414ad0(lVar2 + 0x18,*(undefined8 *)(lVar1 + 0x18));
  return lVar2;
}

