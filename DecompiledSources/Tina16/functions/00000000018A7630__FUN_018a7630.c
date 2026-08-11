/* Ghidra address: 018a7630 */
/* Ghidra symbol: FUN_018a7630 */


void FUN_018a7630(longlong param_1)

{
  if ((*(char *)(param_1 + 0x508) == '\0') &&
     (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x208) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x538) + 0x208))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x538) + 0x210));
  }
  return;
}

