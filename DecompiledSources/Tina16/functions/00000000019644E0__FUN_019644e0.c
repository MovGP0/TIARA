/* Ghidra address: 019644e0 */
/* Ghidra symbol: FUN_019644e0 */


void FUN_019644e0(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x39) != '\0') {
      FUN_0195cd40(param_1,*(undefined8 *)(param_2 + 0x40));
    }
    if (*(char *)(param_2 + 0x38) != '\0') {
      (**(code **)(*param_1 + 0xe8))(param_1,*(undefined8 *)(param_2 + 0x28));
    }
    if (*(char *)(param_2 + 0x3a) != '\0') {
      FUN_0195a6c0(param_1,*(undefined8 *)(param_2 + 0x30));
    }
  }
  return;
}

