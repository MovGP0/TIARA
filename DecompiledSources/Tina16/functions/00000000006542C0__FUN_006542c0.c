/* Ghidra address: 006542c0 */
/* Ghidra symbol: FUN_006542c0 */


void FUN_006542c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) == 0) {
    if (*(char *)(param_2 + 0x37) != '\0') {
      *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x310) = 0;
    }
  }
  else {
    *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x310) = 0;
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}

