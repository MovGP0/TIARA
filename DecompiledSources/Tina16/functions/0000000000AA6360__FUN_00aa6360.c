/* Ghidra address: 00aa6360 */
/* Ghidra symbol: FUN_00aa6360 */


undefined8 * FUN_00aa6360(longlong param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x92) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xe0))(*(longlong **)(param_1 + 0xc0),param_2);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x70);
    param_2[1] = *(undefined8 *)(param_1 + 0x78);
  }
  return param_2;
}

