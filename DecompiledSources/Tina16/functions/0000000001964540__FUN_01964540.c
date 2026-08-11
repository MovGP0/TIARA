/* Ghidra address: 01964540 */
/* Ghidra symbol: FUN_01964540 */


void FUN_01964540(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x21) != '\0') {
      (**(code **)(*param_1 + 0xe8))(param_1,*(undefined8 *)(param_2 + 0x30));
    }
    if (*(char *)(param_2 + 0x22) != '\0') {
      FUN_0195cd40(param_1,*(undefined8 *)(param_2 + 0x38));
    }
    if (*(char *)(param_2 + 0x23) != '\0') {
      FUN_0195a6c0(param_1,*(undefined8 *)(param_2 + 0x40));
    }
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x48));
  }
  return;
}

