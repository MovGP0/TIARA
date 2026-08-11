/* Ghidra address: 019512a0 */
/* Ghidra symbol: FUN_019512a0 */


void FUN_019512a0(longlong *param_1,char param_2)

{
  if ((param_2 != '\0') && (param_1[0x1e] != 0)) {
    (**(code **)(*param_1 + 0xe8))(param_1,*(undefined8 *)(param_1[0x1e] + 0x78));
  }
  *(char *)(param_1 + 0x17) = param_2;
  return;
}

