/* Ghidra address: 0080a8a0 */
/* Ghidra symbol: FUN_0080a8a0 */


void FUN_0080a8a0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) == param_2) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(longlong *)(param_1 + 0xb0) == param_2) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(longlong *)(DAT_02012670 + 200) == param_2) {
    *(undefined8 *)(DAT_02012670 + 200) = 0;
  }
  if (*(longlong *)(DAT_02012670 + 0xd0) == param_2) {
    *(undefined8 *)(DAT_02012670 + 0xd0) = 0;
    *(undefined8 *)(DAT_02012670 + 0xd8) = 0;
  }
  if (*(longlong *)(DAT_02012670 + 0xf0) == param_2) {
    *(undefined8 *)(DAT_02012670 + 0xf0) = 0;
  }
  if (*(longlong *)(param_1 + 0xd8) == param_2) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_008080d0(DAT_02012670);
  return;
}

