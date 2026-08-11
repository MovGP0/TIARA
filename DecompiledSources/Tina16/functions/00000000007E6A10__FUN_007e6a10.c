/* Ghidra address: 007e6a10 */
/* Ghidra symbol: FUN_007e6a10 */


void FUN_007e6a10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if ((*(ushort *)((longlong)param_1 + 0x34) & 9) == 0) {
    (**(code **)(*param_1 + 0x88))(param_1,param_3,param_4);
  }
  return;
}

