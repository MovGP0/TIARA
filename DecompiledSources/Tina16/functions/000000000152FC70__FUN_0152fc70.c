/* Ghidra address: 0152fc70 */
/* Ghidra symbol: FUN_0152fc70 */


void FUN_0152fc70(longlong param_1)

{
  if (*(char *)(param_1 + 0x1bf9) != '\0') {
    *(undefined1 *)(param_1 + 0x1bf9) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x958) + 0x180))(*(longlong **)(param_1 + 0x958));
  }
  return;
}

