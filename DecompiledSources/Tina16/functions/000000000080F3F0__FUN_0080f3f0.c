/* Ghidra address: 0080f3f0 */
/* Ghidra symbol: FUN_0080f3f0 */


void FUN_0080f3f0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x158) == '\0') {
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x2d0),0xb031,0,param_2);
  }
  *(undefined8 *)(param_1 + 0x170) = param_2;
  return;
}

