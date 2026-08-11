/* Ghidra address: 007e2f50 */
/* Ghidra symbol: FUN_007e2f50 */


void FUN_007e2f50(longlong *param_1,short param_2)

{
  if ((short)param_1[0x18] != param_2) {
    *(short *)(param_1 + 0x18) = param_2;
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

