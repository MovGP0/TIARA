/* Ghidra address: 015127f0 */
/* Ghidra symbol: FUN_015127f0 */


void FUN_015127f0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x808) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x970) + 0x328) != '\0')) {
    *(undefined1 *)(param_1 + 0x808) = 1;
    FUN_010e35e0(param_1,6,8);
  }
  if ((*(char *)(param_1 + 0x808) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x970) + 0x328) == '\0')) {
    *(undefined1 *)(param_1 + 0x808) = 0;
    FUN_010e35e0(param_1,8,6);
  }
  return;
}

