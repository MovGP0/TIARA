/* Ghidra address: 00e07d60 */
/* Ghidra symbol: FUN_00e07d60 */


undefined1 FUN_00e07d60(longlong param_1)

{
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  return 1;
}

