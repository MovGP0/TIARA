/* Ghidra address: 0151fc80 */
/* Ghidra symbol: FUN_0151fc80 */


void FUN_0151fc80(longlong param_1,undefined8 param_2,short *param_3)

{
  if (*param_3 == 0xd) {
    *param_3 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0xd50) + 0x328) != '\0') {
      FUN_0151f860(param_1,6);
    }
    if (*(char *)(*(longlong *)(param_1 + 0xd98) + 0x328) != '\0') {
      FUN_0151f8f0(param_1,6);
    }
  }
  return;
}

