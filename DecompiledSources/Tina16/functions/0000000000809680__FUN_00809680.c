/* Ghidra address: 00809680 */
/* Ghidra symbol: FUN_00809680 */


longlong FUN_00809680(longlong param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0xfd) == '\0'));
      param_1 = *(longlong *)(param_1 + 0x78)) {
  }
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}

