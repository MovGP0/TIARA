/* Ghidra address: 00c78e40 */
/* Ghidra symbol: FUN_00c78e40 */


void FUN_00c78e40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x368) != 0) {
    (**(code **)(param_1 + 0x368))(*(undefined8 *)(param_1 + 0x370),param_1);
  }
  return;
}

