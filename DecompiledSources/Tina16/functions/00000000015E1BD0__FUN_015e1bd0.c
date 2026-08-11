/* Ghidra address: 015e1bd0 */
/* Ghidra symbol: FUN_015e1bd0 */


void FUN_015e1bd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4f) != '\0') {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x238));
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x238) = 0;
    *(undefined1 *)(*(longlong *)(param_2 + 0x60) + 0x111) = 1;
    FUN_015dca70(*(undefined8 *)(param_2 + 0x60),0x40);
    FUN_015e0e10(*(undefined8 *)(param_2 + 0x60),&LAB_015e1d60,0x28bf,0);
    FUN_015dcd20(*(undefined8 *)(param_2 + 0x60));
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x60) + 0x103) = *(undefined1 *)(param_2 + 0x4e);
  return;
}

