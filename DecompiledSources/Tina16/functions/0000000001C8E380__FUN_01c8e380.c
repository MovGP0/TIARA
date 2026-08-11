/* Ghidra address: 01c8e380 */
/* Ghidra symbol: FUN_01c8e380 */


void FUN_01c8e380(undefined8 param_1,longlong param_2)

{
  FUN_01aebd80(param_1,param_2);
  if (*PTR_DAT_02005770 == '\0') {
    if (*(uint *)(param_2 + 8) < 3) {
      FUN_013a5290(*(undefined8 *)PTR_DAT_020032b8,*(undefined4 *)(param_2 + 8));
    }
    if (*(int *)(param_2 + 8) == 1) {
      FUN_0080bf50(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  return;
}

