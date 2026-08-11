/* Ghidra address: 015f3cb0 */
/* Ghidra symbol: FUN_015f3cb0 */


void FUN_015f3cb0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x170) != 0) {
    FUN_017ff4a0(*(undefined8 *)(param_2 + 0x178),param_2 + 0x28);
    FUN_00414ad0(*(longlong *)(param_2 + 0x140) + 0x850,*(undefined8 *)(param_2 + 0x28));
  }
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_2 + 0x140);
  return;
}

