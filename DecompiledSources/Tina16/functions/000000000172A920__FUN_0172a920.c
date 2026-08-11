/* Ghidra address: 0172a920 */
/* Ghidra symbol: FUN_0172a920 */


void FUN_0172a920(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_00409a70(*(undefined8 *)(param_1 + 0x10),param_2,(longlong)param_3);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)param_3;
  return;
}

