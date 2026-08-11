/* Ghidra address: 00659e90 */
/* Ghidra symbol: FUN_00659e90 */


void FUN_00659e90(longlong *param_1,longlong param_2)

{
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) || (param_1[0xf] == 0)) {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

