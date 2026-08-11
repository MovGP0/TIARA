/* Ghidra address: 00808d30 */
/* Ghidra symbol: FUN_00808d30 */


void FUN_00808d30(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x2a0) + 0x160) = 0;
  if (DAT_02012670 != 0) {
    FUN_0080e110(DAT_02012668,0xb05a,0,0);
  }
  if (DAT_02012668 != 0) {
    FUN_0080dd10(DAT_02012668,*(undefined1 *)(param_2 + 0x28f));
  }
  return;
}

