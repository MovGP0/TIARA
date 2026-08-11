/* Ghidra address: 0109f2c0 */
/* Ghidra symbol: FUN_0109f2c0 */


void FUN_0109f2c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x9e1) == '\0') {
    _Dbg_SetNodeChanged(*(undefined8 *)(param_1 + 0x9c0),0);
    _Dbg_Run(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x38),1);
  }
  return;
}

