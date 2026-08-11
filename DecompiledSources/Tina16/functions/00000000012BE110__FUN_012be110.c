/* Ghidra address: 012be110 */
/* Ghidra symbol: FUN_012be110 */


void FUN_012be110(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 8) = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),param_3);
  return;
}

