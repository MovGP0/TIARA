/* Ghidra address: 00606b80 */
/* Ghidra symbol: FUN_00606b80 */


void FUN_00606b80(longlong *param_1,short param_2)

{
  if (param_1[9] == 0) {
    FUN_00606460(param_1);
  }
  if (*(short *)(param_1[9] + 0x28) != param_2) {
    FUN_00606d90(param_1);
    *(short *)(param_1[9] + 0x28) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

