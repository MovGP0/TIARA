/* Ghidra address: 01619ac0 */
/* Ghidra symbol: FUN_01619ac0 */


void FUN_01619ac0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

