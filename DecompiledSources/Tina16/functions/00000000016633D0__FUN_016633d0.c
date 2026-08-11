/* Ghidra address: 016633d0 */
/* Ghidra symbol: FUN_016633d0 */


void FUN_016633d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(longlong *)(param_1 + 0x13ae0) = param_1 + 0xf8;
  FUN_0165dfb0(param_1,0x55);
  FUN_0165dfb0(param_1,0x53);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0x89);
  FUN_0165dfb0(param_1,0xcd);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0x81);
  FUN_0165dfb0(param_1,0xec);
  *(undefined4 *)(param_1 + 0x13ac0) = 8;
  *(undefined4 *)(param_1 + 0x13ac4) = 8;
  *(undefined4 *)(param_1 + 0x13ac8) = *(undefined4 *)(*(longlong *)(param_1 + 0x13ae0) + 8);
  FUN_0165e0c0(param_1,0);
  return;
}

