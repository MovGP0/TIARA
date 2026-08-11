/* Ghidra address: 00c099c0 */
/* Ghidra symbol: FUN_00c099c0 */


void FUN_00c099c0(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0xb7) != '\0') && (*(char *)(param_2 + 0xb6) == '\0')) {
    FUN_00bf28a0(*(undefined8 *)(param_2 + 0xf0));
  }
  if (*(char *)(param_2 + 0xb5) != '\0') {
    FUN_00c087b0(*(undefined8 *)(param_2 + 0xf0));
  }
  (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x2f8))(*(undefined8 *)(param_2 + 0xf0),1);
  return;
}

