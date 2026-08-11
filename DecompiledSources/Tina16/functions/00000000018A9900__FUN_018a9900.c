/* Ghidra address: 018a9900 */
/* Ghidra symbol: FUN_018a9900 */


void FUN_018a9900(longlong *param_1,char param_2)

{
  if (*(char *)(param_1[0xaa] + 0x551) != param_2) {
    *(char *)(param_1[0xaa] + 0x551) = param_2;
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

