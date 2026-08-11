/* Ghidra address: 01b10ee0 */
/* Ghidra symbol: FUN_01b10ee0 */


void FUN_01b10ee0(longlong param_1,int param_2,undefined8 param_3)

{
  if ((param_2 < *(int *)(param_1 + 0x18)) && (-1 < param_2)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8) = param_3;
  }
  return;
}

