/* Ghidra address: 0162d170 */
/* Ghidra symbol: FUN_0162d170 */


void FUN_0162d170(int *param_1,undefined8 param_2)

{
  if (((*param_1 == 10) && (*(longlong *)(param_1 + 2) != 0)) && (**(int **)(param_1 + 2) != 10)) {
    FUN_004ae7e0(param_2,*(undefined8 *)(param_1 + 2));
  }
  if (((*param_1 == 10) && (*(longlong *)(param_1 + 4) != 0)) && (**(int **)(param_1 + 4) != 10)) {
    FUN_004ae7e0(param_2,*(undefined8 *)(param_1 + 4));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_0162d170(*(longlong *)(param_1 + 2),param_2);
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_0162d170(*(longlong *)(param_1 + 4),param_2);
  }
  return;
}

