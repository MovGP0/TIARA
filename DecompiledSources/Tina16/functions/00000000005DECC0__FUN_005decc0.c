/* Ghidra address: 005decc0 */
/* Ghidra symbol: FUN_005decc0 */


void FUN_005decc0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005dec70();
  return;
}

