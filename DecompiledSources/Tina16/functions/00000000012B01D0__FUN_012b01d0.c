/* Ghidra address: 012b01d0 */
/* Ghidra symbol: FUN_012b01d0 */


void FUN_012b01d0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x148))(*(longlong **)(param_1 + 0xdb8),2);
  if (*(char *)(param_1 + 0xdd0) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0xbc0) + 0x328) == '\0') {
      *(undefined1 *)(param_1 + 0xde8) = 0xf;
    }
    else {
      *(undefined1 *)(param_1 + 0xde8) = 4;
    }
    *PTR_DAT_02001100 = *(undefined1 *)(param_1 + 0xde8);
  }
  return;
}

