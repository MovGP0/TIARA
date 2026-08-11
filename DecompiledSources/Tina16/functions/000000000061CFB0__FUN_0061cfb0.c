/* Ghidra address: 0061cfb0 */
/* Ghidra symbol: FUN_0061cfb0 */


void FUN_0061cfb0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 200));
  }
  *(longlong *)(param_1 + 0xd0) = param_2;
  if (param_2 != 0) {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 200));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0xd0),param_1);
  }
  return;
}

