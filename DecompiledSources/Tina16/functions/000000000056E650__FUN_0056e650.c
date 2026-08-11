/* Ghidra address: 0056e650 */
/* Ghidra symbol: FUN_0056e650 */


void FUN_0056e650(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0056e600();
  return;
}

