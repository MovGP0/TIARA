/* Ghidra address: 009736c0 */
/* Ghidra symbol: FUN_009736c0 */


void FUN_009736c0(longlong param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x79) == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x79) = 1;
    if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x90) != '\0') {
      *param_3 = 0x69;
      FUN_00414b90(param_4,*(undefined8 *)(param_2 + 0x90));
    }
  }
  else {
    *param_3 = 0x6c;
    FUN_00414b90(param_4,*(undefined8 *)(param_2 + 0x90));
  }
  return;
}

