/* Ghidra address: 0080fd80 */
/* Ghidra symbol: FUN_0080fd80 */


void FUN_0080fd80(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[2]) {
    *(char *)(param_1 + 2) = param_2;
    if (((char)param_1[2] != '\0') && (*(char *)(param_1[1] + 0x678) != '\0')) {
      FUN_00806900(param_1[1],0);
    }
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

