/* Ghidra address: 00701660 */
/* Ghidra symbol: FUN_00701660 */


ulonglong FUN_00701660(longlong param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  
  if ((*(byte *)(param_1 + 0x4cb) & 2) != 0) {
    FUN_00636080(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4d4),
                 *(undefined4 *)(param_1 + 0x4d0),param_2,*(undefined1 *)(param_1 + 0x4cc));
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

