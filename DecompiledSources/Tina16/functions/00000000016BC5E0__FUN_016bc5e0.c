/* Ghidra address: 016bc5e0 */
/* Ghidra symbol: FUN_016bc5e0 */


void FUN_016bc5e0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(param_1 + 0x9c0);
    *(undefined8 *)(param_1 + 0x9f8) = *(undefined8 *)(param_1 + 0xa00);
    *(undefined8 *)(param_1 + 0xa10) = *(undefined8 *)(param_1 + 0xa18);
  }
  else {
    *(undefined8 *)(param_1 + 0x9d0) = *(undefined8 *)(param_1 + 0x9c8);
    *(undefined8 *)(param_1 + 0x9e8) = *(undefined8 *)(param_1 + 0x9e0);
  }
  *(undefined8 *)(param_1 + 0x9c8) = *(undefined8 *)(param_1 + 0x9d8);
  *(undefined8 *)(param_1 + 0x9e0) = *(undefined8 *)(param_1 + 0x9f0);
  return;
}

