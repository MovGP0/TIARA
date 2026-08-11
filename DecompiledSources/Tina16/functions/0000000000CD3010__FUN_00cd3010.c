/* Ghidra address: 00cd3010 */
/* Ghidra symbol: FUN_00cd3010 */


void FUN_00cd3010(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)PTR_DAT_02002fc0)(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

