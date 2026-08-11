/* Ghidra address: 00d478c0 */
/* Ghidra symbol: FUN_00d478c0 */


longlong FUN_00d478c0(longlong param_1,longlong param_2)

{
  FUN_00787be0(*(undefined8 *)(param_1 + 0x18),param_2);
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1328,0,param_2);
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 2;
  return param_2;
}

