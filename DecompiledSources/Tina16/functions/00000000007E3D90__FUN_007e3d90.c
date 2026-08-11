/* Ghidra address: 007e3d90 */
/* Ghidra symbol: FUN_007e3d90 */


void FUN_007e3d90(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xf0));
  }
  *(longlong *)(param_1 + 0xf8) = param_2;
  if (param_2 != 0) {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0xf0));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0xf8),param_1);
  }
  FUN_007e40c0(param_1);
  return;
}

