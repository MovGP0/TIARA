/* Ghidra address: 01c6ce10 */
/* Ghidra symbol: FUN_01c6ce10 */


void FUN_01c6ce10(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 7000) != 0) &&
     ((*(longlong *)(param_2 + 8) == 0x3f4e || (*(longlong *)(param_2 + 8) == 0x3f4f)))) {
    (**(code **)(**(longlong **)(param_1 + 7000) + 0x70))(*(longlong **)(param_1 + 7000),param_2);
  }
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

