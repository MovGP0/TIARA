/* Ghidra address: 0081ddb0 */
/* Ghidra symbol: FUN_0081ddb0 */


void FUN_0081ddb0(longlong *param_1)

{
  FUN_00786c70(param_1);
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (*(char *)(param_1[2] + 0x4d1) != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  if (param_1[0x14] != 0) {
    FUN_008179c0(param_1[0x14],0xffffffff,0xffffffff);
  }
  return;
}

