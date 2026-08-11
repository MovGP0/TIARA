/* Ghidra address: 018a9930 */
/* Ghidra symbol: FUN_018a9930 */


undefined1 FUN_018a9930(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x508) + 0xa9);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x4b8);
  }
  return uVar1;
}

