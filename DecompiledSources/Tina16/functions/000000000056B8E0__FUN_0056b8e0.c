/* Ghidra address: 0056b8e0 */
/* Ghidra symbol: FUN_0056b8e0 */


void FUN_0056b8e0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0056b890();
  return;
}

