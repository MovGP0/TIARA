/* Ghidra address: 0106a1c0 */
/* Ghidra symbol: FUN_0106a1c0 */


undefined1 FUN_0106a1c0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x162);
  if ((((*(char *)(param_1 + 0x161) == '\x04') || (*(char *)(param_1 + 0x161) == '\x05')) &&
      (*(char *)(param_1 + 0x160) == '\0')) &&
     (7 < *(byte *)(param_1 + 0x162) || (1 << (*(byte *)(param_1 + 0x162) & 0x1f) & 0xa2U) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

