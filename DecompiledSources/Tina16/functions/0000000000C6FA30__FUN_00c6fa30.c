/* Ghidra address: 00c6fa30 */
/* Ghidra symbol: FUN_00c6fa30 */


longlong * FUN_00c6fa30(longlong param_1,longlong *param_2)

{
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x38));
  }
  else if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FUN_00441920(param_2,*(undefined8 *)(param_1 + 0x30));
      if (*param_2 == 0) {
        FUN_00441640(param_2,*(undefined8 *)(param_1 + 0x30));
      }
    }
    else {
      FUN_00441920(param_2,*(undefined8 *)(param_1 + 0x48));
      if (*param_2 == 0) {
        FUN_00441640(param_2,*(undefined8 *)(param_1 + 0x48));
      }
    }
  }
  else {
    FUN_00c65f70(param_2,*(char *)(param_1 + 0x40));
  }
  return param_2;
}

