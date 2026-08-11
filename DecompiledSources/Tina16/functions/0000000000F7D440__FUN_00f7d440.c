/* Ghidra address: 00f7d440 */
/* Ghidra symbol: FUN_00f7d440 */


void FUN_00f7d440(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  _Dbg_SetNodeChanged(*(undefined8 *)(param_1 + 0x10),0);
  _Dbg_TraceInto(*(undefined8 *)(param_1 + 0x38),param_3);
  *param_2 = 1;
  return;
}

