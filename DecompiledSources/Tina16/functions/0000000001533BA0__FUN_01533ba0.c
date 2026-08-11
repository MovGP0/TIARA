/* Ghidra address: 01533ba0 */
/* Ghidra symbol: FUN_01533ba0 */


void FUN_01533ba0(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0x8a0),
               *(char *)(*(longlong *)(param_1 + 0x8a0) + 0x80) == '\0');
  if (*(char *)(*(longlong *)(param_1 + 0x8a0) + 0x80) == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x930),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x928),0);
  }
  else {
    FUN_0064c650(*(undefined8 *)(param_1 + 0x910),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x928),1);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x928),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x930),1);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x928),2);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x910),2);
  }
  return;
}

