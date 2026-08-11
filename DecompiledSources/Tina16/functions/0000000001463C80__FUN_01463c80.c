/* Ghidra address: 01463c80 */
/* Ghidra symbol: FUN_01463c80 */


void FUN_01463c80(longlong param_1)

{
  DAT_01f4c0d8 = FUN_007fd800(param_1);
  DAT_01f4c0dc = FUN_007fd7d0(param_1);
  DAT_01f4c0e0 = *(undefined4 *)(param_1 + 0x9c);
  DAT_01f4c0e4 = *(undefined4 *)(param_1 + 0x98);
  FUN_00410f20(DAT_0210ea30);
  DAT_0210ea30 = 0;
  FUN_00410f20(DAT_0210ea48);
  DAT_0210ea48 = 0;
  FUN_00410f20(DAT_0210ea40);
  DAT_0210ea40 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x860) + -0x20))(*(longlong **)(param_1 + 0x860),1);
  return;
}

