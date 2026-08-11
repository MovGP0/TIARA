/* Ghidra address: 00cb35c0 */
/* Ghidra symbol: FUN_00cb35c0 */


void FUN_00cb35c0(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x144) = param_2;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x128) + 0x16c) = param_2;
  }
  return;
}

