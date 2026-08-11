/* Ghidra address: 01a3fc60 */
/* Ghidra symbol: FUN_01a3fc60 */


void FUN_01a3fc60(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 0x130));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x128));
  if (*(longlong *)(param_2 + 0x120) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x120));
  }
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x170) + 0x808));
  *(undefined8 *)(*(longlong *)(param_2 + 0x170) + 0x808) = 0;
  return;
}

