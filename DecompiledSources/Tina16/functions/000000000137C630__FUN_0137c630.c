/* Ghidra address: 0137c630 */
/* Ghidra symbol: FUN_0137c630 */


void FUN_0137c630(longlong *param_1,undefined4 *param_2,undefined1 *param_3)

{
  *param_2 = (int)param_1[0x18];
  *param_3 = *(undefined1 *)((longlong)param_1 + 0xcc);
  (**(code **)(*param_1 + 0x130))(param_1,param_2,param_3,1);
  return;
}

