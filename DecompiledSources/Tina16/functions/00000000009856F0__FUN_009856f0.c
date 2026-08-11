/* Ghidra address: 009856f0 */
/* Ghidra symbol: FUN_009856f0 */


void FUN_009856f0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80) = *(undefined8 *)(param_1 + 0x98);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80) = *(undefined8 *)(param_1 + 0xa8);
  }
  return;
}

