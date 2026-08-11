/* Ghidra address: 00bc7110 */
/* Ghidra symbol: FUN_00bc7110 */


void FUN_00bc7110(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 100) = param_2;
  FUN_00bc70f0(param_1);
  *(undefined1 *)(param_1 + 0x67) = 1;
  return;
}

