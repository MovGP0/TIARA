/* Ghidra address: 014b5780 */
/* Ghidra symbol: FUN_014b5780 */


void FUN_014b5780(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0x710),
               *(char *)(*(longlong *)(param_1 + 0x710) + 0x80) == '\0');
  FUN_007e2d20(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xfd8),
               *(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xfd8) + 0x80) == '\0');
  FUN_01c8a4d0(*(undefined8 *)PTR_DAT_02004e40,
               *(undefined1 *)(*(longlong *)(param_1 + 0x710) + 0x80),1);
  return;
}

