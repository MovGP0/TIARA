/* Ghidra address: 01c3d550 */
/* Ghidra symbol: FUN_01c3d550 */


void FUN_01c3d550(longlong param_1)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x720));
  }
  else {
    FUN_00414ad0(param_1 + 0x940);
  }
  return;
}

