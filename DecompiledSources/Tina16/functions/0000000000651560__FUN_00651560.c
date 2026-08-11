/* Ghidra address: 00651560 */
/* Ghidra symbol: FUN_00651560 */


void FUN_00651560(longlong param_1)

{
  if ((*(char *)(param_1 + 0xfe) != '\0') &&
     (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) ==
      ((*(ushort *)(*(longlong *)(param_1 + 0x78) + 0x34) & 0x10) != 0))) {
    FUN_0064dfb0(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0xfd));
    *(undefined1 *)(param_1 + 0xfe) = 1;
  }
  return;
}

