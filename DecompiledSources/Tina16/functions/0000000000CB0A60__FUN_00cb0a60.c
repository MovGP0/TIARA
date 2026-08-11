/* Ghidra address: 00cb0a60 */
/* Ghidra symbol: FUN_00cb0a60 */


void FUN_00cb0a60(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  return;
}

