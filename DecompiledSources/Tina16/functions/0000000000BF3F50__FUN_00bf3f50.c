/* Ghidra address: 00bf3f50 */
/* Ghidra symbol: FUN_00bf3f50 */


void FUN_00bf3f50(longlong *param_1,undefined2 *param_2)

{
  if ((*(ushort *)(param_1 + 199) & 8) == 0) {
    FUN_00bd9c10(param_1[0xcb],param_1,param_2);
    (**(code **)(*param_1 + 0x328))(param_1,0x1ff,*param_2,0);
  }
  else {
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfff7;
  }
  return;
}

