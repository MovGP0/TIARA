/* Ghidra address: 00d2a560 */
/* Ghidra symbol: FUN_00d2a560 */


void FUN_00d2a560(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x78)) {
    if (param_2 == 0) {
      param_2 = FUN_00d0cca0();
    }
    *(longlong *)(param_1 + 0x78) = param_2;
    FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_004144d0(param_1 + 0x88);
  }
  return;
}

