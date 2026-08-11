/* Ghidra address: 00d476b0 */
/* Ghidra symbol: FUN_00d476b0 */


void FUN_00d476b0(longlong param_1)

{
  FUN_00d3d4b0(param_1);
  if (*(char *)(param_1 + 0xae) == '\x01') {
    thunk_FUN_04145aef(*(undefined8 *)(param_1 + 8),1,*(undefined4 *)(param_1 + 0xb8),0);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x115,
                       (uint)*(ushort *)(param_1 + 0xb8) << 0x10 | 5,0);
  }
  return;
}

