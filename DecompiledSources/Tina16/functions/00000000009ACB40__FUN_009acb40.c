/* Ghidra address: 009acb40 */
/* Ghidra symbol: FUN_009acb40 */


void FUN_009acb40(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009acaf0();
  return;
}

