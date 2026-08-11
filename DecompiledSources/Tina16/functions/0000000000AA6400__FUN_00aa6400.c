/* Ghidra address: 00aa6400 */
/* Ghidra symbol: FUN_00aa6400 */


void FUN_00aa6400(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x260) != 0) || (*(longlong *)(param_1 + 0x270) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x180))(*(longlong **)(param_1 + 0xc0));
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_00a94670(*(longlong *)(param_1 + 0x260),*(undefined8 *)(param_1 + 600),0);
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_00a956b0(*(longlong *)(param_1 + 0x270),0);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  return;
}

