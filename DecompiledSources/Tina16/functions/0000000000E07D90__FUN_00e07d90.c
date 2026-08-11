/* Ghidra address: 00e07d90 */
/* Ghidra symbol: FUN_00e07d90 */


void FUN_00e07d90(longlong param_1)

{
  if (*(short *)(param_1 + 0x2e) != 0) {
    if (*(short *)(param_1 + 0x2e) == 10) {
      *(undefined4 *)(param_1 + 0x1054) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1054) = 0;
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x1050) + *(int *)(param_1 + 0x1054);
  FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x1048));
  FUN_00414480(param_1 + 0x1048);
  *(undefined4 *)(param_1 + 0x1058) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  return;
}

