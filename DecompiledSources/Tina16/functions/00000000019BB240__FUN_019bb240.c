/* Ghidra address: 019bb240 */
/* Ghidra symbol: FUN_019bb240 */


void FUN_019bb240(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x78) + 0x478) != '\0')) {
    FUN_006487e0(param_1,*(undefined8 *)(param_2 + 8));
  }
  FUN_019bab40(param_1,*(undefined8 *)(param_2 + 8),1);
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

