/* Ghidra address: 014ef3d0 */
/* Ghidra symbol: FUN_014ef3d0 */


void FUN_014ef3d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x8a0) == '\0';
  *(undefined1 *)(param_1 + 0x8a0) = 0;
  return;
}

