/* Ghidra address: 00b9be80 */
/* Ghidra symbol: FUN_00b9be80 */


void FUN_00b9be80(longlong param_1)

{
  if (*(char *)(param_1 + 0x5e) != '\0') {
    param_1 = FUN_0044d490(&PTR_FUN_00b9aef0,1,*(undefined8 *)PTR_PTR_02003e00);
    FUN_004134c0();
  }
  *(undefined1 *)(param_1 + 0x5e) = 1;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  return;
}

