/* Ghidra address: 00d40d10 */
/* Ghidra symbol: FUN_00d40d10 */


void FUN_00d40d10(longlong *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  if ((int)param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x19) = 0;
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  return;
}

