/* Ghidra address: 008005c0 */
/* Ghidra symbol: FUN_008005c0 */


void FUN_008005c0(longlong param_1)

{
  FUN_0065a2f0(param_1);
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x4e0) + 0x80),
                 *(undefined4 *)(param_1 + 200));
    FUN_0064fca0(param_1,0xb03b,0,0);
  }
  return;
}

