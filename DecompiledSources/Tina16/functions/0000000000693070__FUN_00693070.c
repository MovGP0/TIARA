/* Ghidra address: 00693070 */
/* Ghidra symbol: FUN_00693070 */


void FUN_00693070(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x68) == 0) && (*(short *)(param_2 + 8) == 1)) {
    if ((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_1 + 0x78) == 0)) {
      FUN_00693790(param_1,*(longlong *)(param_2 + 0x10));
    }
  }
  else if ((*(longlong *)(param_1 + 0x70) == 0) && (*(short *)(param_2 + 8) == 1)) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}

