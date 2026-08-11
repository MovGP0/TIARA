/* Ghidra address: 01a53c00 */
/* Ghidra symbol: FUN_01a53c00 */


undefined8 FUN_01a53c00(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x94c) == 1) {
    *(undefined4 *)(param_1 + 0x94c) = 2;
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x860));
  }
  else if (*(int *)(param_1 + 0x94c) == 2) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),param_2);
  }
  else if (*(longlong *)(param_1 + 0x858) == 0) {
    if (*(char *)(param_1 + 0x2b48) == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),param_2);
    }
    else {
      FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x20));
    }
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x860));
  }
  return param_2;
}

