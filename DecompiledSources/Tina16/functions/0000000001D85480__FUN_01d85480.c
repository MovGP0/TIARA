/* Ghidra address: 01d85480 */
/* Ghidra symbol: FUN_01d85480 */


void FUN_01d85480(longlong param_1,longlong *param_2)

{
  if ((char)param_2[10] != '\0') {
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined1 *)(param_1 + 0x2b));
  }
  return;
}

