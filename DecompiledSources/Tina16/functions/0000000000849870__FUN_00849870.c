/* Ghidra address: 00849870 */
/* Ghidra symbol: FUN_00849870 */


void FUN_00849870(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (((*(uint *)((longlong)param_1 + 0x4d4) & 0x400) != 0) && (*(short *)(param_2 + 8) == 0xd)) {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

