/* Ghidra address: 012cc920 */
/* Ghidra symbol: FUN_012cc920 */


void FUN_012cc920(longlong param_1)

{
  longlong lVar1;
  
  FUN_00410f20(*(undefined8 *)(param_1 + 0x738));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x740));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x748));
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x6f8);
  *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x700);
  return;
}

