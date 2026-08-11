/* Ghidra address: 013f57d0 */
/* Ghidra symbol: FUN_013f57d0 */


void FUN_013f57d0(longlong param_1)

{
  if (*(char *)(param_1 + 0x8e4) != '\0') {
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0x8e4) = 0;
  }
  return;
}

