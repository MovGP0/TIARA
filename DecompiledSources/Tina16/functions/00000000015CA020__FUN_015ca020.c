/* Ghidra address: 015ca020 */
/* Ghidra symbol: FUN_015ca020 */


undefined8 FUN_015ca020(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x84) == '\0') {
    FUN_004144d0(param_2);
  }
  else {
    FUN_00414bf0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x30));
  }
  return param_2;
}

