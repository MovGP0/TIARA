/* Ghidra address: 00609d30 */
/* Ghidra symbol: FUN_00609d30 */


void FUN_00609d30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xaf) != '\0') {
    thunk_FUN_0418f5de(*(undefined8 *)(*(longlong *)(param_2 + 0xf8) + 0x60),
                       *(undefined8 *)(param_2 + 0xa0),0xffffffff);
  }
  return;
}

