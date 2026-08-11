/* Ghidra address: 00d4ac80 */
/* Ghidra symbol: FUN_00d4ac80 */


void FUN_00d4ac80(longlong *param_1,int *param_2)

{
  if (*param_2 == 5) {
    FUN_00788400(param_1);
    (**(code **)(*param_1 + 0x60))(param_1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    FUN_007899d0(param_1);
  }
  return;
}

