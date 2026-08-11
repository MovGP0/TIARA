/* Ghidra address: 006f8ac0 */
/* Ghidra symbol: FUN_006f8ac0 */


void FUN_006f8ac0(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb4) = param_2;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

