/* Ghidra address: 007fbe20 */
/* Ghidra symbol: FUN_007fbe20 */


void FUN_007fbe20(longlong param_1,longlong param_2)

{
  FUN_007fad50(param_1,param_2);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(DAT_02012668 + 0x2d0);
  }
  return;
}

