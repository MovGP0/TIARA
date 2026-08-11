/* Ghidra address: 0151f810 */
/* Ghidra symbol: FUN_0151f810 */


void FUN_0151f810(longlong param_1)

{
  if (*(char *)(param_1 + 0x7ed) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x178))(*(longlong **)(param_1 + 0xec8));
    *(undefined1 *)(param_1 + 0x7ed) = 0;
  }
  *(undefined1 *)(param_1 + 0x7ec) = 1;
  FUN_010e4520(param_1,2);
  return;
}

