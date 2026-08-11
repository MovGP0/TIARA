/* Ghidra address: 014b5ee0 */
/* Ghidra symbol: FUN_014b5ee0 */


void FUN_014b5ee0(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0x7a0),
               *(char *)(*(longlong *)(param_1 + 0x7a0) + 0x80) == '\0');
  if (*(char *)(*(longlong *)(param_1 + 0x7a0) + 0x80) == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x838),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x830),0);
  }
  else {
    FUN_0064c650(*(undefined8 *)(param_1 + 0x818),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x830),1);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x830),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x838),1);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x830),2);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x818),2);
  }
  return;
}

