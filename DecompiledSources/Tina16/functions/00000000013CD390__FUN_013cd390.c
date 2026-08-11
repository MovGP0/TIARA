/* Ghidra address: 013cd390 */
/* Ghidra symbol: FUN_013cd390 */


void FUN_013cd390(longlong param_1)

{
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),0,0);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,0);
  if (*(char *)(param_1 + 0x949) == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),0);
    FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6c0) + 0x94) +
                         *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c) + 2);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),1);
    FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6c0) + 0x94) +
                         *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x9c) +
                         *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c) + 2);
  }
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),0,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  return;
}

