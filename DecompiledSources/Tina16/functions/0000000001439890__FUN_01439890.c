/* Ghidra address: 01439890 */
/* Ghidra symbol: FUN_01439890 */


void FUN_01439890(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x11f));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x6f0));
    FUN_004ae870(*(undefined8 *)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x6e8));
  }
  return;
}

